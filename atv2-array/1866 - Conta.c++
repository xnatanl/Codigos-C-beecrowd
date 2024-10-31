#include <stdio.h>

int main()
{   
    int S, C;
    
    scanf("%d", &C);
    
    for(int n = 0; n < C; n++)
    {
        scanf("%d", &S);
        
        if(S%2 == 0)
        {
            printf("0\n");
        }else printf("1\n");
        
    }
    
    return 0;
}
