#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[50];

    printf("Enter first string: ");
    scanf("%49s",a);

    printf("Enter second string: ");
    scanf("%49s",b);

    strcat(a,b);

    printf("Combined string = %s",a);
    return 0;
}
