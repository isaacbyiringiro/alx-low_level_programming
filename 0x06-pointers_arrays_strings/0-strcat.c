#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat function that concatenates two strings.
 * print the concatenated two string
 * cat str1[12] to str2[12]
 * concatenates str1 and str2
 * total lenghth of str1 after concatenation
 */

int main(void)

{

char str1[12] = "Hello";
char str2[12] = "World";

strcat(str1, str2);
printf("strcat(str1, str2): %s\n", str1);
return (0);
}
