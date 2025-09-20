#include <iostream>
using namespace std;


class Node
{

public:
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};


class CircularLinkedList
{
private:
Node *head ;
public:
    CircularLinkedList():head(nullptr){};

    void insertAtHead(int value){
        // What this function does is that it creates a new node with the value that is opassed as an argument and inserts it at the head of the linkedlist
        Node* newNode = new Node(value);
        // check if we have any existing nodes
        if (head == nullptr){
            //This is gonna be rthe first node in the LL
            newNode->next = newNode;
            head = newNode;
            return;
        }
        // we wanna get access to the last node in the L becauyse we want its next pointer to point on head
        Node* temp = head;
        while (temp->next != head){
            temp = temp->next;
        }
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }

    // now lets have a function about inserting in a CLL (insert at end)

    void insertAtEnd(int value){
        Node* newNode = new Node(value);
        //lets have a check to make sure if this is gonna be the first node in the CLL
        if (head == nullptr){
            //first node in CLL
            newNode->next = newNode;
            head = newNode;
            return;
        }
        //if there are iother nodes
        Node* temp = head;
        while(temp->next != head){
            //this for loop stops when the temp get to the last node
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
    void display(){
        if (head == nullptr){
            // the cll is empty
            cout << "The list is empty" << endl;
            return;
        }
        Node* temp = head;
        do {
            cout<< temp->data<< " ";
            temp = temp->next;
        }
        while (temp!=head);

        cout<< endl;
    }
};



int main() {
    CircularLinkedList cll;
    cll.insertAtHead(10);
    cll.insertAtEnd(20); //10, 20
    cll.insertAtEnd(30); // 10->20->30
    cll.insertAtHead(0);// 0->10->20->30
    cll.display();
    return 0;
}

