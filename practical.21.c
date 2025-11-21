
/*

    NAME : KRISHNA MAKWANA
    ROLL NO : 25CE056
    AIM : WRITE A C PROGRAM TO COUNT POSITIVE, NEGATIVE, EVEN, ODD AND NEUTRAL NUMBERS FROM A LIST OF 25 INTEGERS.   
    */


#include<stdio.h>        
    int main()

        {
            int p=0,n=0,o=0,e=0,nu=0;

            int Num[25];

            for(int i=1;i<=25;i++)
            {
                printf("Enter number %d : ",i);

                scanf("%d",&Num[i]);

                if(Num[i]>0)
                {
                    p++;

                    if(Num[i]%2==0)
                    {
                        e++;
                    }
                    else if(Num[i]%2!=0)
                    {
                        o++;
                    }

                }

                else if(Num[i]<0)
                {
                    n++;

                    if(Num[i]%2==0)
                    {
                        e++;
                    }
                    else if(Num[i]%2!=0)
                    {
                        o++;
                    }

                }

                else if(Num[i]==0)
                {
                    nu++;
                }

            }

            printf("\n\nTotal Positive Integers\t : %d\n",p);
            printf("Total Negative Integers\t : %d\n",n);
            printf("Total Even Integers\t : %d\n",e);
            printf("Total Odd Integers\t : %d\n",o);
            printf("Total Neutral Integers\t : %d\n",nu);


           return 0;
        }
