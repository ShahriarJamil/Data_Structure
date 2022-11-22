#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int arr[n];

    //scant the element of the arrary
    for(i=0 ; i<n ; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    //print the element of the given arrary
    for(i=0 ; i<n ; i++)
    {
        printf("Element of arr[%d] is = %d\n",i,arr[i]);
    }
    return 0;
}
