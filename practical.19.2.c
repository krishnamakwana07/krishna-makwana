
/*
    NAME : KRISHNA MAKWANA
    ROLL NO : 25CE056
    AIM : To print the following pattern:
          1 2 3 4 5 6 7 8 9
            2             8
              3         7
                4     6
                  5
*/

#include<stdio.h>           
    int main()
    {
        int rows = 5;
        int i, j;

        for (i = 1; i <= rows; i++)
        {
            // Print leading spaces
            for (j = 1; j < i; j++)
            {
                printf("  ");
            }

            // Print the left side numbers
            for (j = i; j <= (rows * 2) - i; j++)
            {
                if (j == i || j == (rows * 2) - i || i == 1)
                {
                    printf("%d ", j);
                }
                else
                {
                    printf("  ");
                }
            }

            printf("\n");
        }

        return 0;
    }
