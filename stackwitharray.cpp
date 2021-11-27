#include<bits/stdc++.h>
using namespace std;

int insertAtTop(int* a,int curr,int size,int val){
        
        
        
        if(curr == size-1){
            cout<<"stack is full"<<endl;
            return curr;
        }
        else{
            curr++;
            a[curr] = val;
            return curr;
        }
}

int insertAtBottom(int* a,int curr,int size,int val){
        
        const int start = (curr == size - 1) ? curr : curr +1;
        
        for(int i= start ;i>0;i--)
           {
             a[i+1] = a[i];
           }
        a[0] = val;

        return start;
      

}


void printStack(int* a,int curr){
    while(curr>-1){
       
        cout<<a[curr]<<endl;
        curr--;
    }

}

int main(){
    int size = 10,curr = -1,val;
    int a[10];
   
    curr = insertAtTop(a,curr,size,20);
    curr = insertAtTop(a,curr,size,30);
    curr = insertAtTop(a,curr,size,40);
    cout<<"before inserting at bottom"<<endl;
    printStack(a,curr);
    curr = insertAtTop(a,curr,size,50);
    cout<<"after inserting at bottom"<<endl;
    printStack(a,curr);

}