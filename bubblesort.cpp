#include<bits/stdc++.h>
using namespace std;
void sorting(int* a,int size){
  
  
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(a[j]>a[j+1]){
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    cout<<"sorted array"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" "; 
    }

}


int main(){

int a[] = {5,8,9,2};
int size = sizeof(a)/sizeof(a[0]);
cout<<"original array"<<endl;
for(int i=0;i<size;i++){
        cout<<a[i]<<" "; 
    }
cout<<endl;
sorting(a,size);
return 0;
}