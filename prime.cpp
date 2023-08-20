#include<bits/stdc++.h>
using namespace std;
int main(){
    //find prime number
    double n,kt;
    cout<<"Enter a valid number:";
    cin>>n;
    if(n<2){
        cout<<"Error!";
        exit(0);
    }
    if((n>1)&&(n<4)){
        cout<<"Prime number!";
        exit(0);
    }
    else{
        for(int i=2;i<n;i++){
            kt=n/i;
            if((int)kt==kt){
                cout<<"Composite number";
                exit(0);
            }
        }
    }
    cout<<"Prime number";
    return 0;
}
