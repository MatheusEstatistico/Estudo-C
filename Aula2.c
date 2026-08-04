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
    
    // ==========================================
    // 5. ESTRUTURA CONDICIONAL - if/else
    // ==========================================
    
    if (media >= 7.0) {
        printf("\nPARABÉNS! Você foi aprovado!\n");
    } else if (media >= 5.0) {
        printf("\nRecuperação! Estude mais!\n");
    } else {
        printf("\nReprovado! Não desista!\n");
    }
    
    // ==========================================
    // 6. LAÇO DE REPETIÇÃO - for
    // ==========================================
    
    printf("\n===== CONTAGEM REGRESSIVA =====\n");
    printf("Começando em 5...\n");
    
    for (int i = 5; i > 0; i--) {
        printf("%d... ", i);
    }
    printf("FOGO! 🔥\n\n");
    
    // ==========================================
    // 7. LAÇO DE REPETIÇÃO - while
    // ==========================================
    
    printf("===== TABUADA DO 5 =====\n");
    int contador = 1;
    
    while (contador <= 10) {
        printf("5 x %d = %d\n", contador, 5 * contador);
        contador++;
    }
    
    // ==========================================
    // 8. MENU INTERATIVO - do/while
    // ==========================================
    
    int opcao;
    
    do {
        printf("\n===== MENU =====\n");
        printf("1 - Mostrar mensagem\n");
        printf("2 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        if (opcao == 1) {
            printf("Olá, %s! Este é um programa em C!\n", nome);
        } else if (opcao != 2) {
            printf("Opção inválida! Tente novamente.\n");
        }
        
    } while (opcao != 2);
    
    printf("\nPrograma encerrado. Até logo!\n");
    
    // ==========================================
    // 9. PAUSA - system("pause")
    // ==========================================
    
    system("pause");  // Aguarda o usuário pressionar uma tecla
    
    return 0;  // Indica que o programa terminou com sucesso
}

// ============================================
// DEFINIÇÃO DAS FUNÇÕES
// ============================================

/*
 * Função: calcularMedia
 * 
 * Parâmetros: 
 *   - nota1: primeira nota (float)
 *   - nota2: segunda nota (float)
 * 
 * Retorno: 
 *   - Média aritmética das duas notas (float)
 */
float calcularMedia(float nota1, float nota2) {
    // A média é a soma dividida por 2
    float resultado = (nota1 + nota2) / 2.0;
    return resultado;
}

/*
 * Função: verificarAprovacao
 * 
 * Parâmetros:
 *   - media: média do aluno (float)
 * 
 * Retorno:
 *   - String indicando a situação
 */
char* verificarAprovacao(float media) {
    if (media >= 7.0) {
        return "APROVADO";
    } else if (media >= 5.0) {
        return "RECUPERAÇÃO";
    } else {
        return "REPROVADO";
    }
}
