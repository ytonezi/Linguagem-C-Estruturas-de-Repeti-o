#include<stdio.h>
#include<stdlib.h>

main()
{
    int i=0, idade, intervalo=0;

    while (i<5)
    {
        i++;

        printf("Digite uma idade: ");
        scanf("%d", & idade);

        if (idade >= 15 && idade <= 24)
        {
            intervalo += 1;
        }
    }
    printf("Idade do intervalo: %d", intervalo);
}