#include<stdio.h>
#include<stdlib.h>

main()
{
    int i, num, maior=0, menor=9999;

    for (i=0;i<=2;i++)
    {
        printf("Digite um numero: ", num);
        scanf("%d", & num);

        if (num > maior)
        {
            maior = num;
        }
        else if (num < menor)
            {
                menor = num;
            }
        
    }
    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);
}