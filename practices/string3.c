#include <stdio.h>

void main()
{
    char name[12] = "bala";
    char *ptr;
    ptr = name; // Assign the pointer to the beginning of the array

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++; // Move the pointer to the next character in the array
    }
}
