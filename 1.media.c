#include<stdio.h>
#include<stdlib.h>

main()
{
    int i=0, num, soma=0;
    float media=0;

    while (i<5)
    {
        i++;

        printf("Digite um um numero: ");
        scanf("%d", & num);

        soma += num;
    }

    media = soma/5;

    printf("Media = %0.2f", media);
}