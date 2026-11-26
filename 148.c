#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    int i,count=0;

    fgets(str,100,stdin);

    for(i=0;str[i]!='\0';i++)
    {
        char ch=tolower(str[i]);

        if(ch>='a' && ch<='z' &&
           ch!='a' && ch!='e' &&
           ch!='i' && ch!='o' && ch!='u')
            count++;
    }

    printf("Consonants = %d",count);
    return 0;
}
