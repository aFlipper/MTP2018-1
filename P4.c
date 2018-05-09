//Tales Oliveira Neves, 11721ECP010
#include <stdio.h>
int pot (int base,int exp)
{
    int a, b=1;
    for(a=1; a<=exp; a++)
    {
        b= b*base;
    }
    base = b;
    return base;
}
void main()
{
    int quant=0, num=0, lix, met;
    char st[256], antst[256];
    scanf("%s", st);
    while(st[quant])
    {
        quant++;
    }
    for(lix=quant-1, met=0; lix>0, met<quant;lix--, met++)
    {
        antst[met] = st[lix];
    }
    for(lix=0, met=0; lix<quant; lix++)
    {
        if(antst[lix]>47 && antst[lix]<58)
        {
            num = num +((antst[lix]-48)*pot(10,met));
            met++;
        }
    }

    printf("%d", num);
}
