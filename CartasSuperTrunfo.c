#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char codigodacarta;
    char nomedacidade;
    int população;
    float areakm;
    float pib;
    int numeropontosturisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Qual seu estado: \n");
    scanf("%s", &estado);

    printf("Qual seu código da carta: \n");
    scanf("%s", &codigodacarta);

    printf("Qual nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Qual o tamanho da população: \n");
    scanf("%d", &população);

    printf("Quantos KM por area quadrada: \n");
    scanf("%f", &areakm);

    printf("Qual o PIB: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos: \n");
    scanf("%d", &numeropontosturisticos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Nome da cidade: %s\n", nomedacidade);

    return 0;
}
