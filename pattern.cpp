
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    
    for(int i=1;i<=3;i++){
        int space=n-i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*n-2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    

    return 0;
}