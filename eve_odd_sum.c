#include <stdio.h>
void main()
{
    int i=1, n, esum=0,osum=0;
    /* Input upper limit from user */
    printf("Enter number: ");
    scanf("%d", &n);
    while(i<=n)
    {
        if(i%2==0)
            esum=esum+i;
        else
            osum=osum+i;
        i++;
    }
    printf("sum of even numbers=%d\n",esum);
    printf("sum of odd numbers=%d",osum);
}	