
/*NAME : KRISHNA MAKWANA
ROLL NO : 21CE014
AIM : To write a C program to print multiplication table of size m x n using nested loops.
*/




#include<stdio.h>

    int main()

        {
            int i,j,r,c;

            printf("Enter the size of table vertically : ");

            lable1:

            scanf("%d",&r);

            if(r<=0)
            {
                printf("Please enter valid size for Rows : ");
                goto lable1;
            }

            printf("Enter the size of table horizontally : ");

            lable2:

            scanf("%d",&c);

            if(c<=0)
            {
                printf("Please enter valid size for Columns : ");
                goto lable2;
            }

            printf("\nMultiplication table (%d x %d):\n\n",r,c);

            for(i=1;i<=r;i++)
            {
                for(j=1;j<=c;j++)
                {
                    printf("%3d ",i*j);
                }
                printf("\n");
            }

        return 0;
        }
