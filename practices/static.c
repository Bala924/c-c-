#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 4
int st[MAX],top=-1;
void push (int st[],int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
int main()
{
    int val,option;
    do
    {
        printf("******Main Menu******");
        printf("\n 1.push");
        printf("\n 2.pop");
        printf("\n 3.peek");
        printf("\n 4.display");
        printf("\n 5.exit");
        printf("\n Enter your option:");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            printf("\nEnter the number to be pushed on stack:");
            scanf("%d",&val);
            push(st,val);
            break;
        case 2:
            val=pop(st);
            if(val !=-1)
                printf("\n The value deleted from stack is:%d",val);
                break;
        case 3:
            val=peek(st);
            if(val !=-10)
                printf("\n The value stored at top of stack:%d",val);
                break;
        case 4:
            display(st);
        }

    }
    while(option !=5);
    return 0;
}
void push(int st[],int val)
{
    if(top==MAX-1)
    {
        printf("\n Stack overflow");
    }
    else
    {
        top++;
        st[top]=val;

    }
}
int  pop(int st[])
{
    int val;
    if(top==-1)
    {
        printf("\n Stack underflow");
        return -1;
    }
    else
    {
        val=st[top];
        top--;
        return val;
    }
}
void display(int st[])
{
    int i;
    if(top==-1)
    {
        printf("\n Stack is empty");

    }
    else{
        for(i=top;i>=0;i--)
            printf("\n %d",st[i]);
            printf("\n ");
    }
}
int peek(int st[])
{
    if(top==-1)
    {
        printf("\n Stack is empty");
        return -1;
    }
    else
    {
        return(st[top]);
    }
}
