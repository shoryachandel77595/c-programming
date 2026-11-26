#include <stdio.h>
int main()
{
    int a,b,result;
    scanf("%d%d",&a,&b);
    result=(a>b)?a-b:b-a;
    printf("Difference = %d",result);
    return 0;
}
