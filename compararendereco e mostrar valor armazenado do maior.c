/* Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em
seguida, compare seus endereços e exiba o conteúdo do maior endereço */
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(&a>&b) printf("O conteudo do maior endereco e: %d",a);
    else printf("O conteudo do maior endereco e: %d",b);
    return 0;
}
