#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            if(i==0||k==0)
            {
                m=1;
            }
            else
            {
                m=m*(i-k+1)/k;
            }
            printf("%d ",m);
        }
        printf("\n");
    }
    return 0;
}
