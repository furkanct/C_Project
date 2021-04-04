#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct StudentNodeTag {
	char* name;
	char* surname;
	int ID;
	struct StudentNodeTag* name_next;
	struct StudentNodeTag* surname_next;
	struct StudentNodeTag* ID_next;
}StudentNode;

typedef struct {
	StudentNode* name_head;
	StudentNode* surname_head;
	StudentNode* ID_head;
	unsigned int count;
}OrderedStudentList;


StudentNode* createNewNode(int ID, const char* name, const char* surname);
void deleteNode(StudentNode* node);
OrderedStudentList* createStudentList(void);
void closeList(OrderedStudentList* list);
int sizeList(OrderedStudentList* list);
int isEmptyList(OrderedStudentList* list);
void insertList(OrderedStudentList* list, StudentNode* node);
void insertIDList(OrderedStudentList* list, StudentNode* node);
void insertNameList(OrderedStudentList* list, StudentNode* node);
void insertSurnameList(OrderedStudentList* list, StudentNode* node);
int deleteList(OrderedStudentList* list, int ID);		// if the process is succesful, it returns 1 else return 0
StudentNode* findList(OrderedStudentList* list, int ID); // if the finding process is failure, returns NULL

//program functions declarations
void startProgram(const char* source_file_name);
void readFile(const char* source_file_name, OrderedStudentList* list);
void printSelections(void);										// display the selections in screen
void insertStudent(OrderedStudentList* list);					// insert the student to the linked list
void deleteStudent(OrderedStudentList* list);					// delete student from the list
void printStudentList(OrderedStudentList* list, FILE* stream);	// print the list according to stream (if stream is stdout : print to console)
void printStudentListFile(OrderedStudentList* list);
//program functions declarations end

int main()
{

	startProgram("students.txt");

	return 0;
}


void startProgram(const char* source_file_name) {
	char dest_file_name[30];

	OrderedStudentList* list = createStudentList();
	readFile(source_file_name, list);

	printStudentList(list, stdout);

	int flag = 1, choice;

	while (flag) {
		printSelections();
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			insertStudent(list); break;
		case 2:
			deleteStudent(list); break;
		case 3:
			printStudentList(list, stdout); break;
		case 4:
			printStudentListFile(list); break;
		case 5:
			flag = 0;
		}
	}

	printf("-----------------------\n");
	closeList(list);
}

void readFile(const char* source_file_name, OrderedStudentList* list) {
	
	FILE* stream = fopen(source_file_name, "r");
	if (stream == NULL) {
		printf("file couldnt be opened!\n");
		exit(EXIT_FAILURE);
	}
	
	char name[30], surname[30];
	int ID;	

	while (fscanf(stream, "%s%s%d", name, surname, &ID) != EOF) 
		insertList(list, createNewNode(ID, name, surname));
	
	
	
	fclose(stream);
}

void printSelections(void) {
	printf("\nEnter your choice:\n"
		"\t1 to insert a student into the list\n"
		"\t2 to delete a student from the list\n"
		"\t3 to print the students in the list\n"
		"\t4 to print the students to an output file\n"
		"\t5 to end\n? ");
}

void insertStudent(OrderedStudentList* list) {
	
	char name[30], surname[30];
	int ID;
	printf("Enter a student name, surname, and ID:\n");
	scanf("%s%s%d", name, surname, &ID);
	insertList(list, createNewNode(ID, name, surname));
}

void deleteStudent(OrderedStudentList* list) {
	
	int ID;
	printf("Enter a student ID:\n");
	scanf("%d", &ID);

	if (deleteList(list, ID) == 0) 
		printf("The student has %d ID number couldnt be found\n", ID);
	

}

void printStudentList(OrderedStudentList* list, FILE* stream) {

	int count = 0;

	fprintf(stream, "The list in name-alphabetical order:\n");
	for (StudentNode* p = list->name_head; p != NULL; p = p->name_next, ++count)
		fprintf(stream, "\t%2d. %s %s %d\n", count + 1, p->name, p->surname, p->ID);

	fprintf(stream, "\nThe list in surname-alphabetical order:\n");
	count = 0;
	for (StudentNode* p = list->surname_head; p != NULL; p = p->surname_next, ++count)
		fprintf(stream, "\t%2d. %s %s %d\n", count + 1, p->name, p->surname, p->ID);

	fprintf(stream, "\nThe list in ID sorted order:\n");
	count = 0;
	for (StudentNode* p = list->ID_head; p != NULL; p = p->ID_next, ++count)
		fprintf(stream, "\t%2d. %s %s %d\n", count + 1, p->name, p->surname, p->ID);

}

void printStudentListFile(OrderedStudentList* list) {
	char dest_file_name[30];
	printf("Enter a file name:\n");
	scanf("%s", dest_file_name);

	FILE* f = fopen(dest_file_name, "w");
	if (f == NULL) {
		printf("The file named \"%s\" couldn't be created!\n", dest_file_name);
		exit(EXIT_FAILURE);
	}

	printStudentList(list, f);
	printf("Output is printed to the file %s\n\n", dest_file_name);

	fclose(f);
}


/////////OrderedStudentList functions definitions:

StudentNode* createNewNode(int ID, const char* name, const char* surname) {
	
	StudentNode* p = (StudentNode*)malloc(sizeof(StudentNode));
	if (p == NULL) {
		printf("memory allocation error!\n");
		exit(EXIT_FAILURE);
	}
	
	p->name_next = p->surname_next = p->ID_next = NULL;
	p->ID = ID;

	p->name = (char*)malloc(sizeof(char) * (strlen(name) + 1));	

	p->surname = (char*)malloc(sizeof(char) * (strlen(surname) + 1));	

	if ((p->name == NULL) || (p->surname == NULL)) {
		printf("memory allocation error!\n");
		exit(EXIT_FAILURE);
	}

	strcpy(p->name, name);
	strcpy(p->surname, surname);

	return p;
}

void deleteNode(StudentNode* node) {

	free(node->surname);
	free(node->name);
	free(node);
}

OrderedStudentList* createStudentList(void) {
	OrderedStudentList* p = (OrderedStudentList*)malloc(sizeof(OrderedStudentList));
	if (p == NULL) {
		printf("Memory allocation error!\n");
		exit(EXIT_FAILURE);
	}
	p->count = 0;
	p->ID_head = p->name_head = p->surname_head = NULL;

	return p;
}

void closeList(OrderedStudentList* list) {
	while (!isEmptyList(list)) {
		StudentNode* ptemp = list->ID_head;
		list->ID_head = list->ID_head->ID_next;
		deleteNode(ptemp);
		--list->count;
	}
}

int sizeList(OrderedStudentList* list) {

	return list->count;
}

int isEmptyList(OrderedStudentList* list) {
	return list->count == 0;
}

void insertList(OrderedStudentList* list, StudentNode* node) {

	insertIDList(list, node);
	insertNameList(list, node);
	insertSurnameList(list, node);

	++list->count;
}

void insertIDList(OrderedStudentList* list, StudentNode* node) {

	if (list->ID_head == NULL) {
		node->ID_next = list->ID_head;
		list->ID_head = node;
	}

	else if (node->ID < list->ID_head->ID) {
		node->ID_next = list->ID_head;
		list->ID_head = node;
	}
	else {
		StudentNode* current, * prev = list->ID_head;
		for (current = prev->ID_next; current != NULL; current = current->ID_next, prev = prev->ID_next) {
			if (node->ID < current->ID)
				break;
		}
		prev->ID_next = node;
		node->ID_next = current;
	}

}

void insertNameList(OrderedStudentList* list, StudentNode* node) {
	
	if (list->name_head == NULL) {
		node->name_next = list->name_head;
		list->name_head = node;
	}

	else if (strcmp(node->name , list->name_head->name) < 0) {
		node->name_next = list->name_head;
		list->name_head = node;
	}
	else {
		StudentNode* current, * prev = list->name_head;
		for (current = prev->name_next; current != NULL; current = current->name_next, prev = prev->name_next) {
			if (strcmp(node->name, current->name) < 0)
				break;
		}
		prev->name_next = node;
		node->name_next = current;
	}
}


void insertSurnameList(OrderedStudentList* list, StudentNode* node) {

	if (list->surname_head == NULL) {
		node->surname_next = list->surname_head;
		list->surname_head = node;
	}

	else if (strcmp(node->surname, list->surname_head->surname) < 0) {
		node->surname_next = list->surname_head;
		list->surname_head = node;
	}
	else {
		StudentNode* current, * prev = list->surname_head;
		for (current = prev->surname_next; current != NULL; current = current->surname_next, prev = prev->surname_next) {
			if (strcmp(node->surname, current->surname) < 0)
				break;
		}
		prev->surname_next = node;
		node->surname_next = current;
	}

}


int deleteList(OrderedStudentList* list, int ID) {
	
	StudentNode* target = findList(list, ID);
	if (target == NULL) 
		return 0;
	
	StudentNode* current, *prev_target_ID = list->ID_head;
	if (list->ID_head != target) {
		current = list->ID_head->ID_next;
		while (current != target)
			prev_target_ID = prev_target_ID->ID_next, current = current->ID_next;

		prev_target_ID->ID_next = target->ID_next;
	}
	else
		list->ID_head = list->ID_head->ID_next;

	StudentNode* prev_target_name = list->name_head;
	if (list->name_head != target) {
		current = list->name_head->name_next;
		while (current != target) 
			prev_target_name = prev_target_name->name_next, current = current->name_next;
		
		prev_target_name->name_next = target->name_next;
	}
	else
		list->name_head = list->name_head->name_next;

	StudentNode* prev_target_surname = list->surname_head;
	if (list->surname_head != target) {
		current = list->surname_head->surname_next;
		while (current != target)
			prev_target_surname = prev_target_surname->surname_next, current = current->surname_next;
		
		prev_target_surname->surname_next = target->surname_next;
	}
	else
		list->surname_head = list->surname_head->surname_next;

	printf("The student \"%s %s   %d\" is deleted from the list\n", target->name, target->surname, target->ID);

	deleteNode(target);
	--list->count;

	return 1;
}


StudentNode* findList(OrderedStudentList* list, int ID) {
	for (StudentNode* p = list->ID_head; p != NULL; p = p->ID_next) {
		if (ID == p->ID) 
			return p;
	}

	return NULL;
}