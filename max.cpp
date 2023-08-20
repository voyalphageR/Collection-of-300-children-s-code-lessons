#include<bits/stdc++.h>
using namespace std;
int main()
{
    //This program finds the maximum value in a list of numbers
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int max=a[1];
    for(int i=1;i<=n;i++){
        if (a[i]>max){
            max=a[i];
        }
    }
    cout<<max;
    return 0;
}
