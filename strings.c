/**
 * File:    strings.c
 *
 * Author:  Matthias M. (github.com/MattMoony)
 * Date:    March 2019
 *
 * Summary of file:
 *
 *  This header file contains the functions of my
 *  "strings" project.
 *  It contains several functions for string operations
 *  such as getting the length, obtaining a substring,
 *  etc.
 *
 */

#include "strings.h"
#include <stdlib.h>

/**
 * @brief   The "strlen" function can be used to obtain
 *          the length of a specified string.
 * @param   (char*) str: some "string"
 * @return  (int) length of string
 */

int strlen(char* str) {
    int len = -1;
    while (str[++len]!='\0') {}
    return len;
}

/**
 * @brief   The "strcpy" function returns a copy of the
 *          specified "string".
 * @param   (char*) str: some "string"
 * @return  (char*) the copy
 */

char* strcpy(char* str) {
    int len = strlen(str);
    char* ret = (char*) malloc(sizeof(char)*(len+1));

    for (int i = 0; i < len; i++)
        ret[i] = str[i];
    ret[len] = '\0';

    return ret;
}

/**
 * @brief   The "newstr" function uses the "strcpy"
 *          function to create a new "string" in the
 *          proper way.
 * @param   (char*) str: the "string"-to-be-created
 * @return  (char*) the new "string"
 */

char* newstr(char* str) {
    return strcpy(str);
}

/**
 * @brief   The "strequals" function compares two
 *          "strings" and returns 1 if their equal.
 * @param   (char*) str1: the first "string"
 * @param   (char*) str2: the second "string"
 * @return  (int) 1 if equal, 0 if unequal
 */

int strequals(char* str1, char* str2) {
    int len1 = strlen(str1),
        len2 = strlen(str2);

    for (int i = 0; i < (len1 > len2 ? len2 : len1)+1; i++) {
        if (str1[i]!=str2[i])
            return 0;
    }
    return 1;
}

/**
 * @brief   The "substr" function can be used to create a
 *          substring of a "string" beginning at a specified
 *          index, and reaching until the end of the string.
 * @param   (char*) str: some "string"
 * @param   (int) start: the start index
 * @return  (char*) the created substring (if start is out of range: NULL)
 */

char* substr(char* str, int start) {
    int len = strlen(str);
    if (start >= len || start < 0)
        return NULL;

    char* res_s = (char*) malloc(sizeof(char)*(len-start+1));

    for (int i = start; i < len; i++)
        res_s[i-start]=str[i];
    res_s[len-start] = '\0';

    return res_s;
}

/**
 * @brief   The "substring" function can be used to create a
 *          substring of a "string" with a specified start
 *          and end index.
 *          (start index included, end index excluded)
 * @param   (char*) str: some "string"
 * @param   (int) start: the start index
 * @param   (int)   end: the end index
 * @return  (char*) the created substring (if start or end are out of range: NULL)
 */

char* substring(char* str, int start, int end) {
    int len = strlen(str);
    if (start >= len || start < 0 || end >= len || end < 0 || end <= start)
        return NULL;

    char *res_s = (char*) malloc(sizeof(char)*(end-start+1));

    for (int i = start; i < end; i++)
        res_s[i-start]=str[i];
    res_s[end-start] = '\0';

    return res_s;
}

/**
 * @brief   The "indexOf" function returns the index of the
 *          passed character in the passed "string".
 * @param   (char*) str: some "string"
 * @param   (char)    c: the wanted character
 * @return  (int) index of the wanted character (if character not included: -1)
 */

int indexOf(char* str, char c) {
    int i = 0;
    while (str[i] != c && str[i] != '\0')
        i++;

    if (str[i]!=c)
        return -1;
    return i;
}

/**
 * @brief   The "lastIndexOf" function returns the last index
 *          of the specified character in the passed "string".
 * @param   (char*) str: some "string"
 * @param   (char)    c: the target character
 * @return  (int) last index of the target character (if character not included: -1)
 */

int lastIndexOf(char* str, char c) {
    int i = strlen(str)-1;
    while (str[i] != c && i >= 0)
        i--;

    if (str[i]!=c)
        return -1;
    return i;
}

/**
 * @brief   The "charOccurrence" function returns the amount
 *          of times the specified character appears in the
 *          specified "string".
 * @param   (char*) str: some "string"
 * @param   (char)    c: the specified character
 * @return  (int) the amount of times the character appears
 */

int charOccurrence(char* str, char c) {
    int amount = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c)
            amount++;
    }

    return amount;
}

/**
 * @brief   The "stringOccurrence" function returns the amount
 *          of times the specified string appears in the specified
 *          "string".
 * @param   (char*) str: the "string"
 * @param   (char*) sub: the searched "string"
 * @return  (int) the amount of times the "string" appears
 */

int stringOccurrence(char* str, char* sub) {
    int lenStr = strlen(str),
        lenSub = strlen(sub);

    if (lenSub>lenStr)
        return 0;

    int amount = 0;
    char* s_str;

    for (int i = 0; i < lenStr-lenSub; i++) {
        s_str = substring(str, i, i+lenSub);
        if (strequals(sub, s_str))
            amount++;
    }

    return amount;
}

/**
 * @brief   The "split" function splits a "string" at the specified
 *          character and returns the parts.
 * @param   (char*) str: some "string"
 * @param   (char)    c: the "split" character
 * @return  (char**) the individual strings
 */

char** split(char* str, char c) {
    int occ = charOccurrence(str, c);
    char* cpy = strcpy(str);
    char** parts = (char**) malloc(sizeof(char*)*(occ+1));

    for (int i = 0; i < occ; i++) {
        parts[i] = substring(cpy, 0, indexOf(cpy, c));
        cpy = substr(cpy, indexOf(cpy, c)+1);
    }
    parts[occ] = cpy;

    return parts;
}

/**
 * @brief   The "lowerCase" function returns the lowercase
 *          representation of the specified "string".
 * @param   (char*) str: some "string
 * @return  (char*) the lowercase representation
 */

char* lowerCase(char* str) {
    int len = strlen(str);
    char* res_s = (char*) malloc(sizeof(char)*(len+1));

    for (int i = 0; i < len; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            res_s[i] = str[i]+32;
        else
            res_s[i] = str[i];
    }

    return res_s;
}

/**
 * @brief   The "upperCase" function returns the uppercase
 *          representation of a specified "string".
 * @param   (char*) str: some "string"
 * @return  (char*) the uppercase representation
 */

char* upperCase(char* str) {
    int len = strlen(str);
    char* res_s = (char*) malloc(sizeof(char)*(len+1));

    for (int i = 0; i < len; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            res_s[i] = str[i]-32;
        else
            res_s[i] = str[i];
    }

    return res_s;
}

/**
 * @brief   The "toLowerCase" function converts the
 *          referenced "string" to lowercase.
 * @param   (char*) str: the target "string"
 */

void toLowerCase(char* str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i]+32;
    }
}

/**
 * @brief   The "toUpperCase" function converts the
 *          referenced "string" to uppercase.
 * @param   (char*) str: the target "string"
 */

void toUpperCase(char* str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i]-32;
    }
}
