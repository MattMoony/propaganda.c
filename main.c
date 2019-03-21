#include <stdio.h>
#include <stdlib.h>
#include "propaganda.h"

int main()
{
    /*char* msg = newstr("Hello World!");
    char* cpy = strcpy(msg);

    cpy[0] = 'A';

    printf("-> Length:\t%d\n", strlen(msg));
    printf("-> Equals:\t%d\n", strequals(msg, "Hello World!"));
    printf("-> Equals:\t%d\n", strequals(msg, "Hello!"));
    printf("-> Concat:\t%s\n", strcat(msg, " This is Matthias speaking ... "));

    printf("\n");

    printf("-> IndexOf:\t%d\n", indexOf(msg, 'o'));
    printf("-> LastIndexOf:\t%d\n", lastIndexOf(msg, 'o'));

    printf("-> IndexOf:\t%d\n", indexOfString(msg, "World!"));
    printf("-> LastIndexOf:\t%d\n", lastIndexOfString(msg, "World!"));

    printf("\n");

    printf("-> Substring:\t\"%s\"\n", substring(msg, 0, 6));
    printf("-> Substring:\t\"%s\"\n", substr(msg, strlen("Hello ")));

    printf("\n");

    msg = newstr("Repeat, repeat, asdf, repeat, repeat   repeat something ... ");

    printf("-> Occurrence:\t%d\n", charOccurrence(msg, 'o'));
    printf("-> SOccurrence:\t%d\n", stringOccurrence(msg, newstr("repeat")));
    printf("-> Lowercase:\t%s\n", lowerCase(msg));
    printf("-> Uppercase:\t%s\n", upperCase(msg));

    printf("\n");

    printf("-> Normal:\t%s\n", msg);
    toLowerCase(msg);
    printf("-> Lowercase:\t%s\n", msg);
    toUpperCase(msg);
    printf("-> Uppercase:\t%s\n", msg);

    printf("\n");

    msg = newstr("This is some random test!");
    printf("-> Split(' '):\n\n");

    char** parts = split(msg, ' ');
    for (int i = 0; i < charOccurrence(msg, ' ')+1; i++)
        printf("\t[%d]: \"%s\"\n", i, parts[i]);

    printf("\n");

    msg = newstr("This\r\nis\r\nsome\r\nrandom\r\ntext!\r\n ");
    printf("-> Split(\\r\\n):\n\n");

    parts = splits(msg, "\r\n");
    for (int i = 0; i < stringOccurrence(msg, "\r\n")+1; i++)
        printf("\t[%d]: \"%s\"\n", i, parts[i]);

    printf("\n");

    msg = newstr("Hello World!");

    replace(msg, 'o', '0');
    replace(msg, 'e', '3');

    printf("-> Replace:\t%s\n", msg);

    msg = newstr("Hello World!");

    msg = replaceString(msg, "Hello", "H3ll0");
    msg = replaceString(msg, "World", "h4x0rs");

    printf("-> Replace:\t%s\n", msg);

    printf("\n");

    msg = newstr("      \n\rHello World!\n     ");
    printf("->Message:\t\"%s\"\n", msg);
    printf("->Trimmed:\t\"%s\"\n", trim(msg));

    printf("\n");

    printf("->itos:\t%s\n", itos(1024));
    printf("->btos:\t%s\n", btos(0));
    printf("->ltos:\t%s\n", ltos(80000000l));
    printf("->ftos:\t%s\n", ftos(8.5096f, 4));
    printf("->dtos:\t%s\n", dtos(8.0123456789, 10));

    printf("\n");

    printf("->stoi:\t%d\n", stoi("1024"));
    printf("->stob:\t%d\n", stob("false"));
    printf("->stol:\t%ld\n", stol("80000000"));
    printf("->stof:\t%f\n", stof("8.5096"));
    printf("->stod:\t%.10lf\n", stod("8.0123456789"));

    printf("\n");*/

    char* msg = newstr("      \n\rHello World!\n     ");
    char* trimmed = trim(msg);

    printf("Trimmed: %s\n", trimmed);

    char c;
    scanf("%c", &c);

    return 0;
}
