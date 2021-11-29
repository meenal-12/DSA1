#include<bits/stdc++.h>
using namespace std;
struct Node{
    int x;
    Node* next;
    Node(int data){
    x = data; 
    next = NULL;
    }
};

Node* insertAtEnd(Node** head,Node* tail,int data){

    
    Node* temp = new Node(data);
    if(*head == NULL){
        *head = temp;
        return temp;
    }
    tail->next = temp;
    temp->next = *head;
    tail = temp;

}

void traversal(Node* head){
       
       Node* temp = head;
       do{
           cout<<head->x<<endl;
           head = head->next;
        }while(head!=temp);
     
}

int main(){
    Node* head = NULL;
  
    Node* tail = NULL;
    tail = insertAtEnd(&head,tail,10);
    tail = insertAtEnd(&head,tail,20);
    tail = insertAtEnd(&head,tail,30);
    traversal(head);
    
}