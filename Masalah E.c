#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int count = 0;
    while (count < M) {
        printf("%d\n", N + count);
        count++;
    }
    return 0;
}