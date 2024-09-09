/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o
maior endereço */
#include<stdio.h>
int main(){
    int Cuca;
    int Beludo;
    int *pC=&Cuca;
    int *pB=&Beludo;
    printf("O endereco de Cuca e: %p\nO endereco de Beludo e: %p\n",&Cuca,&Beludo);
    if(pC<pB) printf("O maior endereco e: %p",pB);
    else printf("O maior endereco e: %p",pC);
    return 0;
}
