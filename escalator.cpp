#include<iostream>
using namespace std;

class Stack{
    protected:
    int capacity;
    int size;
    int top;
    int* ptr;

    public:

    Stack(){}

    Stack(int x){
        capacity=x;
        top=-1;
        size=0;
        ptr=new int[capacity];

    }

    void push(int element){
        if(size>=capacity){
            cout<<"Stack is full !!";
        }
       
    }

 

};

class Escalator:public Stack{
     
    
     int* ptr;
     public:

     int top;

     Escalator(){

     }

     Escalator(int y){
        size=0;
        top=-1;
        capacity=y;
        ptr=new int[capacity];

     }




    void push(int element){
        if(size>=capacity){
            cout<<"Stack is full !!"<<endl;
        }
        else{
            top++;
            ptr[top]=element;
            size++;
        }

    }

    
    int pop(){
        if(size>0){
            top--;
            size--;
            return ptr[top+1];
        }
    }

    void peak(){
        cout<<"The top element is : "<<ptr[top]<<endl;
    }

   

    void display(){
        cout<<"Elements of stack : "<<endl;
        for(int i=top;i>=0;i--){
            cout<<ptr[i]<<endl;
        }
    }


    void isFull(){
        if(size>=capacity){
            cout<<"Stack is Full !!"<<endl;
        }
        else{
            cout<<"stack is not Full!!"<<endl;
        }
       
    }

    void isEmpty(){
        if(size==0){
            cout<<"Stack is Empty !!"<<endl;
        }
        else{
            cout<<"stack is not Empty !!"<<endl;
        }
    }



  
};


int main(){
  int choice;
  int element,top,size;

 
 cout<<"Enter the size of stack : ";
 cin>>size;

 Escalator s1(size);
 

   do{

        cout<<"Press 1 to add an element "<<endl;
        cout<<"Press 2 to remove the top element "<<endl;
        cout<<"Press 3 to return the top element "<<endl;
        cout<<"Press 4 to check if the stack is empty"<<endl;
        cout<<"Press 5 to check if the stack is full "<<endl;
        cout<<"Press 0 to exit "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

    switch(choice){

            case 1:
            cout<<"Enter an element to add : ";
            cin>>element;
            s1.push(element);
            s1.display();
            break;

            case 2:
            s1.pop();
            s1.display();
            break;

            case 3:
            s1.peak();
            break;
            

            case 4:
            s1.isEmpty();
            break;
            

            case 5:
            s1.isFull();
            break;
           

            case 0:
            cout<<"You've exited successfully !!!"<<endl;
            break;

            default:
            cout<<"Error, Invalid choice !!!!"<<endl;
            break;



        }
    }
       while(choice!=0);
       

       



}