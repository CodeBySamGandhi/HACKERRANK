#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int flag = 0;

    for (int i = 1; flag < n; i++) {
        int sq = i * i;
        if (sq % 3 != 0) {
            printf("%d ", sq);
            flag++;
        }
    }

    return 0;
}