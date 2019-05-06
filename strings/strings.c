#include <stdio.h>
#include <stdlib.h>

/*
    Given a character array s (as a pointer), return the number of 
    characters in the string.
    
    Do not just use the `strlen` function from the standard libary.
*/
int string_length(char *s)
{
    int length; // initialize length var
    // first version
    // char *z;    // initialize copy pointer
    // z = s;      // copy pointer
    // for (z = s; *z != '\0'; z++)
    // {
    //     printf("HEY %c\n", *z);
    //     length += 1;
    // }
    // second version
    while (*s != '\0')
    {
        s++;
        length++;
    }
    return length;
}

/*
    Write a function that reverses the order of string s and outputs 
    the reversed string to the input array rv. The rv array will have 
    enough space for the reversed string. Don't forget to terminate 
    the reversed string with a null character. Return the rv array.
*/
char *reverse_string(char *rv, char *s)
{
    // get length of string
    int end = 0;
    char *z; // initialize copy pointer
    char *z2;
    z2 = s;
    z = s; // copy pointer
    while (*z != '\0')
    {
        z++;
        end++;
    }
    // reassign first key to last value
    char *rv_copy;
    rv_copy = rv;
    rv_copy[end + 1] = '\0';
    while (*z2 != '\0')
    {
        end--;
        rv_copy[end] = *z2;
        z2++;
    }

    return rv_copy;
}

#ifndef TESTING
int main(void)
{
    char quote1[] = "Don't forget to be awesome";
    char quote2[] = "a man a plan a canal panama";

    char rv[512];

    printf("The string 'Don't forget to be awesome' has %d characters.\n", string_length(quote1));
    printf("The string 'a man a plan a canal panama' reversed is: '%s'\n", reverse_string(rv, quote2));

    return 0;
}
#endif
