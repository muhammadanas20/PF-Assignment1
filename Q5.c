// You are tracking how many times the user has entered a number. Assume the user can only enter
// one-digit numbers (a.k.a 0-9). The user can input numbers as many times as they want, however,
// if they enter anything that is not a number between 0-9, they will not be allowed to input any more
// numbers.
// After the user can no longer input numbers, your program should display the output in the
// following format:

// Number Number of Occurrences

// 0           2
// 1           10
// 2           3
// 3           4
// 4           8
// 5           7

#include <stdio.h>

int main()
{
    int c1, c2, c3, c4, c5, c6, c7, c8, c9, c0;
    c0 = c1 = c2 = c3 = c4 = c5 = c6 = c7 = c8 = c9 = 0;
    int input;
    printf("Enter a number between 0-9 (any other input to stop): ");
    while (scanf("%d", &input) == 1)
    {
        if (input < 0 || input > 9)
        {
            break;
        }
        switch (input)
        {
        case 0:
            c0++;
            break;
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        case 5:
            c5++;
            break;
        case 6:
            c6++;
            break;
        case 7:
            c7++;
            break;
        case 8:
            c8++;
            break;
        case 9:
            c9++;
            break;
        }
        printf("Enter a number between 0-9 (any other input to stop): ");
    }
    if (c1 == 0 && c2 == 0 && c3 == 0 && c4 == 0 && c5 == 0 && c6 == 0 && c7 == 0 && c8 == 0 && c9 == 0 && c0 == 0)
    {
        printf("No numbers were entered.\n");
        return 0;
    }
    else
    {
        printf("Number Number of Occurrences\n");
        if (c0 > 0)
        {
            printf("0\t%d\n", c0);
        }
        if (c1 > 0)
        {
            printf("1\t%d\n", c1);
        }
        if (c2 > 0)
        {
            printf("2\t%d\n", c2);
        }
        if (c3 > 0)
        {
            printf("3\t%d\n", c3);
        }
        if (c4 > 0)
        {
            printf("4\t%d\n", c4);
        }
        if (c5 > 0)
        {
            printf("5\t%d\n", c5);
        }
        if (c6 > 0)
        {
            printf("6\t%d\n", c6);
        }
        if (c7 > 0)
        {
            printf("7\t%d\n", c7);
        }
        if (c8 > 0)
        {
            printf("8\t%d\n", c8);
        }
        if (c9 > 0)
        {
            printf("9\t%d\n", c9);
        }
    }
    return 0;
}