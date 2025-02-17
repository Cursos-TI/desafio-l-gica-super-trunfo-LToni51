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
int poderMaximo02;
int seletorA;
int seletorB;
int seletorC;
int seletorD;



printf("Quantos atributos você quer comparar?\n");
printf("1 - Um atributo\n");
printf("2 - Dois atributos\n");
printf("3 - Todos atributos\n");
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
    scanf("%d", &seletorB);
         
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

int attA;
int attB;
case 2:
    printf("escolha o primeiro atributo");
    printf("1 - inteligencia\n");
    printf("2 - agilidade\n");
    printf("3 - resistencia\n");
    printf("4 - força\n");
    printf("5 - velocidade\n");
    scanf("%d", &seletorC);
        switch (seletorC)
        {
        case 1:
            attB = (inteligencia01 > inteligencia02);
            printf("1 - inteligencia\n");
            break;

        case 2:
            attB = (agilidade01 > agilidade02);
            printf("2 - agilidade\n");
            break;
        

        case 3:
            attB = (resistencia01 > resistencia02);
            printf("3 - resistencia\n");
            break;

        case 4:
            attB = (forca01 > forca02);
            printf("4 - força\n");
            break;

        case 5:
            attB = (velocidade01 > velocidade02);
            printf("5 - velocidade\n");
            break;
        default:
            printf("invalido");
            break;
        }
    
        printf("escolha o segundo atributo");
        printf("1 - inteligencia\n");
        printf("2 - agilidade\n");
        printf("3 - resistencia\n");
        printf("4 - força\n");
        printf("5 - velocidade\n");
        scanf("%d", &seletorD);
            switch (seletorC)
            {
            case 1:
                attA = (inteligencia01 > inteligencia02);
                printf("1 - inteligencia\n");
                break;
    
            case 2:
                attA = (agilidade01 > agilidade02);
                printf("2 - agilidade\n");
                break;
            
    
            case 3:
                attA = (resistencia01 > resistencia02);
                printf("3 - resistencia\n");
                break;
    
            case 4:
                attA = (forca01 > forca02);
                printf("4 - força\n");
                break;
    
            case 5:
                attA = (velocidade01 > velocidade02);
                printf("5 - velocidade\n");
                break;
            default:
                printf("invalido");
                break;
            }

            if (attA && attB)
            {
                printf("vitoria do jogador 1");
            } else if (attA || attB)
            {
                printf("empte");
            }else{
                printf("vitoria do jogador 2");
                
            }
            
            

        

default:
    break;
}





    return 0;
}

