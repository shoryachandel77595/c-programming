#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];

    printf("Enter a string: ");
    fgets(a,100,stdin);

    strcpy(b,a);

    printf("Copied string = %s",b);
    return 0;
}
