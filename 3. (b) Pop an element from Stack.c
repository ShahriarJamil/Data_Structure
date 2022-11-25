#include<stdio.h>

#define size 5
int stack[size];
int index = -1,count = 0;

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
    int poped;
    poped =pop();
    printf("The poped element is = %d",poped);
}
