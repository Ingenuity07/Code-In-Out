#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(int p=1;p<=t;p++)
    {
      ll k;
      cin>>k;
      ll ar[k];
      for(int i=0;i<k;i++)
      cin>>ar[i];
     
      if(k==1)
        cout<<"Case #"<<p<<": "<<0<<"\n";
        else
        {
      ll c=0;
     ll h=1,l=1;
      for(int i=1;i<k;i++)
      {
         if(ar[i]>ar[i-1]&&h<4)
         {h++;
          l=1;         
         }
         else if(ar[i]>ar[i-1])
         {
             l=1;
             h=1;
             c++;
         }
         else if(ar[i]<ar[i-1]&&l<4)
         {   h=1;
             l++;
         }
         else if(ar[i]<ar[i-1])
         {
             h=1;
             l=1;
             c++;
         }
      }
      cout<<"Case #"<<p<<": "<<c<<"\n";
        }
    }
return 0;
}
