#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
        
    }
};

Node* insertAtBegin(Node* head,int x){
    Node* curr = head;
    Node* temp = new Node(x);
    if(head==NULL){
        head = temp;
        return head;
    }
    else{
        temp->next = curr->next;
        curr = temp;
        return curr;
    }
}

void printList(Node *head)
{

    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}


int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printList(head);
    head = insertAtBegin(head,99);
    cout<<"list after inserting at first"<<endl;
    printList(head);
}