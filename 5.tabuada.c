#include<stdio.h>
#include<stdlib.h>

main()
{
    int i, num, conta=0;
    printf("Digite um numero para multiplicar: ");
    scanf("%d", & num);

    for (i=0; i<=10; i++)
    {
        conta = i * num;

        printf("\n%d X %d = %d", i, num, conta);
    }
}