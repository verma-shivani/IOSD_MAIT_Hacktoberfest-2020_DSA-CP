#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,m,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m>>k;
        if(k>=abs(n-m))
        {
            cout<<"0"<<endl;
        }
        else
        cout<<abs(n-m)-k<<endl;
    }
}
