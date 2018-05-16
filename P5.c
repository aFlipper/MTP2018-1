//Tales Oliveira Neves, 11721ECP010
#include <stdio.h>

void main ()
{
    int men, a;
    int vint[64];
    char vchar [255];
    int* pint = (int *) vchar;
    char* pchar = (char *) &vint;
    printf("1. Codificar\n2. Decodificar\n");
    scanf("%d", &men);
    a =getchar();
    switch(men)
    {
    case 1:
        for(a=0;a<255;a++)
        {
            vchar[a]=0;
        }
        fgets(vchar,255,stdin);
        for(a=0;vchar[a]!=0;a++)
        {
            if(vchar[a]==10){vchar[a]=0;}
        }
        for(a=0;*(pint+a)!=0;a++)
        {
            printf("%d ", *(pint+a));
        }
        break;
    case 2:
        for(a=0;a<64;a++)
        {
            scanf("%d", &vint[a]);
            if(getchar()=='\n')
            {
                break;
            }
        }
        for (a=0;*(pchar+a)!=0;a++)
        {
        printf("%c", *(pchar+a));
        }
        break;
    }
}

