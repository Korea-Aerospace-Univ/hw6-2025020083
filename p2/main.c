#include <stdio.h>

int main() {

    int n;                   
    int a[20], b[20];       

    scanf("%d", &n);

    for (int *p = a; p < a + n; p++)
        scanf("%d", p);

    for (int *p = b; p < b + n; p++)
        scanf("%d", p);

    p=a;
    q=b+n-1;

    while(p<a+n){

      printf("%d", *p+*q);

      p++;
      q--;

      }

    return 0;
}
