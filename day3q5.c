/*

Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main()

{
    float Celcius, Farenhiet;
    
    printf("Enter temp in Celcius: ");
    
    scanf("%f", &Celcius);
    
    Farenhiet=((9.0/5.0)*Celcius) + 32;
    
    printf("The temp in farenhiet is %.2f", Farenhiet);
    
    return 0;

}