#include <stdio.h>

int main (){

int inteligencia01 = 53;
int agilidade01 = 63;
int resistencia01 = 44;
int forca01 = 33;
int velocidade01 = 95;

int inteligencia02 = 54;
int agilidade02 = 63;
int resistencia02 = 14;
int forca02 = 39;
int velocidade02 = 93;
int seletorA;
int seletorB;
int seletorC;


printf("Quantos atributos você quer comparar?\n");
printf("1 - Um atributo\n");
printf("1 - Dois atributos\n");
printf("1 - Todos atributos\n");
scanf("%d", &seletorA);
switch (seletorA)
{
case 1:
    printf("Qual atributo você quer comparar?\n");
    printf("1 - inteligencia\n");
    printf("2 - agilidade\n");
    printf("3 - resistencia\n");
    printf("4 - força\n");
    printf("5 - velocidade\n");
         
        switch (seletorB)
        {
        case 1:
            if (inteligencia01 > inteligencia02)
            {
                printf("Jogador 1 venceu");
            } else if (inteligencia01 == inteligencia02)
            {
                ("Empate");
            } else {
                printf("Jogador 2 venceu");
            }
            break;
         case 2:
            if (forca01 > forca02)
            {
                printf("Jogador 1 venceu");
            } else if (inteligencia01 == inteligencia02)
            {
                printf("Empate");
            } else {
                printf("Jogador 2 venceu");
            };
            break;
            case 3:
            if (resistencia01 > resistencia02)
            {
                printf("Jogador 1 venceu");
            } else if (resistencia01 == resistencia02)
            {
                printf("Empate");
            } else {
                printf("Jogador 2 venceu");
            };
            break;
            case 4:
            if (agilidade01 > agilidade02)
            {
                printf("Jogador 1 venceu");
            } else if (agilidade01 == agilidade02)
            {
                printf("Empate");
            } else {
                printf("Jogador 2 venceu");
            };
            break;

            case 5:
            if (velocidade01 > velocidade02)
            {
                printf("Jogador 1 venceu");
            } else if (velocidade01 == velocidade02)
            {
                printf("Empate");
            } else {
                printf("Jogador 2 venceu");
            };
            break;
        
        default:
            break;
        }


case 2:
    

default:
    break;
}





    return 0;
}

