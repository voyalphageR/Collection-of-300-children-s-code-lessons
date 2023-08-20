#include<bits/stdc++.h>
using namespace std;
int main()
{
    //This program finds the minimum value in a list of numbers
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int min=a[1];
    for(int i=1;i<=n;i++){
        if (a[i]<min){
            min=a[i];
        }
    }
    cout<<min;
    return 0;
}
