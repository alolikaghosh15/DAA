#include <stdio.h>
int main()
{
    int i,j,k,l,n,a;
    printf("Enter number of matrices:");
    scanf("%d",&n);
    int p[n+1]; 
    for(i=0;i<=n;i++)
    {
        printf("Enter value of p[%d]:",i);
        scanf("%d",&p[i]);
    }
    int m[n+1][n+1]; 
    for(i=1;i<=n;i++)
    {
        m[i][i]=0;
    }
    for(l=2;l<=n;l++)
    {
        for(i=1;i<=n-l+1;i++)
        {
            j=i+l-1;
            m[i][j]=m[i][i]+m[i+1][j]+p[i-1]*p[i]*p[j];
            for(k=i+1;k<j;k++)
            {
                a=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(a < m[i][j])
                {
                    m[i][j]=a;
                }
            }
        }
    }
    printf("\nResultant Matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j < i)
                printf("X\t"); 
            else
                printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    printf("\nMinimum number of multiplications=%d\n",m[1][n]);
    return 0;
}
