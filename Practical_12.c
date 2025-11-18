
/*NAME : KRISHNA MAKWANA
 ID   : 25CE056
 AIM  : TO WRITE A C PROGRAM TO IDENTIFY AND LABEL BOOKS IN A LIBRARY AS "SPECIAL EDITION", "RARE", OR BOTH BASED ON THEIR IDs.
*/  

#include<stdio.h>

    int main()

        {
            int id,u,s,r;

            printf("Please enter the Total number of Books : ");
            scanf("%d",&u);

            printf("Please mark the Special Books : ");
            scanf("%d",&s);

            printf("Please mark the Rare Books : ");
            scanf("%d",&r);

            for(id=1;id<=u;id++)
            {
                printf("\nBook ID : %2d",id);

                if(id%r==0 && id%s==0)
                {
                    printf("(Special Edition)(Rare)");
                }

                else if(id%s==0)
                {
                    printf("(Special Edition)");
                }

                else if(id%r==0)
                {
                    printf("(Rare)");
                }

            }

        return 0;
        }
