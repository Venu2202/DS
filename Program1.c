#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int stack[SIZE],item,top=-1;
int n1,n2,n3;
void add(){
while(!top=-1){
n1=pop(top);
n2=pop(--top);
n3=n1+n2;
push(n3);}}

void push(int item)
{
   if(top==SIZE-1){
       printf("Stack overflow\n");
       return;
   }
   else{
    top++;
    stack[top]=item;
    printf("Element inserted!\n");
   }
}
void display()
{
    int j;
    if(top==-1){
        printf("Stack underflow\n");
        return;
    }
    printf("Contents of stack:\n");
    for(j=top;j>=0;j--)
    {
        printf("%d\t",stack[j]);
    }

    add();
}
void display1(){
printf("%d",stack[top]);}
void main()
{
    int ch;
    while(1)
    {
    printf("\nselect option\n 1. Push 2. Pop 3. Display 4. Exit \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("Enter item to be inserted:\t");
        scanf("%d",&item);
        push(item);
        break;
        case 2: display();
        break;
        case 3: add();
        break;
        case 4: display1();
        default: exit(0);
    }
    }
}
