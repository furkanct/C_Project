#include <stdio.h>	
#include <ctype.h>	// to use character type functions
#include <stdlib.h> // to include dynamic memory allocation functions

#define STRING_SIZE		100 // limit of the string length

typedef struct {
	char str[STRING_SIZE];
	unsigned int length;
}String;

typedef struct { // this type is created to keep all record in console strings
	String* slist;
	unsigned int size;
}StringList;

//function declarations
int charAt(const String* s, int index); 
String* concat(String* s1, String* s2);	
int strSearch(String* s1, String* s2);
unsigned int findScore(String* s);
unsigned int getNumberOfWords(const String* s);
unsigned int getNumberOfLetters(const String* s);
// end of the declarations



// some helper functions declarations for the strings
int String_compare(const String* s1, const String* s2);			// to compare to string without case sensitive
unsigned int String_length(const String* s);					// to get length of String
String* String_append_char(String* s, char ch);					// to add char end of string 
String* String_append_str(String* s, const char* p);			// to add string literal end of string
String* String_create(const char *p);							// to create NEW String in dynamic memory(heap area)
void String_delete(String* s);									// to free created area in dynamic memory
int String_find(const String* s, unsigned int index, char ch);	// to find the target char in string, if it doesnot exist, return -1
String* String_clear(String* s);								// to refresh the string
String* String_gets(String *s);									// get string from the console
String* String_ncopy(String* s1, const String* s2, unsigned int n);	// copy a string to other string n units
String* String_copy(String* s1, const String* s2, unsigned int beg, unsigned int n); // copy a string to other string n units from the beginin 'beg' index
void String_print(const String* s);								// to print the string in console 
int isLetter(char ch);											// if it returns 1, it is a letter, else if it returns 0, it is not a letter 
int isWordChar(char ch);										// to check, the char can be a element of a word
// helper functions declarations ends

// Some helper functions declarations for StringList
StringList* StringList_create();								// create new StringList in dynamic memory area
void StringList_delete(StringList* list);						// delete the area 
void StringList_clear(StringList* list);						
String* StringList_at(StringList* list, int index); // if it is failure, returns NULL
StringList* StringList_append(StringList* list, const String* s);
unsigned int StringList_size(const StringList* list);
// helper functions declarations ends


// program functions declarations

void start_program();
void command_1(String* s, unsigned int index);
void command_2(String* s, unsigned int index);
void command_3(String* s, unsigned int index);
void command_4(String*s);
int isQuit(const String* s);
int isStat(const String* s);

// program functions declarations ends


int main() {
	
	start_program();

	return 0;
}



int charAt(const String* s, int index) 
{
	if (index < 0 || index >= (int)s->length)
		return -1;

	return s->str[index];
}

String* concat(String* s1, String* s2) 
{
	
	int index = 0;
	char ch;
	while ((ch = charAt(s2, index++)) != -1) 
		String_append_char(s1, ch);
	

	return s1;
}

int strSearch(String* s1, String* s2) 
{

	const int INSIDE = 1, OUTSIDE = 0;
	int status = OUTSIDE;

	unsigned int length_s1 = String_length(s1);

	int searched_length = 0;
	String* word = String_create(NULL);		// create String object in memory with NULL string(nothing char in the String)

	for (unsigned int i = 0; i < length_s1; ++i) {
		if (isWordChar(charAt(s1, i))) {
			if (status == OUTSIDE) {
				status = INSIDE;
				char ch;
				while (isWordChar((ch = charAt(s1, i)))) {
					String_append_char(word, ch);
					++i;
				}
				

				int flag = 1;
				unsigned int length_word = String_length(word);
				for (unsigned int k = 0; k < length_word; ++k) 
					if (String_find(s2, 0, charAt(word, k)) == -1) {
						flag = 0;
						break;
					}
				
				if (flag == 1) 
					searched_length += String_length(word);
				
				String_clear(word);
				--i;
			}
		}
		else
			status = OUTSIDE;
	}

	String_delete(word);		// delete from the memory

	if (searched_length == 0)
		return -1;

	return searched_length;

}


unsigned int findScore(String* s) 
{

							    // A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P   Q  R  S  T  U  V  W  X  Y  Z
	static int point_table[26] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
	
	unsigned int length = String_length(s);
	unsigned int score = 0;
	for (unsigned int i = 0; i < length; ++i) {
		char ch = charAt(s, i);
		if (isLetter(ch)) 
			if (ch <= 'Z')
				score += point_table[ch - 'A'];
			else
				score += point_table[ch - ('a' - 'A') - 'A'];
	}

	return score;
}


unsigned int getNumberOfWords(const String* s) 
{

	const int INSIDE = 1, OUTSIDE = 0;
	int status = OUTSIDE;
	int countOfWords = 0;

	unsigned int length = String_length(s);
	for (unsigned int i = 0; i < length; ++i) {
		if (isWordChar(s->str[i])) {
			if (status == OUTSIDE) {
				++countOfWords;
				status = INSIDE;
			}
		}
		else
			status = OUTSIDE;
	}

	return countOfWords;
}

unsigned int getNumberOfLetters(const String* s) 
{
	unsigned int length = String_length(s);
	unsigned int count = 0;
	for (unsigned int i = 0; i < length; ++i)
		if (isLetter(charAt(s, i)))
			++count;

	return count;
}


// some helper functions declarations for the strings

int String_compare(const String* s1, const String* s2) 
{

	int index1 = 0, index2 = 0;
	while (s1->str[index1] != '\0') {
		char upperch1 = toupper(charAt(s1, index1));
		char upperch2 = toupper(charAt(s2, index2));
		if (upperch1 != upperch2) {
			return upperch1 - upperch2;
		}
		++index1;
		++index2;
	}

	return toupper(charAt(s1, index1)) - toupper(charAt(s2, index2));

}

unsigned int String_length(const String* s) 
{
	
	return s->length;
}

String* String_append_char(String* s, char ch) 
{
	s->str[s->length++] = ch;
	s->str[s->length] = '\0';

	return s;
}

String* String_append_str(String* s, const char* p) 
{
	while (*p != '\0')
		String_append_char(s, *p++);

	return s;
}

String* String_create(const char* p) 
{
	String* s = (String *)malloc(sizeof(String));
	if (s == NULL) {
		printf("memory allocation error!");
		exit(EXIT_FAILURE);
	}
	
	s->length = 0;
	s->str[0] = '\0';

	if (p != NULL)
		while (*p != '\0')
			String_append_char(s, *p++);


	return s;
}

void String_delete(String* s) 
{
	free(s);
}

int String_find(const String* s, unsigned int index, char target) 
{
	
	unsigned int length = String_length(s);
	for (unsigned int i = index; i < length; ++i) 
		if (charAt(s, i) == target)
			return i;
	

	return -1;
}

String* String_clear(String* s) 
{
	s->length = 0;
	s->str[s->length] = '\0';

	return s;
}

String* String_gets(String* s) 
{
	
	String_clear(s);
	char ch;
	while ((ch = getchar()) != '\n') 
		String_append_char(s, ch);
	
	return s;
}

String* String_ncopy(String* s1, const String* s2, unsigned int n) 
{
	for (unsigned int i = 0; i < n; ++i)
		String_append_char(s1, charAt(s2, i));

	return s1;
}

String* String_copy(String* s1, const String* s2, unsigned int beg, unsigned int n) 
{
	for (unsigned int i = beg; i < beg + n; ++i)
		String_append_char(s1, charAt(s2, i));

	return s1;
}

void String_print(const String* s) 
{
	
	printf("%s", s->str);
}

int isLetter(char ch) 
{
	return (ch <= 'Z' && ch >= 'A') || (ch <= 'z' && ch >= 'a');
}


int isWordChar(char ch) 
{
	return isLetter(ch);
}



// Some helper functions declarations for StringList


StringList* StringList_create() 
{
	StringList* list= (StringList*)malloc(sizeof(StringList));
	if (list == NULL) {
		printf("memory allocation error");
		exit(EXIT_FAILURE);
	}

	list->size = 0;
	list->slist = NULL;

	return list;
}

void StringList_delete(StringList* list) 
{
	StringList_clear(list);
	free(list);
}

void StringList_clear(StringList* list) 
{
	free(list->slist);
	list->slist = NULL;
	list->size = 0;
}

String* StringList_at(StringList* list,  int index) 
{
	if (index < 0 || index >= StringList_size(list))
		return NULL;
	
	return (&list->slist[index]);
}

StringList* StringList_append(StringList* list, const String* s) 
{
	list->slist = (String *)realloc(list->slist, sizeof(String) * (list->size + 1));
	if (list->slist == NULL) {
		printf("Memory allocation error!\n");
		exit(EXIT_FAILURE);
	}
	list->slist[list->size++] = *s;

	return list;
}

unsigned int StringList_size(const StringList* list) 
{
	
	return list->size;
}


// program functions declarations

void start_program() 
{
	
	StringList* records = StringList_create();
	String* sline = String_create(NULL);
	
	
	while (!isQuit(String_gets(sline)))
		StringList_append(records, sline);
	
	unsigned int records_size = StringList_size(records);
	unsigned int number_of_words = 0, number_of_letters = 0;
	for (unsigned int i = 0; i < records_size; ++i) {
		String* record = StringList_at(records, i);
		if (!isStat(record)) {
			number_of_words += getNumberOfWords(record);
			number_of_letters += getNumberOfLetters(record);
			
			unsigned int index_seperator = String_find(record, 0, ':');
			int command_number = charAt(record, index_seperator + 1) - '0';
			switch (command_number) {
			case 1: command_1(record, index_seperator); break;
			case 2: command_2(record, index_seperator); break;
			case 3: command_3(record, index_seperator); break;
			case 4: command_4(record);
			}

		}
		else {
			printf("The number of words: %u\n", number_of_words);
			printf("The number of alphabetic letters: %u\n", number_of_letters);
		}
	}


	String_delete(sline);
	StringList_delete(records);
	
}

void command_1(String* s, unsigned int index) 
{
	String* temp = String_create(NULL);
	String_ncopy(temp, s, index);

	int index_seperator = String_find(s, index, ',');
	
	int target = 0;
	for (unsigned int i = index_seperator + 1; charAt(s, i) <= '9' && charAt(s, i) >= '0'; ++i) 
		target = 10 * target + charAt(s, i) - '0';

	int result = charAt(temp, target);
	if (result == -1)
		printf("-1\n");
	else
		printf("%c\n", result);

	String_delete(temp);
}

void command_2(String* s, unsigned int index) 
{
	String* temp1 = String_create(NULL);
	String* temp2 = String_create(NULL);
	
	String_ncopy(temp1, s, index); 
	String_append_char(temp1, ' ');
	int index_seperator = String_find(s, index, ',');
	String_copy(temp2, s, index_seperator + 1, String_length(s) - index_seperator - 1);
	concat(temp1, temp2);
	
	String_print(temp1);
	putchar('\n');

	String_delete(temp1);
	String_delete(temp2);

}

void command_3(String* s, unsigned int index) 
{
	String* temp1 = String_create(NULL);
	String* temp2 = String_create(NULL);

	String_ncopy(temp1, s, index);
	int index_seperator = String_find(s, index, ',');
	String_copy(temp2, s, index_seperator + 1, String_length(s) - index_seperator - 1);

	int result = strSearch(temp1, temp2);
	printf("%d\n", result);

	String_delete(temp1);
	String_delete(temp2);
}

void command_4(String* s) 
{

	printf("%d\n", findScore(s));
}

int isQuit(const String* s) 
{
	String* EXIT = String_create("EXIT");
	String* QUIT = String_create("QUIT");
	
	int result = 0;
	if (String_compare(s, EXIT) == 0 || String_compare(s, QUIT) == 0)
		result = 1;

	String_delete(EXIT);
	String_delete(QUIT);

	return result;
}

int isStat(const String* s) 
{
	String* STATISTICS = String_create("STAT");

	int result = 0;
	if (String_compare(s, STATISTICS) == 0 )
		result = 1;
	
	String_delete(STATISTICS);

	return result;
}