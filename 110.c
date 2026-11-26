#include <stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    i=1;
    while(i<=b)
    {
        a--;
        i++;
    }
    printf("Result = %d",a);
    return 0;
}
