#include<stdio.h>
#include<stdlib.h>

main()
{
    int i, num, dentro=0, fora=0;

    for (i=0; i<=9; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", & num);

        if (num >= 10 && num <= 20)
        {
            dentro += 1;
        }
        else
        {
            fora += 1;
        }
    }

    printf("%d estao dentro do intervalo \n%d estao fora do intervalo", dentro, fora);

}