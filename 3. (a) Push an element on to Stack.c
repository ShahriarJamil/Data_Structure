#include<stdio.h>

#define size 5
int stack[size];
int index = -1,count = 0;

//checking the stack is full or not //isFull function
int isFull()
{
    if(index == size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//push the element in the stack   //push function
void push(int element)
{
    if(isFull())
    {
        printf("The stack is overflow\n");
    }
    else
    {
        ++index;
        stack[index] = element;
    }
}

//main function
void main()
{
    push(5);
    push(9);
    push(8);
    push(1);
    push(7);
    push(3);

//print the elements of stack
    int i;
    printf("Elements of stack[%d] :\n",size);
    for(i = 0; i<=index; i++)
    {
        printf("%d\n",stack[i]);
    }
}
