#include<bits/stdc++.h>
using namespace std;

struct Node{
   int data;
   Node* next;
   Node* previous;
   Node(int x){
       data = x;
       next = NULL;
       previous = NULL;
    }

};

Node* insertatBegin(Node* head,int x){
    Node* curr = head;
    Node* temp = new Node(x);
    if(head == NULL)
     {
       return temp;
     }
    
     temp->next  = head;
     head->previous = temp;
     head = temp;
     return head;
    }

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }

}


int main(){
      Node* head = NULL;
      head = insertatBegin(head,10);
      head = insertatBegin(head,20);
      head = insertatBegin(head,30);
      head = insertatBegin(head,40);
      printList(head);
      

}