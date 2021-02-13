#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,j,n,a;
     cin>>n;
    int ar[n];
   
    for(i=1;i<=n;i++)
    {
        int sum=0;
        cin>>a;
        for(j=1;j<=a;j++)
        {
            cin>>ar[j];
        }
        for(j=1;j<a;j++)
        {
            sum=sum+abs(ar[j]-ar[j+1]);
            
        }
        cout<<sum+abs(ar[a]-ar[1])<<endl;
        cout<<abs(ar[a]-ar[1]);
        cout<<"vinay";
        
    }
}

