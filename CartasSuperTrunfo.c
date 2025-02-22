#include <stdio.h>
int main(){
    //nesse sistema, vc vai cadastrar duas cartas com com alguns dados referente a carta.   
    char estado[50], nome_cidade[50];
    int codigo, pontos_turisticos;
    float populacao, area, pib;
    // print de boas vindas
    printf("******Bem vindo ao desafio superTrunfo Novato!******\n");
    //aqui inicia nossas funções.
    printf("Digite o nome do estado: ");
    scanf("%s", &estado);
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade);
    printf("Digite a populacao da cidade: ");
    scanf("%f", &populacao);
    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area);
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos);    
    // esse é o resultado para imprimir na tela
    printf("- Estado digitado: %s\n- Codigo da cidade: %d\n- Cidade Digitada: %s\n", estado, codigo, nome_cidade);    
    printf("- Populacao digitada: %.2f\n- Area: %.2f\n- PIB: %.2f\n- Pontos Turisticos: %d\n", populacao, area, pib, pontos_turisticos);

    printf("Obrigado pela visualizacao ");

    return 0;
}
