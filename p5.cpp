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
}