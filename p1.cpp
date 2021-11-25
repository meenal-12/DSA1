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

Node *insert(Node *head, int x)
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
void printList(Node *head)
{

    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

void rsearch(Node* head,int x,int c){
    if(head == NULL){
        cout<< -1;
    }
    if(head->data == x){
        cout<< c;
    }
    else{
        rsearch(head->next,x,c+1);
    }
}
int main()
{

    Node *head = NULL;

    head = insert(head, 20);

    head = insert(head, 30);

    head = insert(head, 40);

    head = insert(head, 50);

    printList(head);
    rsearch(head,40,1);
}