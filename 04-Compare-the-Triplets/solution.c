#include <stdio.h>

int main() {
    int a[3], b[3];
    for (int i = 0; i < 3; i++) scanf("%d", &a[i]);
    for (int i = 0; i < 3; i++) scanf("%d", &b[i]);

    int scoreA = 0, scoreB = 0;
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) scoreA++;
        else if (a[i] < b[i]) scoreB++;
    }

    printf("%d %d\n", scoreA, scoreB);
    return 0;
}
