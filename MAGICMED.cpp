#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
unsigned long long int power(unsigned long long int a,unsigned long long int p,unsigned long long int m)
                        {
                            if(p==1)
                            return a%m;
                            
                            if(p%2==0)
                            {
                                return (power(a,p/2,m)*power(a,p/2,m))%m;                                                                                                                    
                            }
                            else
                            {
                                return (power(a,p-1,m)*power(a%m,1,m))%m;
                            }
                        }
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        unsigned long long int a,b,c,m,p,ans;
        cin>>a>>b>>c>>m>>p;
        ans=power(a,b*c,m);
        if(ans==0)
        cout<<"NO "<<0<<"\n";
        else
        cout<<"YES "<<(ans*p)%100000007<<"\n";
    }
return 0;
}
