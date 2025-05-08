#include<stdio.h>
#include<stdlib.h>

main()
{
    int i, tempo, tempototal=0, melhortempo=1000, volta;
    float tempomedio=0;

    for (i=1;i<=5;i++)
    {
        printf("Tempo medio da %da volta: ", i);
        scanf("%d", & tempo);

        tempototal += tempo;
        tempomedio = tempototal/5;

        if (tempo < melhortempo)
        {
            melhortempo = tempo;
            volta = i;
        }
    }

    printf("\nTempo medio do corredor: %0.2f", tempomedio);
    printf("\nMelhor tempo do corredor: %d", melhortempo);
    printf("\nVolta do melhor tempo: %d", volta);
}