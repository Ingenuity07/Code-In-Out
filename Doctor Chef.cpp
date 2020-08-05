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
        ll n,x;
        cin>>n>>x;
        ll ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        sort(ar,ar+n);
        ll c=0,m=0;
        while((upper_bound(ar+m, ar+n, x) - ar)!=n)
        {
            ll u = upper_bound(ar+m, ar+n, x) - ar;
            u = u-1 ;
            if(((2*ar[u])>x)&&ar[u]<=x)
              {
                 x=2*ar[u];
                 ar[u]=0;
                 m=u;
              }
            else
            x=2*x;
             c++;
        }
        for(int i=0;i<n;i++)
            if(ar[i]>0)c++;

        cout<<c<<"\n";

    }
    return 0;
}
