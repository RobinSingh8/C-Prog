#include <stdio.h>
#include <string.h>
#define maxsize 100 // Maximum string size 

int main()
{
    char str[maxsize];

    /* Input string from user */
    printf("Enter your text : ");
    gets(str);

    strupr(str); // Convert to uppercase

    printf("Uppercase string : %s", str);

    return 0;
}
