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

Node *insertatEnd(Node *head, int x)
{
    Node *temp = head;
    Node *curr = new Node(x);
    if (head == NULL)
    {
        return curr;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = curr;

        return head;
    }
}
Node* insertatPosition(Node *head,int p,int x){
    Node *curr = head;
    Node *temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    if(p == 1){
        temp->next = head->next;
        head = temp;
    }
    else{
        int c=1;
        while(c < p-1){
            curr = curr->next;
            c++;
        }
        temp->next = curr->next;
        curr->next = temp;
        return head;
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
    Node *head = NULL;
    head = insertatEnd(head, 20);
    head = insertatEnd(head, 30);
    head = insertatEnd(head, 40);
    head = insertatEnd(head, 50);
    printList(head);
    cout<<"after insertion at first"<<endl;
    head = insertatPosition(head,1,60);
    printList(head);
    cout<<"after insertion at position 2"<<endl;
    head = insertatPosition(head,2,90);
    printList(head);
}