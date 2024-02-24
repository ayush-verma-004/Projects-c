#include <stdio.h>

int main()
{
    printf("..........Main menu..........\n\n");

    printf("1. Add Books\n");
    printf("2. Display Book Iniformation\n");
    printf("3. Search Books(Book status)\n");
    printf("4. Exit\n");

    int n;
    printf("Enter : ");
    scanf("%d", &n);
    printf("\n\n");

    if (n == 1)
    {
        printf("You can add book Information\n\n");

        printf("Choose the categroy\n");

        printf("1. Computer\n");
        printf("2. Electronics\n");
        printf("3. Mechanical\n");

        int a;
        printf("Choose a categroy : ");
        scanf("%d", &a);

        printf("\n\n");

        if (a == 1)
        {
            printf("You have choosed computer category\n\n");

            printf("1.Introduction to C\n");
            printf("2. Introduction to python\n");
            printf("3. Intrpduction to java\n\n");

            int com;
            printf("Choose a book : ");
            scanf("%d", &com);

            printf("\n\n");

            if (com == 1)
            {
                printf("You have choosed Introduction to c book\n\n");

                char book_name[50];
                char author_name[50];
                int pages;
                int price;

                printf("Book name : ");
                printf("%s", &book_name);
                printf("\n");

                printf("Author name : ");
                printf("%s", &author_name);
                printf("\n");

                printf("Pages : ");
                printf("%d", &pages);
                printf("\n");

                printf("Price of a book : ");
                printf("%d", &price);
                printf("\n");
            }
            else if (com == 2)
            {
                printf("You have choosed Introduction to python book\n\n");

                char book_name[50];
                char author_name[50];
                int pages;
                int price;

                printf("Book name : ");
                scanf("%s", &book_name);
                printf("\n");

                printf("Author name : ");
                scanf("%s", &author_name);
                printf("\n");

                printf("Pages : ");
                scanf("%d", &pages);
                printf("\n");

                printf("Price of a book : ");
                scanf("%d", &price);
                printf("\n");
            }
            else if (com == 3)
            {
                printf("You have choosed Introduction to java book\n\n");

                char book_name[50];
                char author_name[50];
                int pages;
                int price;

                printf("Book name : ");
                scanf("%s", &book_name);
                printf("\n");

                printf("Author name : ");
                scanf("%s", &author_name);
                printf("\n");

                printf("Pages : ");
                scanf("%d", &pages);
                printf("\n");

                printf("Price of a book : ");
                scanf("%d", &price);
                printf("\n");
            }
        }
        else if (a == 2)
        {
            printf("You have choosed Electronics category\n\n");

            printf("1.Practical Electronics Inventors\n");
            printf("2. The art of electronics\n");
            printf("3. Fundamentals of digit circuits\n\n");

            int elc;
            printf("Choose a book : ");
            scanf("%d", &elc);

            printf("\n\n");

            if (elc == 1)
            {
                printf("You have choosed Practical Electronics for Inventors book\n\n");

                char book_name[50];
                char author_name[50];
                int pages;
                int price;

                printf("Book name : ");
                scanf("%s", &book_name);
                printf("\n");

                printf("Author name : ");
                scanf("%s", &author_name);
                printf("\n");

                printf("Pages : ");
                scanf("%d", &pages);
                printf("\n");

                printf("Price of a book : ");
                scanf("%d", &price);
                printf("\n");
            }
            else if (elc == 2)
            {
                printf("You have choosed The art of electronics book\n\n");

                char book_name[50];
                char author_name[50];
                int pages;
                int price;

                printf("Book name : ");
                scanf("%s", &book_name);
                printf("\n");

                printf("Author name : ");
                scanf("%s", &author_name);
                printf("\n");

                printf("Pages : ");
                scanf("%d", &pages);
                printf("\n");

                printf("Price of a book : ");
                scanf("%d", &price);
                printf("\n");
            }
            else if (elc == 3)
            {
                printf("You have choosed Fundamentals of digital circuits book\n\n");

                char book_name[50];
                char author_name[50];
                int pages;
                int price;

                printf("Book name : ");
                scanf("%s", &book_name);
                printf("\n");

                printf("Author name : ");
                scanf("%s", &author_name);
                printf("\n");

                printf("Pages : ");
                scanf("%d", &pages);
                printf("\n");

                printf("Price of a book : ");
                scanf("%d", &price);
                printf("\n");
            }
        }
        else if (a == 3)
        {
            printf("You have choosed Mechanical category\n\n");

            printf("1. Introduction to Autoced\n");
            printf("2. Fundamental of thermodyanamics\n\n");
            printf("3. Mechanical Engineering : Convential and object type\n\n");

            int mec;
            printf("Choose a book : ");
            scanf("%d", &mec);

            printf("\n\n");

            if (mec == 1)
            {
                printf("You have choosed Introduction to Autoced book\n\n");

                char book_name[50];
                char author_name[50];
                int pages;
                int price;

                printf("Book name : ");
                scanf("%s", &book_name);
                printf("\n");

                printf("Author name : ");
                scanf("%s", &author_name);
                printf("\n");

                printf("Pages : ");
                scanf("%d", &pages);
                printf("\n");

                printf("Price of a book : ");
                scanf("%d", &price);
                printf("\n");
            }
            else if (mec == 2)
            {
                printf("You have choosed Fundamental of thermodyanamics book\n\n");

                char book_name[50];
                char author_name[50];
                int pages;
                int price;

                printf("Book name : ");
                scanf("%s", &book_name);
                printf("\n");

                printf("Author name : ");
                scanf("%s", &author_name);
                printf("\n");

                printf("Pages : ");
                scanf("%d", &pages);
                printf("\n");

                printf("Price of a book : ");
                scanf("%d", &price);
                printf("\n");
            }
            else if(mec == 3)
            {
                printf("You have choosed Mechanical Engineering : Convential and object type book\n\n");

                char book_name[50];
                char author_name[50];
                int pages;
                int price;

                printf("Book name : ");
                scanf("%s", &book_name);
                printf("\n");

                printf("Author name : ");
                scanf("%s", &author_name);
                printf("\n");

                printf("Pages : ");
                scanf("%d", &pages);
                printf("\n");

                printf("Price of a book : ");
                scanf("%d", &price);
                printf("\n");
            }
        }
    }
    else if(n == 3)
    {
        printf("You can search the book (Book status)\n\n");

        printf("Press the code: 101 for Introduction to C\n");
        printf("Press the code: 202  for Introduction to python\n");
        printf("Press the code: 303  for Introduction to java\n");
        printf("Press the code: 404 for Practical Electronics\n");
        printf("Press the code: 505 for The art of electronics\n");
        printf("Press the code: 606 for Fundamentals of digital circuits\n");
        printf("Press the code: 707 for Introduction to Autocad\n");
        printf("Press the code: 808 for Fundamental of thermodynamics\n");
        printf("Press the code: 909 for Mechanical engineering : conventional and objective type\n");

        int s;
        printf("Enter the book to search ( USE THE CODE ) :");
        scanf("%d", &s);

        printf("\n");

        switch (s)
        {
        case 101:
        printf("Book name : Introduction to C\n\n");
        printf("Book Status : 2 Copies left");
        break;
        case 202:
        printf("Book name : Introduction to python\n\n");
        printf("Book Status : 2 Copies left");
        break;
        case 303:
        printf("Book name : Introduction to java\n\n");
        printf("Book Status : 2 Copies left");
        break;
        case 404:
        printf("Book name : Practical Electronics\n\n");
        printf("Book Status : 2 Copies left");
        break;
        case 505:
        printf("Book name : The art of electronics\n\n");
        printf("Book Status : 2 Copies left");
        break;
        case 606:
        printf("Book name : Fundamentals of digital circuits\n\n");
        printf("Book Status : 2 Copies left");
        break;
        case 707:
        printf("Book name : Introduction to Autocad\n\n");
        printf("Book Status : 2 Copies left");
        break;
        case 808:
        printf("Book name : \n\n");
        printf("Book Status : 2 Copies left");
        break;
        case 909:
        printf("Book name : Mechanical engineering : conventional and objective type\n\n");
        printf("Book Status : 2 Copies left");
        break;
        default:
            break;
        }

    }
    else if(n == 4)
    {
        printf("The libary is closed\n\n");

        printf("Having a nice day\n");
    }
}
