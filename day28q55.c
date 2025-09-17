/*
Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include<stdio.h>

int prime(int a);

int main()
{
    int n, i, p;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i=2;i<=n;i++){
        if(prime(i)){
        printf("%d\n", i);
        }
    }
}

int prime(int a)
{

    int i, n=0;

    for(i=1;i<=a/2;i++){
        if(a%i!=0){
            n++;
        }
    }

    if(n==(a/2)-1){
        return 1;
    }
    else{
        return 0;
    }
}