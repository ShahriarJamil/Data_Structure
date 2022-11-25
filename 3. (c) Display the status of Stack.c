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
        printf("The last pushed element '%d' is overflow\n",element);
        count = 1;
    }
    else
    {
        ++index;
        stack[index] = element;
    }
}

//checking the stack is empty or not //isEmpty function
int isEmpty()
{
    if(index == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//pop the element from the stack   //pop function
int pop()
{
    if(isEmpty())
    {
        printf("The stack is underflow! Because of no elements in the stack.\n");
        return 0;
    }
    else
    {
        --index;
        return (stack[index+1]);
    }
}

//main function
void main()
{
    int element;
    printf("Input for stack[%d] :\n",size);

push_again:
    if(count)
    {
        goto finish_push_Operation;
    }

    scanf("%d",&element);
    if(element == 0)  //exit for press '0' after taking some elements in stack (if you don't want to assign element to each index in the stack)
    {
        goto finish_push_Operation;
    }
    else
    {
        push(element);
        goto push_again;
    }

//print the elements of stack
    int i;
finish_push_Operation:
    printf("Elements of stack[%d] that is pushed :\n",size);
    for(i = 0; i<=index; i++)
    {
        printf("%d\n",stack[i]);
    }

    //pop the element
    printf("The poped element is = %d\n",pop());
    printf("The poped element is = %d\n",pop());
    printf("The poped element is = %d\n",pop());
}
