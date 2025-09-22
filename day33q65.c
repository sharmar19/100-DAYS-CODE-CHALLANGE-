/*
Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include<stdio.h>

int main()
{
    int low=0, mid, n, a[50], i, k, f=-1;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the %d element in ascending order: ", i);
        scanf("%d", &a[i]);
    }

    int high=n-1;

    printf("Enter the number you want to search: ");
    scanf("%d", &k);

    while(high>=low){
        mid=(high+low)/2;
        if(a[mid]==k){
            f=mid;
            break;
        }
        else if(a[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    if(f!=-1){
        printf("The given number was found in the index: %d", f);
    }
    else{
        printf("The given number was not found in the array.");
    }
}
