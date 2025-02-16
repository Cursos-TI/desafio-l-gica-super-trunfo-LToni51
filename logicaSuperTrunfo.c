#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
   char estado = 'A';
    char codigoDaCidadeA01[4] = "A01";
    char nomeDaCidadeA01[50];
    int populacaoA01;
    float areaA01;
    float pibA01;
    int numDePontosTuristicosA01;
    float densidadePopulacionalA01;
    float pibPerCapitaA01;
    int scoreA01;
    float poderFinalA01;
    printf("Bem vindo ao super trunfo! Por favor cadastre a cidade que deseja! \n");
    printf("Qual o nome da cidade? \n");
    scanf("%s", nomeDaCidadeA01);
    printf("Qual a população da cidade %s?\n", nomeDaCidadeA01);
    scanf("%d", &populacaoA01);
    printf("Qual a area da cidade, %s?\n", nomeDaCidadeA01);
    scanf("%f", &areaA01);
    printf("Qual o PIB da cidade %s? \n" , nomeDaCidadeA01);
    scanf("%f", &pibA01);
    printf("Quantos pontos turisticos tem a cidade? \n");
    scanf("%d", &numDePontosTuristicosA01);
    printf("Parabens por registrar sua cidade aqui está suas informações \n");
    printf("ESTADO: %c \n", estado);
    printf("CÓDIGO DA CARTA: %s \n", codigoDaCidadeA01);
    printf("CIDADE: %s \n", nomeDaCidadeA01);
    printf("POPULAÇÃO: %d habitantes\n", populacaoA01);
    printf("ÁREA: %f quilometros \n", areaA01);
    printf("PIB: %f milhões de reais \n", pibA01);
    printf("PONTOS TURÍSTICOS: %d pontos\n", numDePontosTuristicosA01);
    densidadePopulacionalA01 = (float) populacaoA01 / areaA01;
    pibPerCapitaA01 = (float) pibA01 / populacaoA01;
    poderFinalA01 = (float)areaA01+pibA01+numDePontosTuristicosA01+densidadePopulacionalA01+pibPerCapitaA01;
    printf("Densidade populacional: %.2f \n ", densidadePopulacionalA01);
    printf("PIB per capita: %f \n ", pibPerCapitaA01);
    printf ("poder final: %f\n", poderFinalA01);
    char codigoDaCidadeA02[4] = "A02";
    char nomeDaCidadeA02[50];
    int populacaoA02;
    float areaA02;
    float pibA02;
    int numDePontosTuristicosA02;
    float densidadePopulacionalA02;
    float pibPerCapitaA02;
    int scoreA02;
    float poderFinalA02;
    printf("Adicione a segunda cidade aqui \n");
    scanf("%s", nomeDaCidadeA02);
    printf("Qual a população da cidade %s?\n", nomeDaCidadeA02);
    scanf("%d", &populacaoA02);
     printf("Qual a area da cidade, %s?\n", nomeDaCidadeA02);
    scanf("%f", &areaA02);
    printf("Qual o PIB da cidade %s? \n" , nomeDaCidadeA02);
    scanf("%f", &pibA02);
    printf("Quantos pontos turisticos tem a cidade? \n");
    scanf("%d", &numDePontosTuristicosA02);
    printf("Parabens por registrar sua cidade aqui está suas informações \n");
    printf("ESTADO: %c \n", estado);
    printf("CÓDIGO DA CARTA: %s \n", codigoDaCidadeA02);
    printf("CIDADE: %s \n", nomeDaCidadeA02);
    printf("POPULAÇÃO: %d habitantes\n", populacaoA02);
    printf("ÁREA: %f quilometros \n", areaA02);
    printf("PIB: %f milhões de reais \n", pibA02);
    printf("PONTOS TURÍSTICOS: %d pontos\n", numDePontosTuristicosA02);
    densidadePopulacionalA02 = (float) populacaoA02 / areaA02;
    pibPerCapitaA02 = (float) pibA02 / populacaoA02;
    poderFinalA02 = populacaoA02+areaA02+pibA02+numDePontosTuristicosA02+densidadePopulacionalA02+pibPerCapitaA02;
    printf("Densidade populacional: %.2f \n ", densidadePopulacionalA02);
    printf("PIB per capita: %f \n ", pibPerCapitaA02);
    printf("Poder final: %f \n", poderFinalA02);
    
    int escolhaDoAtributo;
    printf("Qual atributo você que comparar? \n");
    printf("1 - população \n");
    printf("2 - area \n");
    printf("3 - PIB \n");
    printf("4 - pontos turisticos \n");
    printf("5 - densidade populacional \n");
    printf("6 - PIB per capita \n");
    printf("7 - Todos \n");

    scanf("%d", &escolhaDoAtributo);
    switch (escolhaDoAtributo)
    {
    case 1:
        if (populacaoA01 > populacaoA02)
        {
            printf("Vitõria de %s \n", nomeDaCidadeA01);
        } else {
            printf("Vitõria de %s \n", nomeDaCidadeA02);

        }
        break;
    case 2:
        if (areaA01 > areaA02)
        {
            printf("Vitõria de %s \n", nomeDaCidadeA01);
        } else {
            printf("Vitõria de %s \n", nomeDaCidadeA02);

        }
        break;

    case 3:
        if (pibA01 > pibA02)
        {
            printf("Vitõria de %s \n", nomeDaCidadeA01);
        } else {
            printf("Vitõria de %s \n", nomeDaCidadeA02);

        }
        break;

    case 4:
        if (numDePontosTuristicosA01 > numDePontosTuristicosA02)
        {
            printf("Vitõria de %s \n", nomeDaCidadeA01);
        } else {
            printf("Vitõria de %s \n", nomeDaCidadeA02);

        }
        break;

    case 5:
        if (densidadePopulacionalA01 > densidadePopulacionalA02)
        {
            printf("Vitõria de %s \n", nomeDaCidadeA01);
        } else {
            printf("Vitõria de %s \n", nomeDaCidadeA02);

        }
        break;

    case 6:
        if (pibPerCapitaA01 > pibPerCapitaA02)
        {
            printf("Vitõria de %s \n", nomeDaCidadeA01);
        } else {
            printf("Vitõria de %s \n", nomeDaCidadeA01);

        }
        break;
    
    case 7:
       if (populacaoA01 > populacaoA02)
    {
        printf("%s, venceu \n", nomeDaCidadeA01);
        scoreA01 += 1;
    } else {
        printf("%s, venceu \n", nomeDaCidadeA02);
        scoreA02 += 1;
    }

    if (pibA01 > pibA02)
    {
        printf("%s, venceu \n", nomeDaCidadeA01);
        scoreA01 += 1;
    } else {
        printf("%s, venceu \n", nomeDaCidadeA02);
        scoreA02 += 1;
    }
    
    if (areaA01 > areaA02)
    {
        printf("%s, venceu \n", nomeDaCidadeA01);
        scoreA01 += 1;
    } else {
        printf("%s, venceu \n", nomeDaCidadeA02);
        scoreA02 += 1;
    }

    if (densidadePopulacionalA01 < densidadePopulacionalA02)
    {
         printf("%s, venceu \n", nomeDaCidadeA01);
        scoreA01 += 1;
    } else {
        printf("%s, venceu \n", nomeDaCidadeA02);
        scoreA02 += 1;
    }

    if (pibPerCapitaA01 > pibPerCapitaA02)
    {
          printf("%s, venceu \n", nomeDaCidadeA01);
        scoreA01 += 1;
    } else {
        printf("%s, venceu \n", nomeDaCidadeA02);
        scoreA02 += 1;
    }

    if (scoreA01 > scoreA02)
    {
        printf("A cidade campeã da batalha foi %s \n", nomeDaCidadeA01);
    } else {
        printf("A cidade campeã da batalha foi %s \n", nomeDaCidadeA02);
    }
    
    
    if (poderFinalA01 > poderFinalA02)
    {
        printf("Cidade %s é a campeã \n", nomeDaCidadeA01);
    } else {
         printf("Cidade %s é a campeã \n", nomeDaCidadeA02);
    }
    
        break;
    
    default:
        break;
    }

return 0;
}