#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
   
    Node(int x){
      data = x;
      next = NULL;
     
    }
};

Node* insertAtBegin(Node* head,int data){
    
    Node* curr = head;
    Node* temp = new Node(data);
    if(curr == NULL){
        temp->next = temp;
        return temp;
    }
    temp->next = curr->next;
    curr->next = temp;
    int c = temp->data;
    temp->data = curr->data;
    curr->data = c;
    return curr;
 }

void traversal(Node* head){
       
       Node* temp = head;
       do{
           cout<<head->data<<endl;
           head = head->next;
        }while(head!=temp);
     
}

int main(){

    Node* head = NULL;
    head = insertAtBegin(head,10);
    head = insertAtBegin(head,20);
    head = insertAtBegin(head,30);
    traversal(head);

    return 0;
    
}