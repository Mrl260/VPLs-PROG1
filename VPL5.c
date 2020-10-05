#include <stdio.h>

int main() {
    int vet[] = {1, 2, 3, 4, 5, 6, 0, 0, 8, 4, 3}, i, num;
    float media;
    printf("numero de valores no vetor: ");
    scanf("%i", &num);

    media=vet[0];
    for(i=0; i<(num-1); i++){
        media=media+vet[i+1];
    }
    media=media/num;
    printf("media dos valores iniciais determinados: %.2f", media);
    return 0;
}

