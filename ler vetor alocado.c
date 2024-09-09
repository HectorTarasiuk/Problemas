/* Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for inválido, o
usuário deverá digitar outro até que ele seja válido (ou seja, positivo). Em seguida, leia um vetor
V contendo N posições de inteiros, em que cada valor deverá ser maior ou igual a 2. Esse vetor
deverá ser alocado dinamicamente. */ 

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Digite um valor inteiro nao negativo: ");
    do{
        scanf("%d",&n);
        if(n<0) printf("Valor invalido, digite um nao negativo: ");
    }while (n<0);
    int *vetor;
    vetor=malloc(n*sizeof(int));
    if(vetor==NULL){
        printf("Erro ao alocar memoria...sorry");
        return 1;
    }
    for(int i=0;i<n;i++){
        printf("Digite o valor da posicao %d, maior ou igual a 2: ",i);
        do{
            scanf("%d",vetor[i]);
            if(vetor[i]<2) printf("Valor invalido, digite novamente: ");
        }while(vetor[i]<2);
    }
    printf("Vetor lido com sucesso...legal");
    free(vetor);
    return 0;
}
