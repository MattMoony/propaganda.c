#ifndef STRINGS_H
#define STRINGS_H

int strlen(char*);
char* strcpy(char*);
char* newstr(char*);

int strequals(char*, char*);

char* substr(char*, int);
char* substring(char*, int, int);

int indexOf(char*, char);
int lastIndexOf(char*, char);

int charOccurrence(char*, char);
int stringOccurrence(char*, char*);
char** split(char*, char);

char* lowerCase(char* str);
char* upperCase(char* str);

void toLowerCase(char* str);
void toUpperCase(char* str);

#endif // STRINGS_H
