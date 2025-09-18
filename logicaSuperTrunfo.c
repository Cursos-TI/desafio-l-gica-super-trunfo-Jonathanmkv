#include <stdio.h> 

int main() {
    
    char Estado[30], codigo_da_carta[50], nome_da_cidade[40];
    int populacao, numero_de_pontos_turisticos; 
    float area, pib;

        printf("Digite o nome do seu estado: \n");
        scanf(" %[^\n]", Estado);

        printf("Digite o código da carta: \n");
        scanf(" %[^\n]", codigo_da_carta);

        printf("Digite o nome da sua cidade: \n");
        scanf(" %[^\n]", nome_da_cidade);

        printf("Digite o número de habitantes da sua cidade: (SOMENTE NÚMEROS) \n");
        scanf("%d", &populacao);

        printf("Digite o número de pontos turisticos do seu estado: (SOMENTE NÚMEROS) \n");
        scanf("%d", &numero_de_pontos_turisticos);

        printf("Digite a Área em km²: (SOMENTE NÚMEROS) \n");
        scanf("%f", &area);

        printf("Digite o PIB do seu estado em reais: (SOMENTE NÚMEROS) \n");
        scanf("%f", &pib);

    float densidade = (float) populacao / area; // calcula a densidade populacional da primera carta
    float pib_per_capita = (float) pib / populacao; // calcula o PIB per capita da primeira carta
    long double superpoder = (double) populacao + numero_de_pontos_turisticos + area + pib + pib_per_capita + (1.0 / densidade);
    
        
    char Estado2[30], codigo_da_carta2[50], nome_da_cidade2[40];
    int populacao2, numero_de_pontos_turisticos2; 
    float area2, pib2;

        printf("Digite o nome do segundo estado: \n");
        scanf(" %[^\n]", Estado2);

        printf("Digite o código da segunda carta: \n");
        scanf(" %[^\n]", codigo_da_carta2);

        printf("Digite o nome da segunda cidade: \n");
        scanf(" %[^\n]", nome_da_cidade2);

        printf("Digite o número de habitantes da segunda cidade: (SOMENTE NÚMEROS) \n");
        scanf("%d", &populacao2);

        printf("Digite o número de pontos turisticos do segundo estado: (SOMENTE NÚMEROS) \n");
        scanf("%d", &numero_de_pontos_turisticos2);

        printf("Digite a Área em km²: (SOMENTE NÚMEROS) \n");
        scanf("%f", &area2);

        printf("Digite o PIB do seu estado em reais: (SOMENTE NÚMEROS) \n");
        scanf("%f", &pib2);

        float densidade2 = (float) populacao2 / area2; // calcula o a densidade populacional da segunda carta
        float pib_per_capita2 = (float) pib2 / populacao2; // calcula o PIB per capita da segunda carta
        long double superpoder2 = (double) populacao2 + numero_de_pontos_turisticos2 + area2 + pib2 + pib_per_capita2 + (1.0 / densidade2);

        printf("\n --- PRIMEIRA CARTA ---\n");

        printf("O seu estado é: %s \n", Estado); // imprime o nome do estado
        printf("O código da sua carta é: %s \n", codigo_da_carta); // imprime o código da carta
        printf("O nome da sua cidade é: %s \n", nome_da_cidade);   // imprime o nome da cidade
        printf("População: %d \n", populacao); // imprime o tomanho da populacao
        printf("Área: %2.f \n", area);
        printf("PIB: %2.f \n", pib); 
        printf("O número de pontos turísticos são: %d \n", numero_de_pontos_turisticos);
        printf("A densidade populacional é %f hab/km² \n", densidade);
        printf("PIB per capita: R$ %2.f \n", pib_per_capita);
        printf("O super poder desta carta é: %lf pontos \n", superpoder);

        printf("\n --- SEGUNDA CARTA ---\n");

        printf("O seu estado é: %s \n", Estado2); // imprime o nome do segundo estado
        printf("O código da sua carta é: %s \n", codigo_da_carta2); // imprime o código da segunda carta
        printf("O nome da sua cidade é: %s \n", nome_da_cidade2);   // imprime o nome da segunda cidade
        printf("População: %d \n", populacao2); // imprime o tomanho da populacao
        printf("Área: %2.f \n", area2);
        printf("PIB: %2.f \n", pib2); 
        printf("O número de pontos turísticos são: %d \n", numero_de_pontos_turisticos2);
        printf("A densidade populacional é %f hab/km² \n", densidade2);
        printf("PIB per capita: R$ %2.f \n", pib_per_capita2);
        printf("O super poder desta carta é: %lf pontos \n", superpoder2);

        int ponto1 = 0, ponto2 = 0;




        printf("\n --- RESULTADO --- \n"); //COMPARAÇÃO ENTRE AS CARTAS
        printf("População: A carta vencedora é: %s \n", (populacao > populacao2) ? (ponto1++,nome_da_cidade) : (populacao < populacao2) ? (ponto2++, nome_da_cidade2) : "EMPATE");
        printf("Área: A Carta vencedora é: %s \n", (area > area2) ? (ponto1++, nome_da_cidade) : (area < area2) ? (ponto2++ nome_da_cidade2) : "EMPATE");
        printf("PIB: A Carta vencedora é: %s \n", (pib > pib2) ? (ponto1++, nome_da_cidade) : (pib < pib2) ? (ponto2++, nome_da_cidade2) : "EMPATE");
        printf("Pontos turísticos: A carta vencedora é: %s \n", (numero_de_pontos_turisticos > numero_de_pontos_turisticos2) ? (ponto1++, nome_da_cidade) : (numero_de_pontos_turisticos < numero_de_pontos_turisticos2) ? (ponto2++, nome_da_cidade2) : "EMPATE");
        printf("Densidade populacional: A carta vencedora é: %s \n", (densidade < densidade2) ? (ponto1++, nome_da_cidade) : (densidade > densidade2) ? (ponto2++,nome_da_cidade2) : "EMPATE");
        printf("PIB per Capita: A carta vencedora é: %s \n", (pib_per_capita > pib_per_capita2) ? (ponto1++, nome_da_cidade) : (pib_per_capita < pib_per_capita2) ? (ponto2++, nome_da_cidade2) : "EMPATE");
        printf("Super Poder: A carta vencedora é: %s \n", (superpoder > superpoder2) ? (ponto1++, nome_da_cidade) : (superpoder < superpoder2) ? (ponto2++, nome_da_cidade2) : "EMPATE");
        if (ponto1 > ponto2) {
            printf("A carta vencedora é: %s (%s) com %d pontos! \n"), & nome_da_cidade, Estado, ponto1);
        }
        else (ponto2 > ponto1) {
            printf("A carta vencedora é: %s (%s) com %d pontos! \n"), & nome_da_cidade2, Estado2, ponto2);
        }
    return 0;
}

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
