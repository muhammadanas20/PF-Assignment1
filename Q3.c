#include <stdio.h>
// Question No. 3
//  Suppose you are writing a program to help a person figure out if they are eligible for a driving
// license or not.
// An applicant will be asked a series of questions. Based on the answers, it will be decided if the
// applicant is eligible for a license.
// • Prompt the applicant for their age. If the age is 18 or above, ask the next question,
// otherwise the applicant is ineligible.
// ● Ask the applicant if they have passed(P) or failed(F) their eyesight exam. If they have
// passed the test, continue with the next question, otherwise inform them that they might
// need a prescription for glasses.
// ● Ask the applicant if they have passed(P) or failed(F) their written test. If they have passed
// the test, continue with the next question, otherwise inform them that they need to retake
// the written test.
// ● Ask the applicant if they have passed (P) or failed(F) their driving test. If they have passed
// the test, continue with the next question ONLY IF the user is above 60 years old. If they
// are not above 60, inform them that they are eligible for the license. If they fail the test, then
// they are not eligible.
// ● This question is only asked after the applicant has mentioned that they passed their driving
// test, and if they are over 60 years of age. Ask the applicant if they have a medical fitness
// certificate or not. If they have the certificate, inform them that they are eligible for the
// license, otherwise they are not eligible.

int main()
{
    int candidateAge;
    char eyesightTest, writtenTest, drivingTest, medicalTest;

    // Prompt for age
    printf("Enter your age: ");
    scanf("%d", &candidateAge);

    if (candidateAge < 18) {
        printf("You are ineligible for a driving license.\n");
        return 0;
    }

    // Prompt for eyesight exam result
    printf("Have you passed (P) or failed (F) your eyesight exam? ");
    scanf(" %c", &eyesightTest);
    if (eyesightTest == 'F' || eyesightTest == 'f') {
        printf("You might need a prescription for glasses.\n");
        return 0;
    }

    // Prompt for written test result
    printf("Have you passed (P) or failed (F) your written test? ");
    scanf(" %c", &writtenTest);
    if (writtenTest == 'F' || writtenTest == 'f') {
        printf("You need to retake the written test.\n");
        return 0;
    }

    // Prompt for driving test result
    printf("Have you passed (P) or failed (F) your driving test? ");
    scanf(" %c", &drivingTest);
    if (drivingTest == 'F' || drivingTest == 'f') {
        printf("You are not eligible for a driving license.\n");
        return 0;
    }

    // If age is above 60, ask for medical fitness certificate
    if (candidateAge > 60) {
        printf("Do you have a medical fitness certificate? (Y/N): ");
        scanf(" %c", &medicalTest);
        if (medicalTest == 'Y' || medicalTest == 'y') {
            printf("You are eligible for a driving license.\n");
        } else {
            printf("You are not eligible for a driving license.\n");
        }
    } else {
        printf("You are eligible for a driving license.\n");
    }

    return 0;
}