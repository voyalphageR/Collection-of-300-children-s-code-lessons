#include<bits/stdc++.h>
using namespace std;
bool prime(int a) {
    if (a <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    if (prime(n)==true) {
        cout<<"Prime number";
    }
    else {
        cout<<"Composite number";
    }
    return 0;
}
