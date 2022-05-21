#include <stdio.h>
int digits(long long int);
int digits(long long int a)
{
    int count = 0;
    long long int x = 10;
    for (int i = 1; i <= 20; i++)
    {
        if (a > 9)
        {
            if (a / x > 9)
            {
                x = x * 10;
                count++;
            }
            else if (a / x < 9)
            {
                count = count + 2;
                break;
            }
        }
        else if (a < 9)
        {
            count = 1;
        }
    }
    return count;
}

void printled()
{
    long long int Number, no = 1; //variable declaration for long no
    int noOfDigits;               //variable declaratin for no of digits

    //take input from user
    printf("Enter Number : ");
    scanf("%lld", &Number);
    printf("\n\n");

    //passing arguments for no of digits
    noOfDigits = digits(Number); //count is assiged to noOfDigits
    //array declaration with size as noOfDigits, used for storing 10th's places
    int place[noOfDigits];

    //set highest 10th digit
    for (int a = 1; a < noOfDigits; a++)
    {
        no = no * 10;
    }

    //arithmetic operations for finding 10's places and storing them in array
    for (int a = 0; a <= noOfDigits; a++)
    {
        if (no != 0)
        {
            place[a] = Number / no;
        }
        Number = Number - place[a] * no;
        no = no / 10;
    }

    //loop for pattern
    for (int line = 1; line <= 10; line++) //this loop defines the line
    {
        if (line == 1) //condition for line
        {
            for (int i = 0; i < noOfDigits; i++) //this loop defines the no of characters that are displayed here it is 10
            {
                if (place[i] == 0 || place[i] == 2 || place[i] == 3 || place[i] == 8 || place[i] == 9)
                    printf("   ######   ");
                else if (place[i] == 1)
                {
                    printf("     ##     ");
                }
                else if (place[i] == 4)
                {
                    printf("      ###   ");
                }
                else if (place[i] == 5 || place[i] == 7)
                {
                    printf("  ########  ");
                }
                else if (place[i] == 6)
                {
                    printf("   #######  ");
                }
            }
        }
        else if (line == 2)
        {
            for (int i = 0; i < noOfDigits; i++)
            {
                if (place[i] == 0 || place[i] == 2 || place[i] == 3 || place[i] == 5 || place[i] == 6 || place[i] == 7 || place[i] == 8 || place[i] == 9)
                {
                    printf("  ########  ");
                }
                else if (place[i] == 1)
                {
                    printf("    ###     ");
                }
                else if (place[i] == 4)
                {
                    printf("     ####   ");
                }
            }
        }
        else if (line == 3)
        {
            for (int i = 0; i < noOfDigits; i++)
            {
                if (place[i] == 0 || place[i] == 2 || place[i] == 3 || place[i] == 8 || place[i] == 9)
                {
                    printf("  ##    ##  ");
                }
                else if (place[i] == 1)
                {
                    printf("   ####     ");
                }
                else if (place[i] == 4)
                {
                    printf("    #####   ");
                }
                else if (place[i] == 5 || place[i] == 6)
                {
                    printf("  ##        ");
                }
                else if (place[i] == 7)
                {
                    printf("        ##  ");
                }
            }
        }
        else if (line == 4)
        {
            for (int i = 0; i < noOfDigits; i++)
            {
                if (place[i] == 0 | place[i] == 8 || place[i] == 9)
                {
                    printf("  ##    ##  ");
                }
                else if (place[i] == 1)
                {
                    printf("     ##     ");
                }
                else if (place[i] == 2 || place[i] == 7)
                {
                    printf("       ###  ");
                }
                else if (place[i] == 3)
                {
                    printf("        ##  ");
                }
                else if (place[i] == 5 || place[i] == 6)
                {
                    printf("  ##        ");
                }
                else if (place[i] == 4)
                {
                    printf("   ### ##   ");
                }
            }
        }
        if (line == 5)
        {
            for (int i = 0; i < noOfDigits; i++)
            {
                if (place[i] == 0)
                {
                    printf("  ##    ##  ");
                }
                else if (place[i] == 1)
                {
                    printf("     ##     ");
                }
                else if (place[i] == 2 || place[i] == 7)
                {
                    printf("      ###   ");
                }
                else if (place[i] == 3)
                {
                    printf("     ####   ");
                }
                else if (place[i] == 4)
                {
                    printf("  ###  ##   ");
                }
                else if (place[i] == 5 || place[i] == 6)
                {
                    printf("  #######   ");
                }
                else if (place[i] == 8)
                {
                    printf("   ######   ");
                }
                else if (place[i] == 9)
                {
                    printf("  ########  ");
                }
            }
        }
        if (line == 6)
        {
            for (int i = 0; i < noOfDigits; i++)
            {
                if (place[i] == 0)
                {
                    printf("  ##    ##  ");
                }
                else if (place[i] == 1)
                {
                    printf("     ##     ");
                }
                else if (place[i] == 2 || place[i] == 7)
                {
                    printf("     ###    ");
                }
                else if (place[i] == 3)
                {
                    printf("     ####   ");
                }
                else if (place[i] == 4)
                {
                    printf("  ##   ##   ");
                }
                else if (place[i] == 5 || place[i] == 6)
                {
                    printf("  ########  ");
                }
                else if (place[i] == 8)
                {
                    printf("   ######   ");
                }
                else if (place[i] == 9)
                {
                    printf("   #######  ");
                }
            }
        }
        if (line == 7)
        {
            for (int i = 0; i < noOfDigits; i++)
            {
                if (place[i] == 0 || place[i] == 6 || place[i] == 8)
                {
                    printf("  ##    ##  ");
                }
                else if (place[i] == 1)
                {
                    printf("     ##     ");
                }
                else if (place[i] == 2 || place[i] == 7)
                {
                    printf("    ###     ");
                }
                else if (place[i] == 3 || place[i] == 5 || place[i] == 9)
                {
                    printf("        ##  ");
                }
                else if (place[i] == 4)
                {
                    printf("  ########  ");
                }
            }
        }
        if (line == 8)
        {
            for (int i = 0; i < noOfDigits; i++)
            {
                if (place[i] == 0 || place[i] == 3 || place[i] == 6 || place[i] == 8)
                {
                    printf("  ##    ##  ");
                }
                else if (place[i] == 1)
                {
                    printf("     ##     ");
                }
                else if (place[i] == 2 || place[i] == 7)
                {
                    printf("   ###      ");
                }
                else if (place[i] == 4)
                {
                    printf("  ########  ");
                }
                else if (place[i] == 5 || place[i] == 9)
                {
                    printf("        ##  ");
                }
            }
        }
        if (line == 9)
        {
            for (int i = 0; i < noOfDigits; i++)
            {
                if (place[i] == 0 || place[i] == 2 || place[i] == 3 || place[i] == 5 || place[i] == 6 || place[i] == 8 || place[i] == 9)
                {
                    printf("  ########  ");
                }
                else if (place[i] == 1)
                {
                    printf("   ######   ");
                }
                else if (place[i] == 2 || place[i] == 7)
                {
                    printf("  ###       ");
                }
                else if (place[i] == 3 || place[i] == 6 || place[i] == 8)
                {
                    printf("  ##    ##  ");
                }
                else if (place[i] == 4)
                {
                    printf("       ##   ");
                }
                else if (place[i] == 5)
                {
                    printf("        ##  ");
                }
                else if (place[i] == 3 || place[i] == 5 || place[i] == 9)
                {
                    printf("        ##  ");
                }
            }
        }
        if (line == 10)
        {
            for (int i = 0; i < noOfDigits; i++)
            {
                if (place[i] == 0 || place[i] == 1 || place[i] == 3 || place[i] == 6 || place[i] == 8)
                {
                    printf("   ######   ");
                }
                else if (place[i] == 2)
                {
                    printf("  ########  ");
                }
                else if (place[i] == 4)
                {
                    printf("       ##   ");
                }
                else if (place[i] == 5 || place[i] == 9)
                {
                    printf("  #######   ");
                }
                else if (place[i] == 7)
                {
                    printf("  ##        ");
                }
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
