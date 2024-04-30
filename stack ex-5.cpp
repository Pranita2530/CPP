#include<iostream>
#include<stack>
using namespace std;
class Stack{
    private:
    int arr[10];
   
  
    int size;
    public:
     int top;
    Stack(){
        top=-1;
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==size-1;
    }
    void push(int value){
        if(isFull()){
            cout<<"overflow"<<endl;
            return ;
        }
    
         arr[++top]=value;
    }
    
    int pop(){
        if(isEmpty()){
            cout<<"underflow"<<endl;
            return -1;
        }
    
        return arr[top--];
    }
};
int main(){
    Stack stack;
    stack.push(32);
    stack.push(36);
    stack.push(36);
    stack.push(36);
    stack.push(93);
    cout<<"Stack pop:"<<stack.pop()<<endl;
    return 0;
}
