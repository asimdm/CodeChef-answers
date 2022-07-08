#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,m=0;
    multimap<string,int> a;
	cin>>t;
	while(t--)
	{
	    string f,p;
	    int e;
	    cin>>f;
	    if(f=="entry")
	    {
	        cin>>p;
	        cin>>e;
	        a.insert(pair<string,int>(p,e));
        }
	    else
	    {
	        cin>>p;
	        cin>>e;
	        multimap<string,int>::iterator z=a.find(p);
	        cout<<z->first;
	        if(z!=a.end())
	            {
	                int x=e-z->second;
	                if(x%60==0)
	                    m=m+(x/60);
	                else
	                {
	                    m+=((x+(x%60))/60);
	                }
	                cout<<m<<endl;
	            }
	    }

	}
	cout<<((60*a.size())+(m-a.size())*30);
	return 0;
}
