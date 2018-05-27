//Tales Oliveira Neves, 11721ECP010
#include <stdio.h>
int ack(int m, int n)
{
    if (m == 0){
        return n+1;
    }
    else if((m > 0) && (n == 0)){
        return ack(m-1, 1);
    }
    else if((m > 0) && (n > 0)){
        return ack(m-1, ack(m, n-1));
    }
}
void main ()
{
    int a ,b;
    scanf("%d %d", &a, &b);
    printf("%d", ack(a,b));
}
