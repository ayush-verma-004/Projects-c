#include <stdio.h>

void element_info(int a);
int main()
{
    int n;
    int m;
    int a;
    int Exit;
    int Exi;

    printf("Welcome to modern periodic table\n\n");

    printf("> Enter 1 to know about an element\n\n");
    printf("> Enter 2 to close the periodic table\n\n");

    printf("ENTER\n");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("> Press 3 to search the element by atomic numer\n\n");

        printf("ENTER\n");
        scanf("%d", &m);

        if (m == 3)
        {
            printf("Enter the atomic number of the element to be searched : ");
            scanf("%d", &a);

            element_info(a);
        }
    }
    else if (n == 2)
    {
        printf("Do you want to exit? (YEs/No)\n");
        printf("> Press 6 for Yes\n");
        printf("> Press 7 for No\n");

        printf("ENTER\n");
        scanf("%d", &Exit);

        if (Exit == 6)
        {
            printf("Are you sure, you want to close the periodic table? (Yes/NO)\n");
            printf("> Press 4 for Yes\n");
            printf("> Press 5 for No\n");

            printf("ENTER\n");
            scanf("%d", &Exi);

            if (Exi == 4)
            {
                printf("The periodic table has closed");
            }
            else if (Exi == 5)
            {
                printf("Periodic table has not closed and you can continue to learn more about elements\n\n");

                printf("Enter the atomic number of the element to be searched : \n\n");
                scanf("%d", &a);

                element_info(a);
            }
        }
        else if (Exit == 7)
        {
            printf("Periodic table has not closed and you can continue to learn more about elements\n\n");

            printf("Enter the atomic number of the element to be searched : \n\n");
            scanf("%d", &a);

            element_info(a);
        }
    }
}

void element_info(int a)
{
    if (a == 1)
    {
        printf("Name : Hydrogen\n");
        printf("Symbol : H\n");
        printf("Atomic Number : 1\n");
        printf("Atomic mass : 1.008\n");
        printf("Electronic Configuration : 1s¹\n");
        printf("Discovered By : Henry Cavendish\n");
        printf("Charge : +1\n");
    }
    else if (a == 6)
    {
        printf("Name : Carbon\n");
        printf("Symbol : C\n");
        printf("Atomic Number : 6\n");
        printf("Atomic mass : 12.01\n");
        printf("Electronic Configuration : 1s² 2s² 2p²\n");
        printf("Discovered By : Known since ancient times\n");
        printf("Charge : Carbon typically forms covalent bonds and does not usually carry a significant charge in its elemental form.\n");
    }
    else if (a == 7)
    {
        printf("Name : Nitrogen\n");
        printf("Symbol : N\n");
        printf("Atomic Number : 7\n");
        printf("Atomic mass : 14.01\n");
        printf("Electronic Configuration : 1s² 2s² 2p³\n");
        printf("Discovered By : Daniel Rutherford\n");
        printf("Charge : Nitrogen typically forms covalent bonds and does not usually carry a significant charge in its elemental form\n");
    }
    else if (a == 8)
    {
        printf("Name : Oxygen\n");
        printf("Symbol : O\n");
        printf("Atomic Number : 8\n");
        printf("Atomic mass : 16\n");
        printf("Electronic Configuration : 1s² 2s² 2p⁴\n");
        printf("Discovered By : Joseph Priestley, Carl Wilhelm Scheele, and Antoine Lavoisier\n");
        printf("Charge : Oxygen typically forms covalent bonds and does not usually carry a significant charge in its elemental form.\n");
    }
    else if (a == 11)
    {
        printf("Name : Sodium\n");
        printf("Symbol : Na\n");
        printf("Atomic Number : 11\n");
        printf("Atomic mass : 22.99\n");
        printf("Electronic Configuration : 1s² 2s² 2p⁶ 3s¹\n");
        printf("Discovered By : by: Humphry Davy\n");
        printf("Charge : +1\n");
    }
    else if (a == 15)
    {
        printf("Name : Phosphorus\n");
        printf("Symbol : P\n");
        printf("Atomic Number : 15\n");
        printf("Atomic mass : 30.97\n");
        printf("Electronic Configuration : 1s² 2s² 2p⁶ 3s² 3p³\n");
        printf("Discovered By : Hennig Brand\n");
        printf("Charge : -3\n");
    }
    else if (a == 16)
    {
        printf("Name : Sulfur\n");
        printf("Symbol : S\n");
        printf("Atomic Number : 16\n");
        printf("Atomic mass : 32.97\n");
        printf("Electronic Configuration : 1s² 2s² 2p⁶ 3s² 3p⁴\n");
        printf("Discovered By : Ancient people\n");
        printf("Charge : Sulfur typically forms covalent bonds and does not usually carry a significant charge in its elemental form.\n");
    }
    else if (a == 17)
    {
        printf("Name : Chlorine\n");
        printf("Symbol : Cl\n");
        printf("Atomic Number : 17\n");
        printf("Atomic mass : 35.45\n");
        printf("Electronic Configuration : 1s² 2s² 2p⁶ 3s² 3p⁵\n");
        printf("Discovered By : Carl Wilhelm Scheele\n");
        printf("Charge : -1\n");
    }
    else if (a == 20)
    {
        printf("Name : Calcium\n");
        printf("Symbol : Ca\n");
        printf("Atomic Number : 20\n");
        printf("Atomic mass : 40.08\n");
        printf("Electronic Configuration : 1s² 2s² 2p⁶ 3s² 3p⁶ 4s²\n");
        printf("Discovered By : Humphry Davy\n");
        printf("Charge : +2\n");
    }
    else if (a == 26)
    {
        printf("Name : Iron\n");
        printf("Symbol : Fe\n");
        printf("Atomic Number : 26\n");
        printf("Atomic mass : 55.85\n");
        printf("Electronic Configuration : 1s² 2s² 2p⁶ 3s² 3p⁶ 4s² 3d⁶\n");
        printf("Discovered By : Known since ancient times\n");
        printf("Charge : +2 or +3\n");
    }
    else
    {
        printf("please enter valid number\n");
    }
}