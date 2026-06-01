#include <stdio.h>

int main() {

    int n;
    int a[20], b[20];

    int *p;
    int *q;

    scanf("%d", &n);

    for (p = a; p < a + n; p++)
        scanf("%d", p);

    for (p = b; p < b + n; p++)
        scanf("%d", p);

    p = a;          // a의 첫 원소
    q = b + n - 1; // b의 마지막 원소

    while (p < a + n) {

        printf("%d ", *p + *q);

        p++;   // 다음 원소
        q--;   // 이전 원소
    }

    return 0;
}
