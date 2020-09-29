#include<stdio.h>
#include<math.h>
//Sendo H = 1 + 1/2 +1/3 +1/4 + ... + 1/N, escreva um programa em C para gerar o número H.

int main()
{
    int n, i;
    float h=0;
    printf("digite valor de n: ");
    scanf("%i", &n);

    if (n==0){
        printf("digite um valor maior que zero");
return 0;}
    for(i=1; i<=n; i++){
        h=h+pow(i,-1);
}
printf("%.3f\n", h);
return 0;
}
