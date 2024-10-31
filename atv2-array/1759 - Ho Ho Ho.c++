#include <stdio.h>

int main()
{
    int ho;
    
    scanf("%d", &ho);
    
    if(ho <= 0)
    {
        return 0;
    }
    
    for(int i = 1; i < ho; i++)
    {
        printf("Ho ");
    }
    
    printf("Ho!\n");
    
    return 0;
    
}
