#include <stdio.h>
void linearSearch(int a[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        printf("Pass %d: checking %d\n",i+1,a[i]);
        if(a[i]==key)
        {
            printf("%d Found at position %d\n",key,i);
            return;
        }
    }
    printf("Key Element Not found\n");
}
int main()
{
    int n,key;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Element a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter key: ");
    scanf("%d",&key);
    linearSearch(a,n,key);
}
