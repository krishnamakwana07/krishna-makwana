
/*
     NAME : KRISHNA MAKWANA 
        ROLL NO : 25CE056
        AIM : To print the following pattern:
                A
               ABA
              ABCBA
             ABCDCBA
              ABCBA
               ABA
                A
*/

#include<stdio.h>         
    int main()
    {
        int n = 4;
        int i, j;
        char ch;

        // Top half of the pattern
        for (i = 1; i <= n; i++)
        {
            // Print leading spaces
            for (j = 1; j <= n - i; j++)
            {
                printf(" ");
            }
            // Print characters
            for (j = 1; j <= 2 * i - 1; j++)
            {
                ch = 'A' + (j <= i ? j - 1 : 2 * i - j - 1);
                printf("%c", ch);
            }
            printf("\n");
        }

        // Bottom half of the pattern
        for (i = n - 1; i >= 1; i--)
        {
            // Print leading spaces
            for (j = 1; j <= n - i; j++)
            {
                printf(" ");
            }
            // Print characters
            for (j = 1; j <= 2 * i - 1; j++)
            {
                ch = 'A' + (j <= i ? j - 1 : 2 * i - j - 1);
                printf("%c", ch);
            }
            printf("\n");
        }

        return 0;
    }
