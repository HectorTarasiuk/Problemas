/* Tamanho em bytes de cada tipo de dado */
#include<stdio.h>
int main(){
    char a='P';
    int x=51;
    float y=0.5;
    double z=12.125;
    printf("O tamanho, em bytes, que char ocupa na memoria e:   %zu\n",sizeof(a));
    printf("O tamanho, em bytes, que int ocupa na memoria e:    %zu\n",sizeof(x));
    printf("O tamanho, em bytes, que float ocupa na memoria e:  %zu\n",sizeof(y));
    printf("O tamanho, em bytes, que double ocupa na memoria e: %zu\n",sizeof(z));
    return 0;
}
