#include <stdio.h>
#include <stdlib.h>

#define STR_MAX 100
#define CASA_D_MAX 6

int norep(int a, int b);

int norep(int a, int b)   /*Funcao de sorteio sem reposicao de a ate b*/
{

    int j, num, k, m, flag, vet[b-a+1];    /*Declaracao de variaveis*/
    for (j=0; j < (b-a+1); j++)
        {
            num = a + rand() % (b-a+1);    /*Sorteio de a ate b*/
            if( j == 0 )
                vet[j] = num;
            else
            {
                flag = 0;            /*Nao ha repeticao*/
                for(m=0; m<j; m++)     /*Comparar com os numeros anteriores*/
                {
                    if(num == vet[m])
                        flag=1;       /*Ha repeticao*/
                }
                if(flag == 0)
                    vet[j] = num;
                else
                    j--;       /*Testa o mesmo j ate dar um numero diferente*/
            }
        }
            for (k=0; k < (b-a+1); k++)
                printf("%d\t", vet[k]);
      return ;
}

