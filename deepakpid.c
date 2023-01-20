#include <stdio.h>
#include <string.h>
int input();

int main()
{
    printf("PLEASE LOGIN HERE\n\n"); // Deepak
    char id[50];

User:

    printf("Enter your id:");

    scanf("%s", &id);

    if (strcmp(id, "Deepak") == 0)

    {

        printf("Id is correct\n");
    }

    else

    {

        printf("You have entered an invalid user id\nPlease enter id again\n");

        goto User;
    }

    char pass[50];

pass:

    printf("Enter your password: ");

    scanf("%s", &pass);

    if (strcmp(pass, "2003") == 0) // 2003

    {

        printf("You have successfully logged in \n\n");
    }

    else

    {

        printf("You have entered a wrong password\nEnter your password again\n");
    }

    printf("1.Attendance\n");
    printf("2.Employee\n");
    
    int choice, num;
choice:
    printf("ENTER YOUR CHOICE:");

    choice = input();

    switch (choice)
    {
        char hlo, hii;
    hlo:
        printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
        scanf("%s", &hii);
        if (hii == 'y' || hii == 'Y')
        {
            goto choice1;
        }
        else
        {
            goto choice;
        }
    //     char a, b;
    // a:
    //     printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
    //     scanf("%s", &b);
    //     if (b == 'y' || b == 'Y')
    //     {
    //         goto choice2;
    //     }
        // else
        // {
        //     goto choice;
        // }
    //     char x, y;
    // x:
    //     printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
    //     scanf("%s", &y);
    //     if (y == 'y' || y == 'Y')
    //     {
    //         goto choice3;
    //     }
    //     else
    //     {
    //         goto choice;
    //     }

    case 1:
    {
        printf("\nPLEASE SELECT\n\n");
        printf("1.Press 1 For Present \n");
        printf("2.press 2 For Absent \n");
    

        int choice1;
    choice1:
        printf("ENTER YOUR CHOICE :");
        scanf("%d", &choice1);
        if (choice1 == 1)
        {
            printf("\nYou are Present\n");
            
            goto hlo;
        }
        else if (choice1 == 2)
        {
            printf("\n You are Absent\n");
            
            goto hlo;
        }
        

        else
        {

            printf("SORRY WRONG CHOICE");
        }
    }
    case 2:
    {
        // employee name
        printf("\n\n");
        printf("1.Rohan Patel\n");
        printf("2.James Bond\n");
        printf("3.Jay patel\n");
        printf("4.Mahir chaudhary\n");
        printf("5.Pratham gajjar\n");
       printf("6.Rohan Patel\n");
        printf("7.James Bond\n");
        printf("8.Jay patel\n");
        printf("9.Mahir chaudhary\n");
        printf("10.Pratham gajjar\n");
   
    break;
    }

    default:
        printf("wrong Input\n");
    }

    return 0;
}

int input()
{

    int number;
    scanf("%d", &number);
    return (number);
}
