/* Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for inválido, o
usuário deverá digitar outro até que ele seja válido (ou seja, positivo). Em seguida, leia um vetor
V contendo N posições de inteiros, em que cada valor deverá ser maior ou igual a 2. Esse vetor
deverá ser alocado dinamicamente.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int t; //t=tamanho do vetor a ser lido
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&t);
    int *vetor;
    vetor=malloc(t*sizeof(int));
    for(int i=0;i<t;i++){
        printf("Digite o valor da posicao %d: ",i);
        scanf("%d",&vetor[i]);
    }
    printf("Os valores do vetor sao: ");
    for(int j=0;j<t;j++){
        printf("%d",vetor[j]);
        if(j<t-2) printf(", ");
        if(j==t-2) printf(" e ");
    }
    return 0;
}
