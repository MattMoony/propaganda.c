# propaganda.c
_A C-library for string manipulations_

---

Did you ever feel the need to manipulate a _string_ in C? Have you ever wanted to create a substring, replace parts or split a _string_? If you did, now can do all of these things by using _propaganda.c_, the library for manipulating strings.

---

## Setup

To include the library in your project, you will need to import the `propaganda.h` header file.

```C
#include "propaganda.h"

// ...
```

## Usage

#### Getting the length of a string

In order to determine the length of a given string, you can call the `strlen((char*) string)` function. It will return the length of your string, up to the `'\0'` termination character.

```C
// ...

char* str = "Hello World!";
int lenStr = strlen(str);

printf("Length of my string: %d\n", lenStr);

// ...
```

![exa0_output](media/00.JPG)

#### Copying a string

If you want to copy your string by value rather than copying it by reference, you can use the `strcpy((char*) string)` function, which will return the reference to the copy.

```C
// ...

char* str = "Lorem ipsum";
char* copy = strcpy(str);

copy[0] = 'A';

printf("My string copy: %s\n", copy);
printf("My original string: %s\n", str);

// ...
```

![exa1_output](media/01.JPG)

#### Dynamically creating a string

To make sure your string works with all of the library functions, and as a good convention, you should create all of your strings by using the `newstr((char*) string)` function.

(Of course you could also use the `strcpy((char*) string)` function, since it does the same thing.)

```C
// ...

char* str = newstr("Hello World!");
printf("My string: %s\n", str);

// ...
```

![exa2_output](media/02.JPG)

#### Concatenating strings

In order to attach one string to another one, you should use the `strcat((char*) str1, (char*) str2)` function. It returns a reference to the concatenated string.

```C
// ...

char* str1 = newstr("Hello ");
char* str2 = newstr("World!");

printf("Concatenated: %s\n", strcat(str1, str2));

// ...
```

![exa3_output](media/03.JPG)

#### Comparing strings

If you want to compare the value of two strings, use the `strequals((char*) str1, (char*) str2)` function. It will return a value of either `0` or `1`.

```C

// ...

char* str1 = newstr("Hello!");
char* str2 = newstr("Hello!");

printf("Are equal: %d\n", strequals(str1, str2));

str2 = newstr("Hello");
printf("Are still equal: %d\n", strequals(str1, str2));

// ...

```

![exa4_output](media/04.JPG)

#### Creating substrings

You can create substrings in two different ways:
  * ##### Creating a substring to the end
    If you want to create a substring starting somewhere and lasting to the end, you can use the `substr((char*) string, (int) start)` function.

    ```C
    // ...

    char* str = newstr("asdf Hello World!");
    str = substr(str, strlen("asdf "));

    printf("New string: %s\n", str);

    // ...
    ```

    ![exa5_output](media/05.JPG)

  * ##### Creating a substring from-to
    You can however, also create a substring starting at some index, and ending at another index by using the `substring((char*) string, int start, int end)` function.

    It is to note, that the range of the substring will be **[start;end[**.

    ```C
    // ...

    char* str = newstr("asdf Hello World! asdf");
    str = substring(str, strlen("asdf "), strlen("asdf Hello World!"));

    printf("New string: %s\n", str);

    // ...
    ```

    ![exa6_output](media/06.JPG)

**-- to be continued --**

## Conclusion

For any questions/suggestions, you can message me on my [twitter](https://twitter.com/Matthia23184857).

---

... Matthias M.
