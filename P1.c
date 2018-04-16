#include <stdio.h>
main()
{
    int a, b;
    char pinto[10];
    a= 0, b = 0;
    scanf("%s", &pinto);
    while(b<10)
    {
        if(pinto[b] == '1' && a==0){a = a +1;}
        else if(pinto[b] == '1' && a==1){a = a -1;}
        else if(pinto[b] == '0' && a==1){a = a +1;}
        else if(pinto[b] == '0' && a==2){a = a -1;}
        b++;
    }
    if(a==0){printf("%s e multiplo de 3\n", pinto);}
    else{printf("nao e\n");}
}
