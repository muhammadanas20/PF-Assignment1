
// Question No. 7
// The following program attempts to print a message containing an integer representing a day of
// the week (where 1 = Monday, 2 = Tuesday, ..., 7 = Sunday) and then print the corresponding day
// name. For example: You entered Wednesday. In its current state, the program contains logical
// errors. Locate the problems and repair them so the program will work as expected. Rewrite the
// corrected code using switch cases as well.
#include <stdio.h>
int main()
{
int value;
printf("Please enter a value in the range 1...7:");
scanf("%d", &value);
//Translate number into its English word
switch (value)
{
case 1:
printf("You entered a Monday\n");
break;
case 2:
printf("You entered a Tuesday\n");
break;
case 3:
printf("You entered a Wednesday\n");
break;
case 4:
printf("You entered a Thursday\n");
break;
case 5:
printf("You entered a Friday\n");
break;
case 6:
printf("You entered a Saturday\n");
break;
case 7:
printf("You entered a Sunday\n");
break;
default:
printf("You entered a value out of range\n");
}
return 0;
}
