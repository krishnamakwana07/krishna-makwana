
/*NAME :KRISHNA MAKWANA 
ROLL NO :25CE056
 AIM : To write a C program to simulate the progress of a marathon runner given the total distance and speed of the runner. The program should display the distance covered at each minute until the marathon is completed. */




#include<stdio.h>
#include<unistd.h>

    void main()

        {
            int t;
            float td,d,s;

            printf("Enter the Total Distance of Marathon in Km : ");
            scanf("%f",&td);

            printf("Enter speed in Km/Minute : ");
            scanf("%f",&s);

            /*
            for(d=s,t=1 ; d<=td ; d=d+s,t++)
            {
                printf("Minute %2d: Distance covered = %4.1f km\n",t,d);
                sleep(1);
            }
            */

            t=1;
            d=s;
            while(1)
            {
                sleep(1);
                printf("Minute %2d: Distance covered = %4.1f km\n",t,d);

                t++;
                d=d+s;
                if(d>=td)
                {
                    sleep(1);
                    printf("Minute %2d: Distance covered = %4.1f km\n",t,td);
                    printf("Marathon completed!\n\n");
                    break;
                }
            }

            //printf("Marathon completed!\n\n");
        }
