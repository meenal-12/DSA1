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

void traversal(Node* head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }

}
int main(){
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    head->next = temp1;
    temp1->previous = head;
    temp1->next = temp2;
    temp2->previous = temp1;
    traversal(head);
    
}