#include <stdio.h>     

int main()
{
    int N;             
    int a[20]={};
    int b[20]={};   
    int *p, *q;        

    scanf("%d", &N);    
                       

    for (p = a; p < a + N; p++)  
    {
        scanf("%d", p);           
                                  
    }

    for (p = b; p < b + N; p++)  
    {
        scanf("%d", p);          
    }

    q = b + N - 1;               
                                  

    for (p = a; p < a + N; p++)   
    {
        printf(" %d", *p + *q);   
                                 
                               

        q--;                      
                                
    }

    return 0;                    
