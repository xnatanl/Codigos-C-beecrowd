#include <stdio.h>

int main() {

    int idade, ano, mes, dia;
    scanf("%d", &idade);
    ano = idade / 365;
    mes = (idade - 365*ano) / 30;
    dia = idade - (365*ano) - (30*mes);
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);

    return 0;
}
/*

PROF:

#include <stdio.h>
#include<math.h>
#define PI 3.14159

int main() {

    int dias;
    scanf("%d", &dias);

    int a = dias / 365;
    dias = dias % 365;
    int m = dias / 30;
    int d = dias % 30;
    
}

*/
