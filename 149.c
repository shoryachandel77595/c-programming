#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[200];
    int i,words=0,inword=0;

    fgets(str,200,stdin);

    for(i=0;str[i]!='\0';i++)
    {
        if(!isspace((unsigned char)str[i]))
        {
            if(inword==0)
                words++;
            inword=1;
        }
        else
            inword=0;
    }

    printf("Words = %d",words);
    return 0;
}
