#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,y;
	    string s;
	    cin>>n>>s;
	    x=0;
	    y=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='m')
	            {
	                if(x==0||x==2)
	                    x++;
                    if(x==3)
                        break;
	            }
	        else if(s[i]=='o')
	            {
	                if(x==1)
	                    x++;
	            }
	        else if(s[i]=='d')
	            {
	                if(y==0||y==2)
	                    y++;
                    if(y==3)
                        break;
	            }
	        else if(s[i]=='a')
	            {
	                if(y==1)
	                    y++;
	            }
	    }
	    if(x==3)
	        cout<<"Mom"<<endl;
	    else if(y==3)
	        cout<<"Dad"<<endl;
	    else
	        cout<<"Goo-Goo"<<endl;
	}
	return 0;
}
