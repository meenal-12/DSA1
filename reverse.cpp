#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data = x;
    }
};

node* reverse(node* head){

     node* temp = NULL;
     node* curr = NULL;
     /*if the node is empty*/
     if(head == NULL){
         return NULL;
     }
     /*if the node is having only one node*/
     if(head->next == NULL){
         return head;
     }
     else{
         while(head->next!=NULL){
           curr = head->next;
           head->next = temp;
           temp = head;
           head = curr;
         }
         head->next = temp;
         return head;
     }
}

void printList(node* head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }

}

int main(){
     node* head = NULL;
     node* n1 = new node(10);
     node* n2 = new node(20);
     node* n3 = new node(30);
     node* n4 = new node(40);
     head = n1;
     n1->next = n2;
     n2->next = n3;
     n3->next = n4;
     n4->next = NULL;
     head = reverse(head);
     printList(head);
}