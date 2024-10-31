#include <stdio.h>

int main() {
    int album;
    scanf("%d", &album);
    
    int tam;
    scanf("%d", &tam);
    
    int vet_fig[tam];
    
    for(int i = 0; i < tam; i++) {
        scanf("%d", &vet_fig[i]);
    }
    
    int vet_cont[album + 1];
    
    for(int i = 0; i <= album; i++) {
       vet_cont[i] = 0;
    }    
    
    for (int i = 0; i < tam; i++) {
        if (vet_fig[i] <= album) { 
            vet_cont[vet_fig[i]] += 1;
        }
    }
    
    int tem = 0;
     
    for(int i = 0; i <= album; i++)
    {
        if(vet_cont[i] > 0)
        {
            tem += 1;
        }
    }
    
    int falta = album - tem;
    
    printf("%d\n", falta);
    
    return 0;
}
