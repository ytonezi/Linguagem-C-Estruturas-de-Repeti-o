#include<stdio.h>
#include<stdlib.h>

main()
{
    float valor, valoravista=0, valorprestacao=0, valortotal=0, parcela=0;
    char resp;
    char continua = 's';

    while (continua == 's' || continua == 'S')
    {

        printf("Digite o codigo da compra (1/2): ");
        fflush(stdin);
        resp = getchar();

        printf("Digite o valor da compra: ");
        scanf("%f", & valor);

        valortotal += valor;

        if (resp == '2')
        {
            valorprestacao += valor;
            parcela = valorprestacao/3;
        }
        else if (resp == '1')
            {
              valoravista += valor;
            }

        printf("Deseja adicionar mais uma compra? (s/n): ");
        fflush(stdin);
        continua = getchar();
    }

    printf("\nValor a vista = %0.2f", valoravista);
    printf("\nValor parcelado = %0.2f", valorprestacao);
    printf("\nValor das parcelas = %0.2f", parcela);
    printf("\nValor total = %0.2f", valortotal);
}