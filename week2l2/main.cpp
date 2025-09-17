#include <iostream>
using namespace std;

// node and the head pointer
// node is gonna be its own class
// the head pointer is gonna be s pointer stored in the linked list class

//Node definition:
struct Node
{
    int data;
    Node* next;
    // mini simple constructor
    Node(int val) : data(val), next(nullptr){}
};
// class of a singlylinkedlist

class SinglyLinkedList
{
private:
    /* data */
//here is where we store the head that I was talking about
    Node *head;
public:
    SinglyLinkedList(): head(nullptr){}

    // the first function I wanna talk about is inserting at the head of a linbked liust
    void insertAtHead(int val){
        //create the node with data = val
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    //delete at Head
    void deleteAtHead(){
        // a linked list is empty only if head == nullptr
        // YOU CANNOT ACCESS DATA OR MOVE POINTERS  USING THE . NOTATION
        if (head != nullptr){
            Node *q = head;
            head = head->next;
            delete q;
        }
    }
    void printAllNodes(){
        Node *curr = head;
        while (curr != nullptr){
            cout<< curr->data << "-> ";
            curr = curr->next;
        }
        cout<<endl;
    }
    // I want to search for a value, and you want to return the position or the index (0-based). If this value is not here, you just return -1. 
    int search(int valToSearch){
    Node *curr = head;
    int pos = 0;
    while(curr != nullptr){ // this is equivelant to while (curr)
        if (curr->data == valToSearch){
            return pos;
        }
        curr = curr ->next;
        pos++;
    }
    return -1;
}







    ~SinglyLinkedList();
};

SinglyLinkedList::~SinglyLinkedList()
{
    Node* curr = head;
    while (curr){
        // delete the node at curr
        // but before we do that we wanna have a pointer pointing at the next node
        Node* next = curr->next;
        //delete curr
        delete curr;
        curr = next;
    }
}
int main(){
    // create a linkedlist object
    SinglyLinkedList list;
    list.insertAtHead(4); // 4
    list.insertAtHead(3); // 3 -> 4
    list.insertAtHead(2); // 2 -> 3 -> 4
    list.insertAtHead(1); // 1 -> 2 -> 3 -> 4
    list.printAllNodes();
    cout<<list.search(3)<<endl;
    
    return 0;
}





