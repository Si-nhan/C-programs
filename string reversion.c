#include <stdio.h>
#include <string.h>
main()
{
     char str[20];
     int i, a;

     printf("Enter a string: ");
     gets(str);

     printf("The reverse string:\n");
     for (i = strlen(str) - 1; i >= 0; i--)
        printf("%c", str[i]);
}
