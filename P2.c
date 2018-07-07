//Tales Oliveira Neves, 11721ECP010
#include <stdio.h>
int btod()
{
    char a[256];
    scanf("%s", a);
    int b, c;
    c=0;
        for(b=0;a[b]!='\0';b++)
        {
            c=c<<1;
            if(a[b]=='1')
            {
             c++;
            }
        }
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
        case 1: b=btod(a);
                printf("%d",b);
                break;
        case 2: b= btod(a);
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
}
