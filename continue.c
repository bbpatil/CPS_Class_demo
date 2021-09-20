#include <stdio.h>
void main()
{
   int i = 0;
    for(i=1;i<=6;i++)
    {
        if(i==3)
        continue;
        printf("%d\n",i);
    }
}