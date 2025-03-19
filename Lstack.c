#include<stdio.h>
#include<stdlib.h>
 typedef struct node{
  int data;
  struct node *prev;
 }N;
 N *head=NULL;
 
 void Push(int element){
  N * newnode;
  newnode=(N*)malloc(sizeof(N));
  newnode->data=element;
  newnode->prev=head;
  head=newnode;
  return;
 }
 void Pop(){
  N *temp=head;
     if(head==NULL){
      printf("LIST IS EMPTY");
        return;
    }else{
      printf("%d\n",temp->data);
       head=head->prev;
       free(temp);
    }return;
 }
 int Peek(){
     if(head==NULL){
       printf("LIST IS EMPTY");
        return -1;
    }else
    return head->data;
 }
 void main(){
  Push(10);
  Push(11);
  Push(12);
  Push(13);
  Push(14);
  Push(15);
  Push(16);
  printf("%d",Peek());
  Pop();
  Pop();
  Pop();
  Pop();
  printf("%d",Peek());
  Pop();
  Pop();
  Pop();  
  printf("%d",Peek());
  Pop();
  Pop();
  printf("%d",Peek());
 }
