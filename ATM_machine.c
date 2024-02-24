#include <stdio.h>

int main()
{
    char card;

    int n;

    int p;

    int a;

    int b;

    int diff;

    int i;

    char cad;

    printf("Welcome to the ATM\n\n");

    printf("Please Insert your card\n\n");

    scanf("%c", &card);

    if (card == 's')
    {
        printf("Hello Shrishti kankar\n\n");

        printf("> Press 1 to withdrawal the money from your account\n\n");
        printf("> Press 2 to check the balance\n\n");

        b = 1;

        scanf("%d", &n);

        if (n == 1)
        {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &p);
            if (p == 1234)
            {
                printf("Enter the amount to be withdrawal : \n");
                scanf("%d", &a);

                if (a > b)
                {
                    printf("insufficient\n");
                }
                else
                {
                    printf("Collect the money\n\n");

                    diff = b - a;

                    printf("Now, your bank balance is %d\n", diff);
                }
            }
            else
            {
                printf("incorrect pin\n\n");

                printf("please try again\n\n");
                scanf("%d", &p);
                if (p == 1234)
                {
                    printf("Enter the amount to be withdrawal : \n");
                    scanf("%d", &a);

                    if (a > b)
                    {
                        printf("insufficient\n");
                    }
                    else
                    {
                        printf("Collect the money\n\n");

                        diff = b - a;

                        printf("Now, your bank balance is %d\n", diff);
                    }
                }
                else
                {
                    printf("your request has been blocked\n");
                    printf("so please try again\n");
                }
            }
        }
        else if (n == 2)
        {
            printf("please enter your 4-digit pin : \n");
            scanf("%d", &p);

            if (p != 1234)
            {
                printf("please try again\n\n");

                scanf("%d", &p);

                if (p != 1234)
                {
                    printf("your request has been blocked\n");
                    scanf("So, please try again");
                }
                else
                {
                    printf("your bank balance is %d", b);
                }
            }
            else
            {
                printf("your bank balance is %d", &b);
            }
        }
    }
    else if (card == 'i')
    {
        printf("Hello itachi Uchiha\n\n");

        printf("> Press 1 to withdrawal the money from your account\n\n");
        printf("> Press 2 to check the balance\n\n");

        b = 80000;

        scanf("%d", &n);

        if (n == 1)
        {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &p);
            if (p == 5678)
            {
                printf("Enter the amount to be withdrawal : \n");
                scanf("%d", &a);

                if (a > b)
                {
                    printf("insufficient\n");
                }
                else
                {
                    printf("Collect the money\n\n");

                    diff = b - a;

                    printf("Now, your bank balance is %d\n", diff);
                }
            }
            else
            {
                printf("incorrect pin\n\n");

                printf("please try again\n\n");
                scanf("%d", &p);
                if (p == 5678)
                {
                    printf("Enter the amount to be withdrawal : \n");
                    scanf("%d", &a);

                    if (a > b)
                    {
                        printf("insufficient\n");
                    }
                    else
                    {
                        printf("Collect the money\n\n");

                        diff = b - a;

                        printf("Now, your bank balance is %d\n", diff);
                    }
                }
                else
                {
                    printf("your request has been blocked\n");
                    printf("so please try again\n");
                }
            }
        }
        else if (n == 2)
        {
            printf("please enter your 4-digit pin : \n");
            scanf("%d", &p);

            if (p != 5678)
            {
                printf("please try again\n\n");

                scanf("%d", &p);

                if (p != 5678)
                {
                    printf("your request has been blocked\n");
                    scanf("So, please try again");
                }
                else
                {
                    printf("your bank balance is %d", b);
                }
            }
            else
            {
                printf("your bank balance is %d", &b);
            }
        }
    }
    else if (card == 's')
    {
        printf("Hello, sasuke uchiha\n");

        printf("> Press 1 to withdrawal the money from your account\n\n");
        printf("> Press 2 to check the balance\n\n");

        b = 40000;

        scanf("%d", &n);

        if (n == 1)
        {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &p);
            if (p == 1357)
            {
                printf("Enter the amount to be withdrawal : \n");
                scanf("%d", &a);

                if (a > b)
                {
                    printf("insufficient\n");
                }
                else
                {
                    printf("Collect the money\n\n");

                    diff = b - a;

                    printf("Now, your bank balance is %d\n", diff);
                }
            }
            else
            {
                printf("incorrect pin\n\n");

                printf("please try again\n\n");
                scanf("%d", &p);
                if (p == 1357)
                {
                    printf("Enter the amount to be withdrawal : \n");
                    scanf("%d", &a);

                    if (a > b)
                    {
                        printf("insufficient\n");
                    }
                    else
                    {
                        printf("Collect the money\n\n");

                        diff = b - a;

                        printf("Now, your bank balance is %d\n", diff);
                    }
                }
                else
                {
                    printf("your request has been blocked\n");
                    printf("so please try again\n");
                }
            }
        }
        else if (n == 2)
        {
            printf("please enter your 4-digit pin : \n");
            scanf("%d", &p);

            if (p != 1357)
            {
                printf("please try again\n\n");

                scanf("%d", &p);

                if (p != 1357)
                {
                    printf("your request has been blocked\n");
                    scanf("So, please try again");
                }
                else
                {
                    printf("your bank balance is %d", b);
                }
            }
            else
            {
                printf("your bank balance is %d", &b);
            }
        }
    }
}
