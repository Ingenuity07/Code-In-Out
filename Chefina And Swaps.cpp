#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,mi=1000000001,a,b;
      cin>>n;
      unordered_map<ll, ll> m1,m2,m3;
      set<ll> s1,s2;
      vector<ll> v;
      set <ll> :: iterator itr; 
      for (int i = 0; i<n; i++)
	   { 
	        cin>>a;
	        mi=min(mi,a);
	        s1.insert(a);
            if (m1.find(a) == m1.end()) 
            m1[a] = 1; 
            else 
            m1[a]++; 
            
            if (m3.find(a) == m3.end()) 
            m3[a] = 1; 
            else 
            m3[a]++; 
        } 
        
        for (int i = 0; i<n; i++)
	   { 
	        cin>>b;
	        mi=min(mi,b);
	        s2.insert(b);
            if (m2.find(b) == m2.end()) 
            m2[b] = 1; 
            else 
            m2[b]++; 
            
            if (m3.find(b) == m3.end()) 
            m3[b] = 1; 
            else 
            m3[b]++; 
        } 
        ll flag=0;
        for (itr = s1.begin(); itr != s1.end(); ++itr) 
        { 
             if(m3[*itr]%2==1)
			 {flag=1;
			 break;}
			 else
			 {
			 	if(m1[*itr]>(m3[*itr]/2))
			 {	ll k=(m1[*itr]-(m3[*itr]/2));
			 	while(k--)v.push_back(*itr);}
			  } 	  
        } 
        if(flag==1)cout<<-1<<"\n";
        else{
        for (itr = s2.begin(); itr != s2.end(); ++itr) 
        { 
             if(m3[*itr]%2==1)
			 {flag=1;
			 break;}
			 else
			 {
			 	if(m2[*itr]>(m3[*itr])/2)
			 	{ll k=(m2[*itr]-(m3[*itr]/2));
			 	while(k--)v.push_back(*itr);}
			  } 
        } 
        if(flag==1)cout<<-1<<"\n";
        else
        {
        	sort(v.begin(),v.end());
        	ll sum=0;
        	for(int i=0;i<(v.size())/2;i++)
			  sum=sum+min(v[i],(2*mi));	
			  
			  cout<<sum<<"\n";
		}
        }
    } 
return 0;
}