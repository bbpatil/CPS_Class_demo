// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void main()
{
    char str[100];
    int i,wrd;
    printf("input for string:");
    gets(str);
    
    i=0;
    wrd=1;
    while(str[i]!='\0')
    {
        if(str[i]==' ' ||str[i]=='\n' || str[i]=='\t')
        {
            wrd++;
        }
    i++;
    }
    printf("Total number of words in string is: %d\n",wrd);
}