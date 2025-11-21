
/*
NAME :: KRISHNA MAKWANA
ROLL NO :: 25CE56
AIM :: Write a C program to store and display the details of sports teams and their coaches using structures.       
*/

#include<stdio.h>

struct Teams
{
    char team_name[25];
    char sport[20];
};

struct Coach_Details
{
    char coach_name[35];
    int age;
    int exp;
};

int main()
{
    int ch;
    struct Teams t;
    struct Coach_Details c;

    do
    {
        printf("\n\nPress 1 to add Team Details.\n");
        printf("Press 2 to add Coach Details.\n");
        printf("Press 3 to view Team Details.\n");
        printf("Press 4 to view Coach Details.\n");
        printf("Press 5 to search for a Team. (Not Implemented)\n");
        printf("Press 6 to search for a Coach. (Not Implemented)\n");
        printf("Press 7 to Exit.\n");

        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("\nEnter Team Name : ");
            scanf(" %[^\n]",t.team_name);

            printf("Enter Sport : ");
            scanf(" %[^\n]",t.sport);
            break;

        case 2:
            printf("\nEnter Coach Name : ");
            scanf(" %[^\n]",c.coach_name);

            printf("Enter Age : ");
            scanf("%d",&c.age);

            printf("Enter Years of Experience : ");
            scanf("%d",&c.exp);
            break;

        case 3:
            printf("\n----- Team Details -----\n");
            printf("Team Name : %s\n",t.team_name);
            printf("Sport     : %s\n",t.sport);
            break;

        case 4:
            printf("\n----- Coach Details -----\n");
            printf("Coach Name : %s\n",c.coach_name);
            printf("Age        : %d\n",c.age);
            printf("Experience : %d years\n",c.exp);
            break;

        case 7:
            printf("\nThanks for Coming...\n");
            return 0;

        default:
            printf("\nInvalid Choice! Please enter a valid option.\n");
        }

    }while(1);

    return 0;
}
