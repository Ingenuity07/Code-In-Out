#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,b,a;
    cin>>n>>b>>a;
    ll ba=b,ac=a;
    ll ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    for( i=0;i<n;i++)
    {
    	if(ba==0&&ac==0)
    	break;
		 	
    	if(ac==a)
    	ac--;
    	else if(ar[i]==0&&ac>0)
    	ac--;
    	else if(ar[i]==1&&ba>0)
    	{ba--;
    	if(ac<a)
    	ac++;}
    	else
    	{
    		if(ba>0)
    		ba--;
    		else if(ac>0)
    		ac--;
		}
    }
	cout<<i;
    return 0;
}
