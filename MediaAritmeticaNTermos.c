#include <stdio.h>

int main(){

int termos, i=0;
float numero, media, soma=0;


printf("Digite a quantidade de termos para essa soma:");
scanf("%d", &termos);

while(i < termos ){

    printf("\nDigite um numero:\n");
    scanf("\n%f\n", &numero);
    soma += numero;

    i++;
}

    media = soma / termos;

    printf("Soma dos termos: %.2f\n ", soma);
    printf("Media = %.2f / %d = %.2f\n", soma, termos, media);

}
