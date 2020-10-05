#include<stdio.h>

int main(){
    int maior, pm=0, menor, pn=0, i, n;
    printf("digite o numero de valores no vetor: ");
    scanf("%i", &n);
    int v1[n];
    printf("digite os valores do vetor:\n");

    for(i=0; i<n; i++){
        scanf("%i", &v1[i]);
}
    maior=v1[0];
    menor=v1[0];

    for(i=0; i<n; i++){
        if(v1[i]>maior){
        maior=v1[i];
        pm=i;
}
        if(v1[i]<menor){
        menor=v1[i];
        pn=i;
}
}
    printf("\n\n");
    printf("valor maior: %i, no indice: %i\n", maior, pm);
    printf("valor menor: %i, no indice: %i", menor, pn);
    return 0;
}


