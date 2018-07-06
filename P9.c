//Tales Oliveira Neves, 11721ECP010
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Dimensoes
{
    float largura, profundidade, altura;
};
struct Produto
{
    char nome[64];
    float preco;
    struct Dimensoes dimensoes;
    int st;
};
void main ()
{
    struct Produto prod[2];
    prod[0].st=0, prod[1].st=0;
    int a, b;
    char l;
    primenu:
    printf("1 - Cadastro\n2 - Consulta\n");
    scanf("%d", &a);
    switch(a)
    {
    case 1:
        scanf("%d",&b);
        l=getchar();
        scanf("%s",&(prod[b-1].nome));
        scanf("%f",&(prod[b-1].preco));
        scanf("%f",&(prod[b-1].dimensoes.largura));
        scanf("%f",&(prod[b-1].dimensoes.profundidade));
        scanf("%f",&(prod[b-1].dimensoes.altura));
        printf("Produto %d cadastrado com sucesso\n",b);
        prod[b-1].st++;
        goto primenu;
        break;
    case 2:
        scanf("%d",&b);
        if(prod[b-1].st==0){printf("Produto nao cadastrado!\n");}
        else
        {
        printf("%s, ",prod[b-1].nome);
        printf("R$ %.2f, ",(prod[b-1].preco));
        printf("L: %.2fm x ",(prod[b-1].dimensoes.largura));
        printf("P: %.2fm x ",(prod[b-1].dimensoes.profundidade));
        printf("A: %.2fm\n",(prod[b-1].dimensoes.altura));
        }
        goto primenu;
        break;
    }
}
