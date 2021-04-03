#include <stdio.h>

int main()
{
    int n1,n2=0,n3=1;
    int sum,sum2;
    for(int i=0; i<20; i++)
    {
        n1=n2;
        n2=n3;
        n3=n1+n2;
        printf("%i ",n1);
    }
}
