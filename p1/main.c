#include <stdio.h>

int main() {

    char x[10];              
    char *p, *q;             

    char maxChar;            
    int maxCount = 0;        

    for (p = x; p < x + 10; p++)
        scanf(" %c", p);
  
    for (p = x; p < x + 10; p++) {

        int count = 0;       
      
        for (q = x; q < x + 10; q++) {

            if (*p == *q)    // 문자가 같으면
                count++;     // 빈도수 증가
        }

        // 지금까지의 최대 빈도수보다 크면 갱신
        if (count > maxCount) {
            maxCount = count;
            maxChar = *p;
        }
    }

    // 결과 출력
    printf("%c %d", maxChar, maxCount);

    return 0;
}
