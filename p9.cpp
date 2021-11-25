#include<bits/stdc++.h>
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

Node* deleteLast(Node* head){
    Node* temp = head;
    while (head->next->next!= NULL)
    {
        
        head = head->next;

    }

    delete head->next;
    head->next = NULL;
    
    return temp;
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
    head = deleteLast(head);
    cout<<"list after deleting last node"<<endl;
    printList(head);
}