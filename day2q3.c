/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

# include <stdio.h>

int main()

{
    float Length, Breadth, Area, Perimeter;

    printf("Enter the length: ");

    scanf("%f", &Length);

    printf("Enter the breadth: ");

    scanf("%f", &Breadth);

    Perimeter=2*(Length+Breadth);

    printf("The perimeter of rectangle is: %.2f\n", Perimeter);

    Area=Length*Breadth;

    printf("The area of rectange is: %.2f", Area);

    return 0;

}