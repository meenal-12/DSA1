#include<bits/stdc++.h>
using namespace std;

void t(int i){
    cout<<"start "<<i<<endl;
    if(i<5){
        i++;
        t(i);
    }
    cout<<"end "<<i<<endl;
}
int main(){
   t(1);
}