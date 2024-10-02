#include <stdio.h>

int main(){
    double salario, reajuste, novoSalario;
    int porcentagem;
    scanf("%lf", &salario);
    
    if(salario <= 400) {
        porcentagem = 15;
        novoSalario = salario + (salario * 0.15);
        reajuste = salario * 0.15;
    }
    
    if(salario > 400 && salario <= 800) {
        porcentagem = 12;
        novoSalario = salario + (salario * 0.12);
        reajuste = salario * 0.12;
    }
    
    if(salario > 800 && salario <= 1200) {
        porcentagem = 10;
        novoSalario = salario + (salario * 0.10);
        reajuste = salario * 0.10;
    }
    
    if(salario > 1200 && salario <= 2000) {
        porcentagem = 7;
        novoSalario = salario + (salario * 0.07);
        reajuste = salario * 0.07;
    }
    
    if(salario > 2000) {
        porcentagem = 4;
        novoSalario = salario + (salario * 0.04);
        reajuste = salario * 0.04;
    }
    
    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", porcentagem);
    return 0;
}
