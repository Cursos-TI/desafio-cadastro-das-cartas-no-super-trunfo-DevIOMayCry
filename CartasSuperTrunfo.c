#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Nome das variáveis: cod1, cod2, nome1, nome2, pop1, pop2, area1, area2, pib1, pib2, npt1, npt2

    char cod1[4], cod2[4], nome1[50], nome2[50];
    // char %s
    float area1, area2, pib1, pib2;
    // float %f
    int pop1, pop2, npt1, npt2;
    // int %d
   
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Bem-vindo ao Super Trunfo \n");
    printf("Vamos começar, para isso, basta seguir as instruções para cadastrarmos as cartas \n");
    printf("__________________________________________ \n");


    // A seguir virão todos os inputs da Carta 1;

    printf("Carta - Cidade 1 \n");

    printf("Crie um código para a Cidade 1: (ex: A01)\n");
    scanf("%s", cod1);

    printf("Digite o nome dessa Cidade: (sem espaços, ex SantaBarbaraDoOeste)\n");
    scanf("%s", nome1);
    
    printf("Digite a população de %s:\n", nome1);
    scanf("%d", &pop1);

    printf("Digite a área de %s: (em km², formato americano)\n", nome1);
    scanf("%f", &area1);

    printf("Digite o PIB de %s: (em milhões de R$, formato americano)\n", nome1);
    scanf("%f", &pib1);    

    printf("Digite o número de Pontos Turísticos de %s:\n", nome1);
    scanf("%d", &npt1); 


    // A seguir virão todos os inputs da Carta 2;
    printf("__________________________________________ \n");
    printf("Carta - Cidade 2 \n");

    printf("Crie um código para a Cidade 2: (ex: A01)\n");
    scanf("%s", cod2);

    printf("Digite o nome dessa Cidade: (sem espaços, ex SantaBarbaraDoOeste)\n");
    scanf("%s", nome2);
    
    printf("Digite a população de %s:\n", nome2);
    scanf("%d", &pop2);

    printf("Digite a área de %s: (em km², formato americano)\n", nome2);
    scanf("%f", &area1);

    printf("Digite o PIB de %s: (em milhões de R$, formato americano)\n", nome2);
    scanf("%f", &pib2);    

    printf("Digite o número de Pontos Turísticos de %s:\n", nome2);
    scanf("%d", &npt2); 


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Nome das variáveis: cod1, cod2, nome1, nome2, pop1, pop2, area1, area2, pib1, pib2, npt1, npt2

    // Exibir tudo
    printf("__________________________________________ \n");
    printf("\nObrigado pelas informações!\n");
    printf("__________________________________________ \n");
    printf("CARTA 1 - %s - %s \n", cod1, nome1);
    printf("População: %d \n", pop1);
    printf("Área em km²: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Número de pontos turísticos: %d \n", npt1);

    printf("__________________________________________ \n");
    printf("CARTA 2 - %s - %s \n", cod2, nome2);
    printf("População: %d \n", pop2);
    printf("Área em km²: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de pontos turísticos: %d \n", npt2);

    return 0;
}
