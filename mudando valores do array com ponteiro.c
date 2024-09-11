/* . Crie um programa que contenha um array de inteiros contendo cinco elementos (pode ser
definido na inicialização ou preenchido pelo usuário). Modifique os valores do vetor usando
aritmética de ponteiros. */
#include<stdio.h>
int main(){
    int array[]={1,2,3,4,6};
    int *p=array;
    *p+=5;
    p++;
    *p=40;
    p++;
    *p=*p*5;
    p++;
    *p-=1;
    p++;
    *p=1000;
    for(int i=0;i<5;i++){
    printf("Novo valor na posicao %d: %d\n",i+1,array[i]);
    }
    return 0;
}
