#include <stdio.h>

// Question No. 2
// Assume you are writing a program to help students figure out which quadrant of the graph a point
// lies in. The quadrants of a graph are the four sections created by the x-axis and y-axis of a
// Cartesian coordinate plane, each with distinct signs for the x and y coordinates. Starting from the
// top-right and moving counterclockwise, they are:
// ● Quadrant I (+x, +y)
// ● Quadrant II (-x, +y)
// ● Quadrant III (-x, -y)
// ● Quadrant IV (+x, -y)
int main(){
    int x, y;
    printf("Enter the x and y coordinates of the point (separated by space): ");
    scanf("%d %d", &x, &y);
    if(x == 0 && y == 0){
        printf("The point (%d, %d) lies on the origin, not in any quadrant.\n", x, y);
    } else if(x == 0 && y != 0){
        printf("The point (%d, %d) lies on the y-axis, not in any quadrant.\n", x, y);
    } else if(y == 0 && x != 0){
        printf("The point (%d, %d) lies on the x-axis, not in any quadrant.\n", x, y);
    } else if(x > 0 && y > 0){
        printf("The point (%d, %d) lies in Quadrant I.\n", x, y);
    } else if(x < 0 && y > 0){
        printf("The point (%d, %d) lies in Quadrant II.\n", x, y);
    } else if(x < 0 && y < 0){
        printf("The point (%d, %d) lies in Quadrant III.\n", x, y);
    } else {
        printf("The point (%d, %d) lies in Quadrant IV.\n", x, y);
    }

    return 0;
}