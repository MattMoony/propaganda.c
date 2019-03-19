#include <stdio.h>
#include "strings.h"

int main()
{
    char* msg = newstr("Hello World!");
    char* cpy = strcpy(msg);

    cpy[0] = 'A';

    printf("-> Length:\t%d\n", strlen(msg));
    printf("-> Equals:\t%d\n", strequals(msg, "Hello World!"));
    printf("-> Equals:\t%d\n", strequals(msg, "Hello!"));

    printf("\n");

    printf("-> IndexOf:\t%d\n", indexOf(msg, 'o'));
    printf("-> LastIndexOf:\t%d\n", lastIndexOf(msg, 'o'));

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
    return 0;
}
