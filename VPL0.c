#include <stdio.h>
//MURIEL DE BONA PORTON GUAREZI (20150474)
//PRIMEIRA VPLs [Elabore um algoritmo que solicite valores para formar dois retângulos e ao final mostre qual deles possui maior área.
//A saída do código deve ser as seguintes mensagens exatamente com estas palavras: primeiro retangulo maior; segundo retangulo maior; retangulos com area igual]


int main()
{
    float b,l,pra, sega;
    printf("Digite as medidas para dois retangulos, esse algoritmo diferencia elas\n\n");
    printf("Digite as medidas de Largura e Altura para o primeiro retangulo: ");
    scanf("%f %f", &b,&l);
    pra=b*l;
    printf("area= %.2f \n\n", pra);

    printf("Digite as medidas de Largura e Altura para o segundo retangulo: ");
    scanf("%f %f", &b,&l);
    sega=b*l;
    printf("area= %.2f\n\n", sega);

        if (pra>sega){
        printf("primeiro retangulo maior");
return 0;}
        if (pra<sega){
        printf("segundo retangulo maior");
}
        else{
            printf("retangulos com area igual");
        }
return 0;
}
