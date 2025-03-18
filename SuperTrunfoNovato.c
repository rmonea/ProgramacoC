#include <stdio.h>
#include <string.h>

int main(){
    
    //Variaveis Carta #1
    char estado;
    char carta[20];
    char cidade[40];
    int populacao;
    int turistico;
    float pib;
    float area;
    int unidadepib;

    //Variaveis Carta #2
    char estado2;
    char carta2[20];
    char cidade2[40];
    int populacao2;
    int turistico2;
    float pib2;
    float area2;
    int unidadepib2;

    printf("Carta 1\n");

    //Entrada do Estado
    printf("Escolha a letra do Estado de A a H: ");
    scanf("%c", &estado);

    //Limpa o buffer de dados
    getchar();

    //Entrada do Código da carta
    printf("Coloque a letra anterior, em seguida um numero de 01 a 04: ");
    fgets(carta, sizeof(carta), stdin);
    carta[strcspn(carta, "\n")] = '\0';

    //Entrada da Cidade
    printf("Digite o nome da Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    //Entrada população
    printf("Digite a população dessa Cidade: ");
    scanf("%d", &populacao);

    //Limpa o buffer de dados, precisei usar o while nesse para funcionar
    while (getchar() != '\n');

    //Entrada de Territorio em km²
    printf("Digite o território em km²: ");
    scanf("%f", &area);

    //Limpa o buffer de dados
    getchar();

    //Entrada do PIB da cidade
    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib);

    //Limpa o buffer de dados
    getchar();

    printf("Escolha a unidade do PIB:\n");
    printf("1 - Milhões\n");
    printf("2 - Bilhões\n");
    printf("Digite 1 ou 2: ");
    scanf("%d", &unidadepib);

    //Entrada pontos turisticos
    printf("Digite a quantidade de pontos turisticos da sua cidade: ");
    scanf("%d", &turistico);

    //Limpa o buffer de dados
    getchar();

    // Inicio da segunda Carta
    printf("\nCarta 2\n");

    //Entrada do Estado
    printf("Escolha a letra do Estado de A a H: ");
    scanf("%c", &estado2);

    //Limpa o buffer de dados
    getchar();

    //Entrada do Código da carta
    printf("Coloque a letra anterior, em seguida um numero de 01 a 04: ");
    fgets(carta2, sizeof(carta2), stdin);
    carta2[strcspn(carta2, "\n")] = '\0';

    //Entrada da Cidade
    printf("Digite o nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    //Entrada população
    printf("Digite a população dessa Cidade: ");
    scanf("%d", &populacao2);

    //Limpa o buffer de dados
    while (getchar() != '\n');

    //Entrada de Territorio em km²
    printf("Digite o território em km²: "); 
    scanf("%f", &area2);

    //Limpa o buffer de dados
    getchar();

    //Entrada do PIB da cidade
    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib2);

    //Limpa o buffer de dados
    getchar();

    printf("Escolha a unidade do PIB:\n");
    printf("1 - Milhões\n");
    printf("2 - Bilhões\n");
    printf("Digite 1 ou 2: ");
    scanf("%d", &unidadepib2);

    //Entrada pontos turisticos
    printf("Digite a quantidade de pontos turisticos da sua cidade: ");
    scanf("%d", &turistico2);

    //Limpa o buffer de dados
    getchar();

    //Exibição das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao); 
    printf("Território: %.2f km²\n", area);  
    printf("PIB: %.2f %s\n", pib, (unidadepib == 1) ? "bilhões" : "milhões");
    printf("Números de pontos Turísticos: %d\n", turistico); 

    //Exibição das Cartas
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2); 
    printf("Território: %.2f km²\n", area2);  
    printf("PIB: %.2f %s\n", pib2, (unidadepib2 == 1) ? "bilhões" : "milhões");
    printf("Números de pontos Turísticos: %d\n", turistico2);

    return 0;

}
