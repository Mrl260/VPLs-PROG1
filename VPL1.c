#include <stdio.h>
#include <math.h>
//Escreva um programa em C que calcule N! (fatorial de N), sendo que o valor inteiro de N é fornecido pelo usuário.

int main()
{
    int n;
    float i, f=1;
    printf("Digite um valor para fatoracao: ");
    scanf("%i", &n);

    if (n==0){
        printf("Fatoracao= 1");
return 0;}

    for(i=1; i<=n; i++){
        f=f*(i);
}
printf("Fatoracao=%.0f", f);
return 0;
}
