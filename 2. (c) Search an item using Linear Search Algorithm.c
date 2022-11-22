#include<stdio.h>
int main()
{
    int n,i,element;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int arr[n];

    //scan the element of the array
    for(i=0 ; i<n ; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    //the element which want to search
    printf("Enter the element which want to search : ");
    scanf("%d",&element);

    //searching the given element in the given array
    for(i=0 ; i<n ; i++)
    {
        if(arr[i] == element)
        {
            printf("The element has been found.\n");
            printf("The position of this element in the array is : arr[%d]\n",i);
            return 0;
        }
    }
    printf("The element could not be found.");
    return 0;
}

