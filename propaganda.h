#ifndef PROPAGANDA_H
#define PROPAGANDA_H

int strlen(char*);
char* strcpy(char*);
char* newstr(char*);
char* strcat(char*, char*);
int strequals(char*, char*);

char* substr(char*, int);
char* substring(char*, int, int);

int indexOf(char*, char);
int indexOfFrom(char*, char, int);
int lastIndexOf(char*, char);

int indexOfString(char*, char*);
int indexOfStringFrom(char*, char*, int);
int lastIndexOfString(char*, char*);

int charOccurrence(char*, char);
int stringOccurrence(char*, char*);

char** split(char*, char);
char** splits(char*, char*);

char* lowerCase(char*);
char* upperCase(char*);
void toLowerCase(char*);
void toUpperCase(char*);

void replace(char*, char, char);
char* replaceString(char*, char*, char*);

#endif // PROPAGANDA_H
