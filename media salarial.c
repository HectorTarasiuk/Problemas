/* Crie um vetor de registros de funcionários e informe os dados via teclado. Um funcionário possui
nome, cargo, salário-base, CPF e departamento. Em seguida, calcule e exiba o salário médio de
todos os funcionários. No cálculo de cada salário considere os seguintes adicionais, a partir do
salário-base, por cargo: Assistente (5%), Supervisor (10%), Gerente(15%), Outras categorias
(2%). Obs.: salário-base contempla somente o valor registrado em carteira/tabela de
remuneração. */
#include<stdio.h>
#include<string.h>
int main(){
    struct funcionario{
        char nome[50];
        char cargo[50];
        int salario;
        int cpf;
        char departamento[50];
    };
    double soma_de_salarios=0;
    int quantidade_de_funcionarios;
    printf("Digite a quantidade de funcionarios: ");
    scanf("%d",&quantidade_de_funcionarios);
    getchar();
    for(int i=0;i<quantidade_de_funcionarios;i++){
        struct funcionario p;
        printf("Digite o nome do funcionario %d: ",i+1);
        fgets(p.nome,50,stdin);
        printf("Digite o cargo do funcionario %d: ",i+1);
        fgets(p.cargo,50,stdin);
        printf("Digite o salario do funcionario %d: ",i+1);
        scanf("%d",&p.salario);
        printf("Digite o cpf do funcionario %d: ",i+1);
        scanf("%d",&p.cpf);
        getchar();
        printf("Digite o departamento do funcionario %d: ",i+1);
        fgets(p.departamento,50,stdin);
        if(strcmp(p.cargo,"Assistente")==0){
            soma_de_salarios+=1.05*p.salario;
        }
        else if(strcmp(p.cargo,"Supervisor")==0) soma_de_salarios+=1.1*p.salario;
        else if(strcmp(p.cargo,"Gerente")==0) soma_de_salarios+=1.15*p.salario;
        else soma_de_salarios+=1.02*p.salario;
    }
    double salario_medio=soma_de_salarios/quantidade_de_funcionarios;
    printf("O salario medio vale: %lf",salario_medio);
    return 0;
}
