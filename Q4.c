// Question No. 4
// A poker hand is represented as a sequence of exactly 5 integers, each in the range 1 to 13,
// where:
// • 1 represents Ace,
// • 2–10 represent cards numbered 2 through 10,
// • 11 represents Jack,
// • 12 represents Queen,
// • 13 represents King.
// A hand is said to be a full house if it contains:
// • three cards of one rank, and
// • two cards of a different rank.
// For example, the hand (1, 2, 1, 2, 1) is a full house because it contains three cards of rank 1 (Ace)
// and two cards of rank 2.

#include <stdio.h>

int main()
{
    int card1, card2, card3, card4, card5;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0, count10 = 0, count11 = 0, count12 = 0, count13 = 0;
    printf("enter your card1 number:");
    scanf("%d", &card1);
    printf("enter your card2 number: ");
    scanf("%d", &card2);
    printf("enter your card3 number: ");
    scanf("%d", &card3);
    printf("enter your card4 number: ");
    scanf("%d", &card4);
    printf("enter your card5 number: ");
    scanf("%d", &card5);
    // for card1
    if (card1 == 1)
    {
        count1++;
    }
    else if (card1 == 2)
    {
        count2++;
    }
    else if (card1 == 3)
    {
        count3++;
    }
    else if (card1 == 4)
    {
        count4++;
    }
    else if (card1 == 5)
    {
        count5++;
    }
    else if (card1 == 6)
    {
        count6++;
    }
    else if (card1 == 7)
    {
        count7++;
    }
    else if (card1 == 8)
    {
        count8++;
    }
    else if (card1 == 9)
    {
        count9++;
    }
    else if (card1 == 10)
    {
        count10++;
    }
    else if (card1 == 11)
    {
        count11++;
    }
    else if (card1 == 12)
    {
        count12++;
    }
    else if (card1 == 13)
    {
        count13++;
    }
    // for card2
    if (card2 == 1)
    {
        count1++;
    }
    else if (card2 == 2)
    {
        count2++;
    }
    else if (card2 == 3)
    {
        count3++;
    }
    else if (card2 == 4)
    {
        count4++;
    }
    else if (card2 == 5)
    {
        count5++;
    }
    else if (card2 == 6)
    {
        count6++;
    }
    else if (card2 == 7)
    {
        count7++;
    }
    else if (card2 == 8)
    {
        count8++;
    }
    else if (card2 == 9)
    {
        count9++;
    }
    else if (card2 == 10)
    {
        count10++;
    }
    else if (card2 == 11)
    {
        count11++;
    }
    else if (card2 == 12)
    {
        count12++;
    }
    else if (card2 == 13)
    {
        count13++;
    }
    // for card3
    if (card3 == 1)
    {
        count1++;
    }
    else if (card3 == 2)
    {
        count2++;
    }
    else if (card3 == 3)
    {
        count3++;
    }
    else if (card3 == 4)
    {
        count4++;
    }
    else if (card3 == 5)
    {
        count5++;
    }
    else if (card3 == 6)
    {
        count6++;
    }
    else if (card3 == 7)
    {
        count7++;
    }
    else if (card3 == 8)
    {
        count8++;
    }
    else if (card3 == 9)
    {
        count9++;
    }
    else if (card3 == 10)
    {
        count10++;
    }
    else if (card3 == 11)
    {
        count11++;
    }
    else if (card3 == 12)
    {
        count12++;
    }
    else if (card3 == 13)
    {
        count13++;
    }

    //   for card4
    if (card4 == 1)
    {
        count1++;
    }
    else if (card4 == 2)
    {
        count2++;
    }
    else if (card4 == 3)
    {
        count3++;
    }
    else if (card4 == 4)
    {
        count4++;
    }
    else if (card4 == 5)
    {
        count5++;
    }
    else if (card4 == 6)
    {
        count6++;
    }
    else if (card4 == 7)
    {
        count7++;
    }
    else if (card4 == 8)
    {
        count8++;
    }
    else if (card4 == 9)
    {
        count9++;
    }
    else if (card4 == 10)
    {
        count10++;
    }
    else if (card4 == 11)
    {
        count11++;
    }
    else if (card4 == 12)
    {
        count12++;
    }
    else if (card4 == 13)
    {
        count13++;
    }

    // for card 5
    if (card5 == 1)
    {
        count1++;
    }
    else if (card5 == 2)
    {
        count2++;
    }
    else if (card5 == 3)
    {
        count3++;
    }
    else if (card5 == 4)
    {
        count4++;
    }
    else if (card5 == 5)
    {
        count5++;
    }
    else if (card5 == 6)
    {
        count6++;
    }
    else if (card5 == 7)
    {
        count7++;
    }
    else if (card5 == 8)
    {
        count8++;
    }
    else if (card5 == 9)
    {
        count9++;
    }
    else if (card5 == 10)
    {
        count10++;
    }
    else if (card5 == 11)
    {
        count11++;
    }
    else if (card5 == 12)
    {
        count12++;
    }
    else if (card5 == 13)
    {
        count13++;
    }

    if (count1 == 3 && count2 == 2 || count3 == 2 || count4 == 2 || count5 == 2 || count6 == 2 || count7 == 2 || count8 == 2 || count9 == 2 || count10 == 2 || count11 == 2 || count12 == 2 || count13 == 2)
    {
        printf("full house");
    }
    else
    {
        printf("not a full house");
    }

    return 0;
}