#include<stdio.h>
#define max 7
int top=-1;
  void Push(int arr[],int element){
    if(top==max-1){
     printf("Stack is full\n");
       return;
    }else{
  	  top++;
      arr[top]=element;
    }
    return;
  }
  void Pop(int arr[]){
    if(top==-1){
     printf("Stack is empty");
      return;
    }else{
      printf("%d\n",arr[top]);
      top--;
    }return;
  }      
  int Peek(int arr[]){
    if(top==-1){
     printf("Stack is empty");
      return -1;
    }else{
      return arr[top];
    }
  }
  void main(){
  int arr[max];
  Push(arr,10);
  Push(arr,1);
  Push(arr,110);
  Push(arr,101);
  Push(arr,11);
  Push(arr,22);
  Push(arr,33);
  printf("%d",Peek(arr));
  Pop(arr);
  Pop(arr);
  Pop(arr);
  Pop(arr);
  Pop(arr);
  Pop(arr);
  Pop(arr);
  Pop(arr);
  printf("%d",Peek(arr));
  }
