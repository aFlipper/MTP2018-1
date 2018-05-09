//Tales Oliveira Neves, 11721ECP010
#include <stdio.h>
void printabin(int dec)
{
    int o, c;
    for(o=31; o>=0; o--)
    {
        if(dec>>o&1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}
int main()
{
    int men, b, c, d;
    printf("1. NOT\n2. AND\n3. OR\n4. XOR\n5. Right Shift\n6. Left Shift");
    scanf("%d", &men);
    switch (men)
    {
        case 1:
            scanf("%d", &b);
            d= ~b;
            printf("NOT %d (", b);
            printabin(b);
            printf(") :");
            printf(" %d (", d);
            printabin(d);
            printf(")\n");
            break;
        case 2:
            scanf("%d %d", &b, &c);
            d = b & c;
            printf("%d (", b);
            printabin(b);
            printf(") AND %d (",c);
            printabin(c);
            printf(") : ");
            printf("%d (", d);
            printabin(d);
            printf(")\n");
            break;
        case 3:
            scanf("%d %d", &b, &c);
            d = b | c;
            printf("%d (", b);
            printabin(b);
            printf(") OR %d (",c);
            printabin(c);
            printf(") : ");
            printf("%d (", d);
            printabin(d);
            printf(")\n");
            break;
        case 4:
            scanf("%d %d", &b, &c);
            d = b ^ c;
            printf("%d (", b);
            printabin(b);
            printf(") XOR %d (",c);
            printabin(c);
            printf(") : ");
            printf("%d (", d);
            printabin(d);
            printf(")\n");
            break;
        case 5:
            scanf("%d %d", &b, &c);
            d = b >> c;
            printf("%d (", b);
            printabin(b);
            printf(") >> %d (",c);
            printabin(c);
            printf(") : ");
            printf("%d (", d);
            printabin(d);
            printf(")\n");
            break;
        case 6:
            scanf("%d %d", &b, &c);
            d = b << c;
            printf("%d (", b);
            printabin(b);
            printf(") << %d (",c);
            printabin(c);
            printf(") : ");
            printf("%d (", d);
            printabin(d);
            printf(")\n");
            break;

    }
    return 0;
}
