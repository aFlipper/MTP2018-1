//Tales Oliveira Neves, 11721ECP010
#include <stdio.h>
void main()
{
    int a, b;
    char yt[256];
    a= 0, b = 0;
    scanf("%s", yt);
    while(b<10)
    {
        if(yt[b] == '1' && a==0){a = a +1;}
        else if(yt[b] == '1' && a==1){a = a -1;}
        else if(yt[b] == '0' && a==1){a = a +1;}
        else if(yt[b] == '0' && a==2){a = a -1;}
        b++;
    }
    if(a==0){printf("e multiplo de 3\n");}
    else{printf(" nao e\n");}
}

