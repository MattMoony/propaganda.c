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

char* trim(char*);

char itoc(int);
int ctoi(char);

char* itos(int);
char* btos(int);
char* ltos(long);
char* ftos(float, int);
char* dtos(double, int);

int stoi(char*);
int stob(char*);
long stol(char*);
float stof(char*);
double stod(char*);

#endif // PROPAGANDA_H
