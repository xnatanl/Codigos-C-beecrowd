#include <stdio.h>
 
int main() {
 
    int m, f1, f2, f3, mv = 0;
    scanf("%d %d %d", &m, &f1, &f2);
    
    f3 = m - (f1 + f2);
    
    if(f1 > f2 && f1 > f3)
    {
        mv = f1;
    }
    else if(f2 > f1 && f2 > f3)
    {
        mv = f2;
    }
    else mv = f3;
    
    printf("%d\n", mv);
 
    return 0;
}
