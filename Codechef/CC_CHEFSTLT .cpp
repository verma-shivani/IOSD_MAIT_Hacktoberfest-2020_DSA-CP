#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b;
	    cin>>a>>b;
	    int len=a.length();
	    
	    int c1=0,c2=0,c3=0,c4=0,c5=0;
	    
	    for(int i=0;i<len;i++)
	    {
	        if(a[i]<='z'&&a[i]>='a' && b[i]=='?')c1++;
	        else if(b[i]<='z'&&b[i]>='a' && a[i]=='?')c2++;
	        else if(a[i]=='?' && b[i]=='?')c3++;
	        else if(a[i]==b[i])c4++;
	        else if(a[i]!=b[i])c5++;
	    }
	    cout<<len-c1-c2-c3-c4;
	    cout<<" "<<len-c4<<"\n";
	}
	
	
	
	return 0;
}
