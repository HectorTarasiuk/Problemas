/*Crie uma estrutura para representar as coordenadas de um ponto no plano cartesiano (posições
X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das
coordenadas, isto é, a posição (0,0). */
#include<stdio.h>
#include<math.h>
int main(){
    struct ponto{
        int x;
        int y;
    };
    struct ponto p;
    printf("Digite a abscissa do ponto e a coordenada do ponto: ");
    scanf("%d %d",&p.x,&p.y);
    double d=sqrt(p.x*p.x+p.y*p.y);
    printf("A distancia do ponto digitado ate a origem e %lf",d);
   
