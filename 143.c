#include <stdio.h>
#include <string.h>
int main()
{
    char a[50],b[50];

    scanf("%49s%49s",a,b);

    if(strcmp(a,b)==0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
