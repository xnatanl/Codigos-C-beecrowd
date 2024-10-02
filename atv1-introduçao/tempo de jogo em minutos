#include <stdio.h>

int main(){
    int hi, mi, hf, mf, totalMinIni, totalMinFi, diferenca, hora, minuto;
    
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    totalMinIni = 60 * hi + mi;
    totalMinFi = 60 * hf + mf;
    
    if (totalMinFi < totalMinIni) {
        totalMinFi += 24 * 60; 
    }
    
    diferenca = totalMinFi - totalMinIni;
    
    hora = diferenca / 60;
    minuto = diferenca % 60;
    
    if(hora == 0 && minuto == 0) {
        hora = 24;
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    return 0;
}
