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

Node* sortedinsert(Node* head,int x){

    Node* temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    while(head!=NULL){
        if(head->data<x){
            if(head->next->data > x){
                temp->next = head->next;
                head->next = temp;
                break;
            }
            else{
                head = head->next;
            }
        else{
            
        }
        }
    }


}
int main(){
    Node* head = NULL;
    head = sortedinsert(head,10);
    return 0;
}