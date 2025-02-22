#include <stdio.h>
#include <string.h>
#define MAX_NOME 50
#define MAX_CODIGO 5
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

struct CartasSuperTrunfo {
    char codigo[MAX_CODIGO] // Código da carta (ex: A02, B02)
    char nome[MAX_NOME]; // Nome do país
    unsigned long int população;   // População
    float area;   // Área em km²
    float pib;   // PIB em trilhões de dólares
    int pontos_turisticos; // Número de pontos turísticos
}; 

typedef struct CartasSuperTrunfo Carta;
// Função para capturar os dados de uma carta

void cadastrarCarta(Carta* carta) {
    printf("\nDigite o codigo da carta  (EX: A02 OU B03): ");
    scanf("%s", carta->codigo);
    printf("Digite o nome do país: ");
    scanf(" %[^\n]", carta->nome); // Permite ler com espaços
    printf("Digite a população do país: ");
    scanf("%lu", &carta->populacao);  // Usando unsigned long int para a população
    printf("Digite a área do país (em km²): ");
    scanf("%f", &carta->area);
    printf("Digite o PIB do país (em trilhões de dólares): ");
    scanf("%f", &carta->pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

// Função para exibir os dados de uma carta
void exibirCarta(const Carta* carta) {
    printf("\n========== %s ==========\n", carta->codigo);
    printf("País: %s\n", carta->nome);
    printf("População: %lu habitantes\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: %.2f trilhões de dólares\n", carta->pib);
    printf("Número de Pontos Turísticos: %d\n", carta->pontos_turisticos);
}
int main() {
    Carta carta1, carta2;

    // Cadastro das cartas
    printf("=== Cadastro da Primeira Carta ===");
    cadastrarCarta(&carta1);  // Passando o endereço da carta1

    printf("\n=== Cadastro da Segunda Carta ===");
    cadastrarCarta(&carta2);  // Passando o endereço da carta2

    // Exibição dos dados
    printf("\n=== Exibindo Cartas ===");
    exibirCarta(&carta1);  // Exibe os dados da primeira carta
    exibirCarta(&carta2);  // Exibe os dados da segunda carta

    return 0;
}