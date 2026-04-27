#include <stdio.h>
void binarySearch(int a[], int n, int key)
{
    int low=0,high=n-1,mid,pass=1;
    while(low<=high)
    {
        mid=(low+high)/2;
        printf("Pass %d: mid=%d value=%d\n",pass++,mid,a[mid]);
        if(a[mid]==key)
        {
            printf("%d Found at position %d\n",key,mid);
            return;
        }
        else if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    printf("Key Element Not found\n");
}
int main()
{
    int n,key;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Element a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter key: ");
    scanf("%d",&key);
    binarySearch(a,n,key);
}
