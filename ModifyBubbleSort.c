#include <stdio.h>
void modifiedBubbleSort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int swapped=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=1;
            }
        }
        printf("Pass %d: ",i+1);
        for(int k=0;k<n;k++)
            printf("%d ",a[k]);
        printf("\n");
        if(swapped==0)
            break;
    }
}
int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Element a[%d]=",i);
        scanf("%d",&a[i]);
    }
    modifiedBubbleSort(a,n);
}
