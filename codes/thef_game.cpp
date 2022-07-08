#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2;
	    char r1,r2;
	    int f=1;
	    cin>>s1>>s2;
	    reverse(s1.begin(),s1.end());
	    f=s1.compare(s2);
	    if(f==0)
	    {
	        cout<<"Yes"<<endl;
	        continue;
	    }
	    else
	    {
	        r1=s1[0];
            r2=s2[0];
            s1[0]='t';
	        s2[0]='t';
            cout<<s1<<"   "<<s2;
	        f=s1.compare(s2);
	        if(f==0)
	        {
	            cout<<"Yes"<<endl;
	            continue;
	        }
	        else
	        {
                cout<<r1<<"   "<<r2;
                s1[0]=r1;
	            s2[0]=r2;
                cout<<s1<<"   "<<s2;
	            reverse(s1.begin(),s1.end());
	            s1[0]='t';
	            s2[0]='t';
                cout<<s1<<"    "<<s2;
	            f=s1.compare(s2);
	            if(f==0)
	                cout<<"Yes"<<endl;
	            else
	                cout<<"No"<<endl;
	        }
	    }
	}
	return 0;
}
