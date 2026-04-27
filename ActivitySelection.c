#include<stdio.h>
int main() 
{
    int n,i,j;
    printf("Enter number of activities:");
    scanf("%d",&n);
    int s[n],f[n];
    for(i=0;i<n;i++) 
    {
        printf("Start time of activity %d:",i+1);
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++) 
    {
        printf("Finish time of activity %d:",i+1);
        scanf("%d",&f[i]);
    }
    printf("\nSelected Activities:");
    i=0;
    printf("A%d ",i+1);
    for(j=1;j<n;j++) 
    {
        if(s[j]>=f[i]) 
        {
            printf("A%d ",j+1);
            i=j;
        }
    }
    return 0;
}
