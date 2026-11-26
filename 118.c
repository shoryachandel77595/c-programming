#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b!=0)
        printf("Quotient = %d",a/b);
    else
        printf("Division not possible");
    return 0;
}
