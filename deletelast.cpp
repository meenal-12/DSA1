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

Node* insertatEnd(Node* head,int x){
    Node* curr = head;
    Node* temp = new Node(x);
    if(head == NULL)
     {
       return temp;
     }
    
    while(head->next!=NULL){
        head = head->next;
    }
        temp->previous = head;
        head->next = temp;
        return curr;
}

Node* deletelast(Node* head){
      Node* temp = head;
      while(head->next->next!=NULL){
          head = head->next;
      }
      delete head->next->next;
      head->next = NULL;
      
      return temp;
}



void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }

}

int main(){
       Node* head = NULL;
       head = insertatEnd(head,10);
       head = insertatEnd(head,20);
       head = insertatEnd(head,30);
       cout<<"before deleting"<<endl;
       printList(head);
       cout<<"after deleting last node"<<endl;
       head = deletelast(head);
       printList(head);
    
}