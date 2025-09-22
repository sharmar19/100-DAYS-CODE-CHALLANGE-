/*
Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main() {
    int n, i, key, pos = -1;
    int a[100]; 

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] > key) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        pos = n; 
    }

    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = key;

    n++;

    printf("Updated sorted array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}