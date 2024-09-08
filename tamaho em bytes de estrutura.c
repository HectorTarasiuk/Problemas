/* Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o
número de matrícula do aluno, seu nome e as notas de três provas. Escreva um programa que
mostre o tamanho em byte dessa estrutura. */
#include<stdio.h>
int main(){
    struct alune{
        int matricula;
        char nome[50];
        int prova1;
        int prova2;
        int prova3;
    };
    struct alune Joisse;
    printf("Tamanho em bytes da estrutura alune: %zu",sizeof(struct alune));
    return 0;
}
