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
    int beg,end,mid;
    beg = 0;
    end = n-1;
    while(beg <= end)
    {
        mid = (beg + end) / 2;
        if (arr[mid] == element)
        {
            printf("The element has been found.\n");
            printf("The position of this element in the array is : arr[%d]\n",mid);
            return 0;
        }
        else if (arr[mid] < element)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    printf("The element could not be found.");
    return 0;
}


