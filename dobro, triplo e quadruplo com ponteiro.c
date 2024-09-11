/* Considere a seguinte declaração: int var, *ptr1, **ptr2, ***ptr3. Escreva um programa que leia a
variável var e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os
ponteiros ptr1, ptr2 e ptr3. O ponteiro ptr1 deve ser usado para calcular o dobro, ptr2, o triplo, e
ptr3, o quádruplo.*/
#include<stdio.h>
int main(){
    int var,*ptr1,**ptr2,***ptr3;
    scanf("%d",&var);
    ptr1=&var;
    ptr2=&ptr1;
    ptr3=&ptr2;
    *ptr1*=2;
    printf("O dobro de %d e %d\n",var/2,*ptr1);
    **ptr2*=1.5;
    printf("O triplo de %d e %d\n",var/3,**ptr2);
    ***ptr3=***ptr3*4;
    ***ptr3=***ptr3/3;
    printf("O quadruplo de %d e %d\n",var/4,***ptr3);
    return 0;
}
