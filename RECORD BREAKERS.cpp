#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
      ll n;
      cin>>n;
      ll ar[n];
      for(int i=0;i<n;i++)
      cin>>ar[i];
      
      ll mx=0,c=0;
      if(n==1)
       cout<<"Case #"<<k<<": "<<1<<"\n";
       else
       {
      for(int i=0;i<n-1;i++)
      {
          if((ar[i]>ar[i+1])&&(ar[i]>mx))
          {c++;
          mx=ar[i];}
      }
      if(ar[n-1]>ar[n-2]&&ar[n-1]>mx)c++;
      
      
      cout<<"Case #"<<k<<": "<<c<<"\n";
    }
    }
return 0;
}
