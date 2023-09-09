#include <stdio.h>
#include <string.h>
main()
{
     char str[100];
     int ind, sub_ind, spaces_num;

     printf("Enter a string: ");
     gets(str);

     for (ind = 0, spaces_num = 0; ind < strlen(str); ind++)
        if (str[ind] != ' ') 
            spaces_num++;
            
     printf("The string after deleting spaces: \n");
     while (strlen(str) > spaces_num)
      for (ind = 0; ind < strlen(str); ind++)
         if (str[ind] == ' ')  
            for (sub_ind = ind; sub_ind < strlen(str); sub_ind++) 
               str[sub_ind] = str[sub_ind+1];
     puts(str);
}