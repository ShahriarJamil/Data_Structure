#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int arr[n];
    //scan the element of the array
    for(i=0 ; i<n ; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    //sorting in ascending order
    for(i=0 ; i<n-1 ; i++)
    {
        for(j=i+1 ; j<n ; j++)
        {
            if(arr[i]>arr[j])   //to descending 'if(arr[i]<arr[j]'
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    //print the element of the given array
    for(i=0 ; i<n ; i++)
    {
        printf("Element of arr[%d] is = %d\n",i,arr[i]);
    }
    return 0;
}
