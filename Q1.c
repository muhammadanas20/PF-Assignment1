#include <stdio.h>
#include <string.h>

int main() {
    int dailyLimit = 5000;
    int transactionAmount, totalSpending, transactionsThisHour;
    char transactionCountry[50];

    // Input total spending for the day and transaction amount
    printf("Enter total spending for today (before this transaction): ");
    scanf("%d", &totalSpending);

    printf("Enter transaction amount: ");
    scanf("%d", &transactionAmount);

    // Check daily limit
    if (totalSpending + transactionAmount > dailyLimit) {
        printf("Transaction flagged: Daily limit exceeded.\n");
        return 0;
    }

    // Input country
    printf("Enter transaction country: ");
    scanf("%s", transactionCountry);

    // Check country (case-insensitive for Pakistan/UAE)
    if ((strcmp(transactionCountry, "Pakistan") != 0 &&
          strcmp(transactionCountry, "pakistan") != 0 &&
          strcmp(transactionCountry, "UAE") != 0 &&
          strcmp(transactionCountry, "uae") != 0)) {
        printf("Transaction flagged: Unusual country.\n");
        return 0;
    }

    // Input number of transactions in this hour
    printf("Enter number of transactions in this hour (including this one): ");
    scanf("%d", &transactionsThisHour);

    // Check transactions per hour
    if (transactionsThisHour > 3) {
        printf("Transaction flagged: Too many transactions in one hour.\n");
        return 0;
    }

    printf("Transaction is being processed.\n");
    return 0;
}