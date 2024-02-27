#include <stdio.h>

int main()
{
    char name[50];
    char do0[50];
    char do1[50];
    char do2[50];
    char do3[50];
    char do4[50];
    char do5[50];
    char do6[50];
    char do7[50];
    char do8[50];
    char do9[50];

    printf("Hy what`s your name : ");
    scanf("%s", &name);
    printf("\n");

    int n;
    printf("hello, %s how many work you add today`s list(1-10): ", name);
    scanf("%d", &n);
    if (n == 1)
    {

        printf("Task 1st : ");
        scanf("%s", &do0);
    }
    else if (n == 2)
    {

        printf("Task 1st : ");
        scanf("%d", &do0);
        printf("Task 2nd : ");
        scanf("%s", &do1);
    }
    else if (n == 3)
    {

        printf("Task 1st : ");
        scanf("%s", &do0);
        printf("Task 2nd : ");
        scanf("%s", &do1);
        printf("Task 3rd : ");
        scanf("%s", &do2);
    }
    else if (n == 4)
    {

        printf("Task 1st : ");
        scanf("%s", &do0);
        printf("Task 2nd : ");
        scanf("%s", &do1);
        printf("Task 3rd : ");
        scanf("%s", &do2);
        printf("Task 4th : ");
        scanf("%s", &do3);
    }
    else if (n == 5)
    {

        printf("Task 1st : ");
        scanf("%s", &do0);
        printf("Task 2nd : ");
        scanf("%s", &do1);
        printf("Task 3rd : ");
        scanf("%s", &do2);
        printf("Task 4th : ");
        scanf("%s", &do3);
        printf("Task 5th : ");
        scanf("%s", &do4);
    }
    else if (n == 6)
    {

        printf("Task 1st : ");
        scanf("%s", &do0);
        printf("Task 2nd : ");
        scanf("%s", &do1);
        printf("Task 3rd : ");
        scanf("%s", &do2);
        printf("Task 4th : ");
        scanf("%s", &do3);
        printf("Task 5th : ");
        scanf("%s", &do4);
        printf("Task 6th : ");
        scanf("%s", &do5);
    }
    else if (n == 7)
    {

        printf("Task 1st : ");
        scanf("%s", &do0);
        printf("Task 2nd : ");
        scanf("%s", &do1);
        printf("Task 3rd : ");
        scanf("%s", &do2);
        printf("Task 4th : ");
        scanf("%s", &do3);
        printf("Task 5th : ");
        scanf("%s", &do4);
        printf("Task 6th : ");
        scanf("%s", &do5);
        printf("Task 7th : ");
        scanf("%s", &do6);
    }
    else if (n == 8)
    {

        printf("Task 1st : ");
        scanf("%s", &do0);
        printf("Task 2nd : ");
        scanf("%s", &do1);
        printf("Task 3rd : ");
        scanf("%s", &do2);
        printf("Task 4th : ");
        scanf("%s", &do3);
        printf("Task 5th : ");
        scanf("%s", &do4);
        printf("Task 6th : ");
        scanf("%s", &do5);
        printf("Task 7th : ");
        scanf("%s", &do6);
        printf("Task 8th : ");
        scanf("%s", &do7);
    }
    else if (n == 9)
    {

        printf("Task 1st : ");
        scanf("%s", &do0);
        printf("Task 2nd : ");
        scanf("%s", &do1);
        printf("Task 3rd : ");
        scanf("%s", &do2);
        printf("Task 4th : ");
        scanf("%s", &do3);
        printf("Task 5th : ");
        scanf("%s", &do4);
        printf("Task 6th : ");
        scanf("%s", &do5);
        printf("Task 7th : ");
        scanf("%s", &do6);
        printf("Task 8th : ");
        scanf("%s", &do7);
        printf("Task 9th : ");
        scanf("%s", &do8);
    }
    else if (n == 10)
    {

        printf("Task 1st : ");
        scanf("%s", &do0);
        printf("Task 2nd : ");
        scanf("%s", &do1);
        printf("Task 3rd : ");
        scanf("%s", &do2);
        printf("Task 4th : ");
        scanf("%s", &do3);
        printf("Task 5th : ");
        scanf("%s", &do4);
        printf("Task 6th : ");
        scanf("%s", &do5);
        printf("Task 7th : ");
        scanf("%s", &do6);
        printf("Task 8th : ");
        scanf("%s", &do7);
        printf("Task 9th : ");
        scanf("%s", &do8);
        printf("Task 10th : ");
        scanf("%s", &do9);
    }
    else
    {
        printf("Please entre valid number according to Instructions\n");
    }
    int m;
    printf("Enter how many task you finish:- ");
    scanf("%d", &m);
    printf("\n");

    printf("Which task you finish today yet(Keep giving in order):- ");
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("This task yet you do not finish: \n");
    for (int i = 1; i <= n; i++)
    {
        if (arr[i-1] != i)
        {
            if (i == 1)
            {

                printf("Task 1st : ");
                printf("%s\n", do0);
            }
            else if (i == 2)
            {
                printf("Task 2nd : ");
                printf("%s\n", do1);
            }
            else if (i == 3)
            {

                printf("Task 3rd : ");
                printf("%s\n", do2);
            }
            else if (i == 4)
            {
                printf("Task 4th : ");
                printf("%s\n", do3);
            }
            else if (i == 5)
            {
                printf("Task 5th : ");
                printf("%s\n", do4);
            }
            else if (i == 6)
            {
                printf("Task 6th : ");
                printf("%s\n", do5);
            }
            else if (i == 7)
            {
                printf("Task 7th : ");
                printf("%s\n", do6);
            }
            else if (i == 8)
            {
                printf("Task 8th : ");
                printf("%s\n", do7);
            }
            else if (i == 9)
            {
                printf("Task 9th : ");
                printf("%s\n", do8);
            }
            else if (i == 10)
            {
                printf("Task 10th : ");
                printf("%s\n", do9);
            }
        }
    }
}
