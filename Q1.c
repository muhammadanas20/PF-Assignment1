#include <stdio.h>
#include <string.h>
// Question No. 1
// Banks face the challenge of protecting customers from fraudulent activities. Fraud often occurs
// when someone gains access to another person’s account or debit card and begins making
// unusual purchases. To address this, a bank wants to create a system that can automatically
// monitor transactions and flag any that appears suspicious.
// The system must be able to identify three types of suspicious behavior.
// • First, if a customer spends more than a fixed daily limit, the system should consider this
// unusual. For example, if the daily spending limit is set at 5000, then any transaction that
// causes the total spending in a day to exceed this amount should be flagged.
// • Second, if a transaction occurs in a foreign country that is not commonly used by the
// customer, the system should also mark it as suspicious. For instance, if the customer
// usually shops in Pakistan or the UAE, then a transaction in another country such as the
// USA or UK would be unusual.
// • Third, if too many transactions are made within a short period of time, this could also be a
// sign of fraud. For example, if more than three transactions occur within the same hour, the
// system should treat the extra transactions as suspicious.
// By applying these rules, the bank can provide a first level of protection for its customers. Any
// suspicious transactions identified by the system can be reviewed by the bank’s fraud team for
// further investigation. This approach allows the bank to reduce risks, protect customer accounts,
// and build trust by ensuring safer financial operations.

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