#include <stdio.h>
int main()
{
    int a,b;
    int *p,*q;
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    printf("Result = %d",*p-*q);
    return 0;
}
