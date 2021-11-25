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

Node* deleteFirst(Node* head){
    Node* temp = head;
    temp = temp->next;
    delete head;
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
    head = deleteFirst(head);
    cout<<"list after deleting first node"<<endl;
    printList(head);
}