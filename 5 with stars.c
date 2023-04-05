#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    for(i=3;i<n;i++)
    {
        if(i%2!=0)
        {
            printf("\n*");
        }
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
    for(i=3;i<n;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<n;j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
   return 0;
}

