
/*
NAME : KRISHNA MAKWANA 
ROLL NO : 25CE056
AIM : To print the following pattern 
    1
   212
  32123
 4321234
*/

#include<stdio.h>           
    void main()
    {
        int i,j,s;

        for(i=5;i>=1;i--)
        {
            for(s=0;s<5-i;s++)
            {
                printf("  ");
            }
            for(j=1;j<=i;j++)
            {
                printf("%2d",i+1-j);
            }
            for(j=2;j<=i;j++)
            {
                printf("%2d",j);
            }
            printf("\n");
        }

        for(i=1;i<=5;i++)
        {
            for(s=0;s<5-i;s++)
            {
                printf("  ");
            }
            for(j=1;j<=i;j++)
            {
                printf("%2d",i+1-j);
            }
            for(j=2;j<=i;j++)
            {
                printf("%2d",j);
            }
            printf("\n");
        }

    }

