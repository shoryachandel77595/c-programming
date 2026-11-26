#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);

    printf("Length = %lu",strlen(str)-1);
    return 0;
}
