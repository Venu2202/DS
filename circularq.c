#include<stdio.h>
#include<stdlib.h>
#define SIZE 2
int front=-1,rear=-1;
int queue[SIZE],n;
void insert(int item){
if((front==0&&rear==SIZE-1)||(front==rear+1)){
    printf("Queue is full\n");
    return;}
    else{
    rear=(rear+1)%SIZE;
    queue[rear]=item;
    if(front==-1)
    front=0;
    }
    }
int delete(){
    int elem;
if(front==-1 && rear==-1){
    printf("Queue is empty\n");}
    else{
        elem=queue[front];
        printf("Deleted element is : %d",elem);
         if(front==rear){
        front=-1;
        rear=-1;
         }
        else{
            front=(front+1)%SIZE;
        }
    }
}
void display(){
    int i;
if(front==-1&&rear==-1){
    printf("Queue is empty!!\n");
    return;}
else{
    i=front;
do{
    printf("Elements in the queue is :");
    printf("%d\t",queue[i]);
    if(i==rear)
        break;
    i=(i+1)%SIZE;
}while(i!=front);
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
