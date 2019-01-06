#include <stdio.h>

int main() {
    int n, t, minj;
    int box[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &box[i]);
    }

    for (int i = 0; i < n -1 ; i++) {
        minj = i;

        for(int j = i; j < n; j++) {
            if (box[j] < box[minj]) { minj = j; }
        }

        t = box[i]; box[i] = box[minj]; box[minj] = t;
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }

        printf("%d", box[i]);
    }
    return 0;
}