#include <stdio.h>

int main() {
    int N;
    int cnt = 0;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    if (N < 1 || N > 1000) {
        printf("Invalid value. N must be between 1 and 1000.\n");
        return 1;
    }
    
    for (int A = 1; A <= 500; ++A) {
        for (int B = 1; B <= A; ++B) {
            if (A * A - B * B == N) {
                ++cnt;
            }
        }
    }
    
    printf("Number of valid pairs (A, B): %d\n", cnt);
    
    return 0;
}
