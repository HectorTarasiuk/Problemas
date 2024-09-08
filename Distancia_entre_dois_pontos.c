/*Crie uma estrutura do tipo Ponto para representar as coordenadas de um ponto no plano
cartesiano (posições A e B). Em seguida, declare e leia do teclado dois pontos e exiba a
distância entre eles. Fórmula do cálculo da distância 𝑑 =𝐴𝐵 = (𝑥𝐵– 𝑥𝐴)² + (𝑦𝐵– 𝑦𝐴)² */
#include<stdio.h>
#include<math.h>

int main(){
struct ponto{
int x;
int y;
};

struct ponto a;
struct ponto b;
printf("Digite a abscissa e a ordenada do ponto a com espaço, dê enter e em seguida digite essas informacoes do ponto b\n");
scanf("%d %d",&a.x,&a.y); scanf("%d %d",&b.x,&b.y);
double d=sqrt(pow((a.x-b.x),2)+(a.y-b.y)*(a.y-b.y));
printf("Distancia= %lf",d);

return 0;
}
