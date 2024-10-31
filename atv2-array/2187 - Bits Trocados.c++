#include <stdio.h>

int main()
{
    int saque, bit50, bit10, bit5, bit1;
   
    for(int i = 1; i > 0; i++)
    {
        scanf("%d", &saque);
        
        if(saque > 0)
        {
            int resto = saque; //72
            
            bit50 = resto / 50;
            
            resto = resto % 50;
            
            bit10 = resto / 10;
            
            resto = resto % 10;
            
            bit5 = resto / 5;
            
            resto = resto % 5;
            
            bit1 = resto / 1;
            
            resto = resto % 1;
            
            printf("Teste %d\n%d %d %d %d\n\n", i, bit50, bit10, bit5, bit1);
        } else return 0;
    }
    return 0;
    
}
