#include <stdio.h>  // Biblioteca padrão para entrada/saída
#include <stdlib.h> // Biblioteca para funções utilitárias

// DECLARAÇÃO DE FUNÇÕES (PROTÓTIPOS)
// Função que calcula a média de dois números
float calcularMedia(float nota1, float nota2);

// Função que verifica se o aluno foi aprovado
char* verificarAprovacao(float media);

// FUNÇÃO PRINCIPAL (main)

int main() {
    // 1. VARIÁVEIS - Espaços na memória para armazenar dados
    // Tipos básicos em C:
    int idade;              // Números inteiros (ex: 18, -5, 42)
    float nota1, nota2;     // Números decimais (ex: 7.5, 8.3)
    char nome[50];          // Strings (texto) - array de caracteres
    
    // 2. ENTRADA DE DADOS - scanf()
    printf("===== SISTEMA DE NOTAS =====\n\n");
    
    // Limpar o buffer do teclado
    fflush(stdin);
    
    // Entrada de string (texto)
    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);  // Lê texto com espaços
    
    // Entrada de números inteiros
    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);  // %d = inteiro, & = endereço de memória
    
    // Entrada de números decimais
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);  // %f = float
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    // 3. PROCESSAMENTO - Chamando funções
    // Calculando a média usando a função
    float media = calcularMedia(nota1, nota2);
    
    // Verificando aprovação
    char* situacao = verificarAprovacao(media);
    
    // 4. SAÍDA DE DADOS - printf()
    printf("\n===== RESULTADO =====\n");
    printf("Nome: %s", nome);        // %s = string
    printf("Idade: %d anos\n", idade);
    printf("Nota 1: %.2f\n", nota1); // %.2f = 2 casas decimais
    printf("Nota 2: %.2f\n", nota2);
    printf("Média: %.2f\n", media);
    printf("Situação: %s\n", situacao);
