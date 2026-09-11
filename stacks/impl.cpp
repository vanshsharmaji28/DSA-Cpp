#include <iostream>
using namespace std;
#include<stack>

//implementation stack using  array 

class Stack { 

    int arr[100];
    int top ;
  
  
    public:

    Stack(){
        top=-1;
    }

  
        void push(int val){
            if(top==99){
                cout<<"stack overflow "<<endl;
                return ;
            }
            top++;
            arr[top]=val;
        }

        void pop(){
            if(top==-1){
                cout<<"stack underflow "<<endl;
                return ;
            }

            top--;
        }

        int peek(){
            if(top==-1){
                cout<<"stack is empty "<<endl;
                return -1;
            }
            return arr[top];
        }

        bool isempty(){
            if(top==-1){
                return true ;
            }
            return false;
        }
};


//implementation of stack using ll 
class Node{
    public:
    int data;
    Node*next;
    
    Node(int val){
        data=val;
        next=nullptr;
    }

};

class Stack{
    Node*top;

    public:
    Stack(){
        top=nullptr;
    }

    void push(int val){
        Node* newnode= new Node(val);
        newnode->next=top;
        top=newnode;
    }

    void pop(){
        if(top==nullptr){
            cout<<"stack underflow" <<endl;
            return ;
        }
        Node* delnode=top;
        top=top->next;
        delete delnode;
    }

    int peek(){
        if(top==nullptr){
            cout<<"stack is empty "<<endl;
            return -1;
        }
        return top->data;
    }

    bool isempty(){
        return top==nullptr;
    }

};
