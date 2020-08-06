#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<ll> fac(ll x)
{
vector<ll> v;
    for (ll i=1; i<=sqrt(x); i++) 
    { 
        if (x%i==0) 
        { 
            if (x/i == i)  
            v.push_back(i); 
            else
            {  
                 v.push_back(i); 
                v.push_back(x/i); 
            } 
        } 
    } 
    return v;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int  t;
  cin>>t;
  while(t--)
  {
  	vector<ll >  u;
  	vector<ll >  k;
  	//u.push_back(1);
  	ll n;
  	cin>>n;
    ll g;
  	for(int i=0;i<n;i++)
  	{cin>>g;
  	u.push_back(g);}
  	
  	sort(u.begin(),u.end());
  ll  x=u[0]*u[n-1];
  	u.insert(u.begin(), {1});
  	u.insert(u.end(), {x});
  	//for(int i=0;i<u.size();i++)
  	//cout<<u[i];
  	k=fac(x);
  	
   sort(k.begin(),k.end());
 
  	if(u==k)
  	cout<<x<<"\n";
  	else
  	cout<<-1<<"\n";
  	
	}  
    
    return 0;
}
