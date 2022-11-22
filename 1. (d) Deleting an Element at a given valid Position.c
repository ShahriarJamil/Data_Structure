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

    //position to delete it's element
    printf("Enter the position to delete it's element : ");
    int POS;
    scanf("%d",&POS);

    //Delete the element
    if(POS >= 0 && POS < n)
    {
        for(i=POS ; i<n-1 ; i++)
        {
            arr[i] = arr[i+1];
        }

        //Finally print the element of the given arrary
        for(i=0 ; i<n-1 ; i++)
        {
            printf("Element of arr[%d] is = %d\n",i,arr[i]);
        }
    }
    else
    {
        printf("Deletion is not possible in the array for invalid position\n");
    }
    return 0;
}

