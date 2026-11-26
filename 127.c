#include <stdio.h>
int main()
{
    float a,b,c,d,e,total,per;
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    per=total/5;
    printf("Percentage = %.2f%%",per);
    return 0;
}
