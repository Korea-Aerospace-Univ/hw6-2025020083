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

            if (*p == *q)    
                count++;     
        }

        if (count > maxCount) {
            maxCount = count;
            maxChar = *p;
        }
    }


    printf("%c %d", maxChar, maxCount);

    return 0;
}
