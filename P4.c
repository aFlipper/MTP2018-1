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
                if(antst[lix]==48)
                {
                    met++;
                }
                if(antst[lix]==49)
                {
                    num = num +(1*pot(10,met));
                    met++;
                }
                if(antst[lix]==50)
                {
                    num = num +(2*pot(10,met));
                    met++;
                }
                if(antst[lix]==51)
                {
                    num = num +(3*pot(10,met));
                    met++;
                }
                if(antst[lix]==52)
                {
                    num = num +(4*pot(10,met));
                    met++;
                }
                if(antst[lix]==53)
                {
                    num = num +(5*pot(10,met));
                    met++;
                }
                if(antst[lix]==54)
                {
                    num = num +(6*pot(10,met));
                    met++;
                }
                if(antst[lix]==55)
                {
                    num = num +(7*pot(10,met));
                    met++;
                }
                if(antst[lix]==56)
                {
                    num = num +(8*pot(10,met));
                    met++;
                }
                if(antst[lix]==57)
                {
                    num = num +(9*pot(10,met));
                    met++;
                }
        }

    printf("%d", num);
}
