//Tales Oliveira Neves, 11721ECP010
#include <stdio.h>
int soma (int vet[])
{
    int a, b=0;
    for(a=0;a<20;a++)
    {
        b = b + vet[a];
    }
    return b;
}
float med (int quant, int d)
{
    float m = d/quant;
    return m;
}
void main()
{
    int a, quant, vet[20];
    float c;
    scanf("%d", &quant);
    for(a=0;a<20;a++)
    {
        vet[a]=0;
    }
    a=getchar();
    for(a=0;a<quant;a++)
    {
        scanf("%d", &vet[a]);
    }
    c=med(quant,soma(vet));
    printf("%.2f", med(quant,soma(vet)));
}
