#include <stdio.h>
int main()
{
    int i, n;
    printf("produto de dois vetores\n");
    printf("numero de valores para o vetor: ");
    scanf("%i", &n);
    int v1[n], v2[n], vetm[n];
    
    printf("digite os valores pra o primeiro vetor:\n");
    for(i=0; i<n; i++){
        scanf("%i", &v1[i]);
    }
    printf("digite os valores pra o segundo vetor:\n");
    for(i=0; i<n; i++){
        scanf("%i", &v2[i]);
    }
    for(i=0; i<n; i++){
        vetm[i]=v1[i]*v2[i];
    }
    printf("vetor resultante: ");
    for(i=0; i<n; i++){
        printf("%i ", vetm[i]);
    }
    return 0;
}