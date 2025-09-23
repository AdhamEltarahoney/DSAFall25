#include <iostream>
using namespace std;

#define MAX_SIZE 100



class Stack{

    private:
        int top; // this is a variabkle that is pointing on the index of the top element
        int arr[MAX_SIZE];
    public:
        Stack(){
            top = -1;
        }
        

        // The main functions that we want are pushing and popping
        //  This is gonna be exactly what functions like append and pop do in python
        bool push(int x){
            // push the int x that is being passed onto the stack
            // do we have space ?
            if (top >= MAX_SIZE - 1){
                //we cannot adfd anything
                cout<<"Stack is full"<<endl;
                return false;
            }
            //if we pass the if statement
            arr[++top] = x;
            return true;
        }
        int pop(){
            // function to pop elements and return their values
            // First of all, check if top is less than zero.
            if (top < 0) {
                cout<<"stack is empty, nothing to pop"<<endl;
                return 0;
            }
            else{
                //stack has elements
                // int oldTop = top;
                // top = top - 1;
                // return arr[oldTop]
                return arr[top--];  // 3,4,5,6
            }
        }
        
        int peak(){
            // this function return whatever is at the top of the stack
            if (top < 0){
                cout<<"stack is empty"<<endl;
                return 0;
            }
            // stack is not empty so return whatever is at the top
            return arr[top];
        }
        bool isEmpty(){
            //function to check if an array is empty
            if (top  < 0) {
                return true;
            }
            else{
                return false;
            }
        }

        void display(){
            if (top <0) {
                cout<<"stack is empty"<< endl;
            }
            else{
                cout<<"elements of the stack from top to bottom: ";
                for (int i = top; i>=0; i--){
                    cout<<arr[i]<< " ";
                }
                cout<<endl;
        }
    }

};


int main(){
    Stack s1;
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.display(); // 6,5,4,3
    s1.pop(); //should remove the 6
    s1.display();
    
    return 0;
}