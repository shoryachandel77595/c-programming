#include <stdio.h>
int main()
{
    int a,b,i=1,result=0;
    scanf("%d%d",&a,&b);
    while(i<=b)
    {
        result=result+a;
        i++;
    }
    printf("Product = %d",result);
    return 0;
}
