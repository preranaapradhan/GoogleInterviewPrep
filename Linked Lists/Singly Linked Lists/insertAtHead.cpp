#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp -> data;
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    
    //Created a new Node
    Node* node1 = new Node(5);
    cout<< node1->data << endl;
    cout<< node1->next << endl;


    //Head pointed to new node
    Node* head = node1;
    print(head);

    //Calling desired functions
    insertAtHead(head, 1);
        print(head);

    insertAtHead(head, 2);
        print(head);

    insertAtHead(head, 3);
        print(head);

    insertAtHead(head, 4);
        print(head);

    return 0;
}