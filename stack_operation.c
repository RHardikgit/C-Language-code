// stack progarm

#include<stdio.h>
#include<conio.h>
#include<string.h>

#define MAX 5
int stack [MAX];
int top = -1;

void push();
void pop();
void peek();
void check_empty_or_full();


int main(){

    for(int i =0; i<=7; i++){
    int n;
    printf("\n -- Functions.....");
    printf("\n 1.push \n 2.pop \n 3.peek \n 4.check empty_or_full \n 5.exit \n");

    printf("chhose any one:");
    scanf("%d",&n);

    switch(n)
    {
        case 1: printf("\n --push functions-- \n");
        push();
        break;

        case 2: printf("\n --pop functions-- \n");
        pop();
        break;

        case 3: printf("\n --peek functions-- \n");
        peek();
        break;

        case 4: printf("\n -- check stack empty or not functions-- \n");
        check_empty_or_full();
        break;

        case 5: printf("Thank you..\n");
        break;
    }
}
    return 0;
}

void push()
{
    int n;
    if(top == MAX -1){
        printf("stack is overflow.");
    }
    else
    {
        printf("enter n: ");
        scanf("%d",&n);

        top++;
        stack[top] = n;

        printf("%d pushed in stack ",n);
    }
    return;
}

void pop()
{
    int n;
    if(top == -1){
        printf("stack is underflow.");
    }
    else{
        n = stack[top];
        top--;
        printf("%d popped in stack ",n);
    }
    return;
}

void peek()
{
    int n;
    if(top == -1){
        printf("stack is empty.");
    }
    else {
        n = stack[top];
        printf("top element is %d ",n);
    }
    return;
}

void check_empty_or_full()
{
    if(top == -1){
        printf("stack is empty.");
    }
    else if(top == MAX-1){
        printf("stack is full");
    }
    else {
        printf("stack is neither empty or full.");
    }
    return;
}
