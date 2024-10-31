#include <stdio.h>

int main()
{
    int qtd_participantes, qtd_papel_disponivel, qtd_recebida;
    
    scanf("%d %d %d", &qtd_participantes, &qtd_papel_disponivel, &qtd_recebida);
    
    if(qtd_papel_disponivel / qtd_participantes >= qtd_recebida)
    {
        printf("S\n");
    }   
    else printf("N\n");

    return 0;
}
