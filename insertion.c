#include <stdio.h>

int main() {
    int n, v, j;
    int box[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &box[i]);
    }

    for(int i = 0; i < n; i++) {
        v = box[i];
        j = i - 1;

        while (j >= 0 && box[j] > v) {
            box[j + 1] = box[j];
            j--;
        }
        box[j + 1] = v;
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }

        printf("%d", box[i]);
    }

    return 0;
}