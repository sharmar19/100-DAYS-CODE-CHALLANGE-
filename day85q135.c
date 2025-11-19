/*135: Assign explicit values starting from 10 and print them.


Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/

#include <stdio.h>

enum Alphabet {
    A = 10, B, C, D, E, F, G, H, I, J, K, L, M,
    N, O, P, Q, R, S, T, U, V, W, X, Y, Z
};

int main() {
    int i;

    for (i = 0; i < 26; i++) {
        printf("%c=%d\n", 'A' + i, A + i);
    }

    return 0;
}