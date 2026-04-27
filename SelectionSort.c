#include <stdio.h>
void selectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;

        printf("Pass %d:",i+1);
        for(int k=0;k<n;k++)
            printf("%d ",a[k]);
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Element a[%d]=",i);
        scanf("%d",&a[i]);
    }
    selectionSort(a,n);
    printf("Sorted Array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
