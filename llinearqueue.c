#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int front=-1,rear=-1;
int queue[SIZE],n;
void insert(int item){
if(rear==SIZE-1)
    printf("Queue is full\n");
    else{
            if(front==-1)
            front=0;
            rear++;
        queue[rear]=item;
    }
}
int delete(){
    int elem;
if(front==-1 && rear==-1)
    printf("Queue is empty\n");
    else{
        elem=queue[front];
        front++;
        printf("Deleted element is : %d",elem);
        }
    if(front>rear){
        front=-1;
        rear=-1;
    }
}
void display(){
if(front==-1&&rear==-1)
    printf("Queue is empty!!\n");
else{
    printf("Elements in the queue is :");
    for(int i=front;i<=rear;i++)
        printf("%d\t",queue[i]);
}
}
int main(){
    int op,item;
    while(1){
    printf("\nEnter your choice:\n 1.Insert\t2.Delete\t3.Display\n");
    scanf("%d",&op);
switch(op){
case 1: printf("Enter the elements you want to insert:");
        scanf("%d",&item);
        insert(item);
        break;
case 2: delete();
        break;
case 3: display();
        break;
default : exit(0);
}
}
}

