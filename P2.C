//Tales Oliveira Neves, 11721ECP010
#include <stdio.h>
int pow(int gok, int exp)
{
    int er;
    er= gok;
    for(exp=exp;exp>1;exp--)
    {
        gok=gok*er;
    }
    if(exp==0)
    {
        gok=1;
    }
    return gok;
}
int btod(int a)
{
  int b, i, c;
    scanf("%d", &a);
    c=0;
        for(b=1,i=0; a*10>b; b*10,i++)
        {
            c =c+((a%10)*(pow(2,i)));
            a = a/10;
        }
    printf("%d", c);
	return c;
}
int dtob(int a)
{
      int b, i, c;
        for(i = 31; i >= 0; i--)
    {
      c = a >> i;
        if(c & 1)
        {
            printf("1");
        }
        else
            {
            printf("0");
           }
     }
}


void main()
{
    int men, base, a, b;
    printf("1. Binario para Decimal\n2. Binario para Hexadecimal\n3. Hexadecimal para Decimal\n4. Hexadecimal para Binario\n5. Decimal para Binario\n6. Decimal para Hexadecimal\n7. Octal para Decimal\n8. Decimal para Octal\n");
    scanf("%d", &men);
    switch(men)
    {
        case 1: scanf("%d",&a);
                b= btod(a);
                printf("%d",b);
                break;
        case 2: scanf("%d",&a);
                b= btod(a);
                printf("%x",b);
                break;
        case 3: scanf("%x",&a);
                printf("%d",a);
                break;
        case 4: scanf("%x",&a);
                dtob(a);
                break;
        case 5: scanf("%d",&a);
                dtob(a);
                break;
        case 6: scanf("%d",&a);
                printf("%x", a);
                break;
        case 7: scanf("%o", &a);
                printf("%d", a);
                break;
        case 8: scanf("%d", &a);
                printf("%o", a);
                break;
    }
    return 0;
}
