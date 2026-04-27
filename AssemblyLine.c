#include <stdio.h>
int min(int a,int b) 
{
    return (a < b) ? a : b;
}
int main() 
{
    int N;
    printf("Enter number of stations:");
    scanf("%d", &N);
    int a1[N],a2[N];
    int t1[N-1],t2[N-1];
    int f1[N],f2[N];
    printf("Enter processing times for line 1:\n");
    for(int i=0;i<N;i++)
        scanf("%d",&a1[i]);
    printf("Enter processing times for line 2:\n");
    for(int i=0; i<N;i++)
        scanf("%d",&a2[i]);
    printf("Enter transfer times from line 1 to line 2:\n");
    for(int i=0;i<N-1;i++)
        scanf("%d",&t1[i]);
    printf("Enter transfer times from line 2 to line 1:\n");
    for(int i=0;i<N-1;i++)
        scanf("%d",&t2[i]);
    f1[0]=a1[0];
    f2[0]=a2[0];
    for(int i=1;i<N;i++) 
    {
        f1[i]=min(f1[i-1]+a1[i],f2[i-1]+t2[i-1]+a1[i]);
        f2[i]=min(f2[i-1]+a2[i],f1[i-1]+t1[i-1]+a2[i]);
    }
    int result=min(f1[N-1],f2[N-1]);
    printf("Minimum cost:%d\n",result);
    return 0;
}
