#include <stdio.h>

int valor_absoluto(int num) {
    return num < 0 ? -num : num;
}

int movimentos_dama(int x1, int y1, int x2, int y2) {
    // Se as posições são iguais, não há movimento necessário
    if (x1 == x2 && y1 == y2) {
        return 0;
    }
    // Se estão na mesma linha, coluna ou diagonal, um movimento é suficiente
    else if (x1 == x2 || y1 == y2 || valor_absoluto(x1 - x2) == valor_absoluto(y1 - y2)) {
        return 1;
    }
    // Caso contrário, sempre é possível chegar ao destino em 2 movimentos
    else {
        return 2;
    }
}

int main() {
    int x1, y1, x2, y2;

    while (1) {
        // Lê os quatro inteiros
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        
        // Condição de parada
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) {
            break;
        }
        
        // Calcula e imprime o número de movimentos
        printf("%d\n", movimentos_dama(x1, y1, x2, y2));
    }

    return 0;
}
