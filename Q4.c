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
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0, c10 = 0, c11 = 0, c12 = 0, c13 = 0;
    int three = 0, two = 0;

    printf("Enter card 1: ");
    scanf("%d", &card1);
    if (card1 < 1 || card1 > 13) {
        printf("Invalid card value. Please enter a value between 1 and 13.\n");
        return 1; // Exit the program with an error code
    }
    printf("Enter card 2: ");
    scanf("%d", &card2);
    if (card2 < 1 || card2 > 13) {
        printf("Invalid card value. Please enter a value between 1 and 13.\n");
        return 1; // Exit the program with an error code
    }
    printf("Enter card 3: ");
    scanf("%d", &card3);
    if (card3 < 1 || card3 > 13) {
        printf("Invalid card value. Please enter a value between 1 and 13.\n");
        return 1; // Exit the program with an error code
    }
    printf("Enter card 4: ");
    scanf("%d", &card4);
    if (card4 < 1 || card4 > 13) {
        printf("Invalid card value. Please enter a value between 1 and 13.\n");
        return 1; // Exit the program with an error code
    }
    printf("Enter card 5: ");
    scanf("%d", &card5);
    if (card5 < 1 || card5 > 13) {
        printf("Invalid card value. Please enter a value between 1 and 13.\n");
        return 1; // Exit the program with an error code
    }

    // Count each card value
    if(card1==1) c1++; else if(card1==2) c2++; else if(card1==3) c3++; else if(card1==4) c4++;
    else if(card1==5) c5++; else if(card1==6) c6++; else if(card1==7) c7++; else if(card1==8) c8++;
    else if(card1==9) c9++; else if(card1==10) c10++; else if(card1==11) c11++; else if(card1==12) c12++;
    else if(card1==13) c13++;
    // count for card2
    if(card2==1) c1++; else if(card2==2) c2++; else if(card2==3) c3++; else if(card2==4) c4++;
    else if(card2==5) c5++; else if(card2==6) c6++; else if(card2==7) c7++; else if(card2==8) c8++;
    else if(card2==9) c9++; else if(card2==10) c10++; else if(card2==11) c11++; else if(card2==12) c12++;
    else if(card2==13) c13++;
    // count for card3
    if(card3==1) c1++; else if(card3==2) c2++; else if(card3==3) c3++; else if(card3==4) c4++;
    else if(card3==5) c5++; else if(card3==6) c6++; else if(card3==7) c7++; else if(card3==8) c8++;
    else if(card3==9) c9++; else if(card3==10) c10++; else if(card3==11) c11++; else if(card3==12) c12++;
    else if(card3==13) c13++;
    // count for card4
    if(card4==1) c1++; else if(card4==2) c2++; else if(card4==3) c3++; else if(card4==4) c4++;
    else if(card4==5) c5++; else if(card4==6) c6++; else if(card4==7) c7++; else if(card4==8) c8++;
    else if(card4==9) c9++; else if(card4==10) c10++; else if(card4==11) c11++; else if(card4==12) c12++;
    else if(card4==13) c13++;
    // count for card5
    if(card5==1) c1++; else if(card5==2) c2++; else if(card5==3) c3++; else if(card5==4) c4++;
    else if(card5==5) c5++; else if(card5==6) c6++; else if(card5==7) c7++; else if(card5==8) c8++;
    else if(card5==9) c9++; else if(card5==10) c10++; else if(card5==11) c11++; else if(card5==12) c12++;
    else if(card5==13) c13++;

    // Check for three of one rank and two of another
    if(c1==3) three++; if(c1==2) two++;
    if(c2==3) three++; if(c2==2) two++;
    if(c3==3) three++; if(c3==2) two++;
    if(c4==3) three++; if(c4==2) two++;
    if(c5==3) three++; if(c5==2) two++;
    if(c6==3) three++; if(c6==2) two++;
    if(c7==3) three++; if(c7==2) two++;
    if(c8==3) three++; if(c8==2) two++;
    if(c9==3) three++; if(c9==2) two++;
    if(c10==3) three++; if(c10==2) two++;
    if(c11==3) three++; if(c11==2) two++;
    if(c12==3) three++; if(c12==2) two++;
    if(c13==3) three++; if(c13==2) two++;
    // Determine if it's a full house
    if(three==1 && two==1)
        printf("Full house\n");
    else
        printf("Not a full house\n");

    return 0;
}