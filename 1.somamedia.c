#include<stdio.h>
#include<stdlib.h>

main()
{
    int i, num, soma=0;
    float media=0;

    for (i=0; i<=9; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", & num);

        soma += num;
    }

    media = soma/10;

    printf("A media dos numeros digitados e %0.2f", media);
}