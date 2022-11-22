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

    //Element to insert
    printf("Enter the element to insert : ");
    int ELEM;
    scanf("%d",&ELEM);

    //position to insert new element
    printf("Enter the position to insert element : ");
    int POS;
    scanf("%d",&POS);

    //Insert new element
    if(POS >= 0 && POS < n)
    {
        arr[POS]=ELEM;

        //print the element of the given arrary
        for(i=0 ; i<n ; i++)
        {
            printf("Element of arr[%d] is = %d\n",i,arr[i]);
        }
    }
    else
    {
        printf("The position is invalid\n");
    }
    return 0;
}
