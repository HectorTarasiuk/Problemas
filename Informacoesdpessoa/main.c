/*Implemente um programa que receba o nome completo, a idade e o endereço (logradouro,
número, bairro, complemento, CEP, cidade e estado) de uma pessoa e armazene esses dados
em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida. Idade inferior a zero
ou maior que 120 não devem ser aceitas.*/
#include<stdio.h>
int main(){
    struct pessoa{
        char nome[50];
        int idade;
        char logradouro[50];
        int numero;
        char bairro[50];
        char complemento[50];
        int cep;
        char cidade[50];
        char estado[50];
    };
    struct pessoa p;
    printf("Digite o nome: ");
    fgets(p.nome,50,stdin);
    do{
    printf("Digite a idade: ");
    scanf("%d",&p.idade);
    if(p.idade<0 || p.idade>120){
        printf("Idade inválida, digite de novo\n");
    }
    }while (p.idade<0 || p.idade>120);
    getchar();
    printf("Digite o logradouro: ");
    fgets(p.logradouro,50,stdin);
    printf("Digite o nunero: ");
    scanf("%d",&p.numero);
    getchar();
    printf("Digite o bairro: ");
    fgets(p.bairro,50,stdin);
    printf("Digite o complemento: ");
    fgets(p.complemento,50,stdin);
    printf("Digite o cep: ");
    scanf("%d",&p.cep);
    getchar();
    printf("Digite a cidade: ");
    fgets(p.cidade,50,stdin);
    printf("Digite o estado: ");
    fgets(p.estado,50,stdin);

    printf("Nome: %s\nIdade: %d\nLogradouro: %s\nNumero: %d\nBairro: %s\nComplemento: %s\nCEP: %d\nCidade: %s\nEstado: %s\n",p.nome,p.idade,p.logradouro,p.numero,p.bairro,p.complemento,p.cep,p.cidade,p.estado);
}
