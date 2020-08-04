#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    ll t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<char> v;
        for(int i=0;i<n;i++)
        {
            if(v.size()==0)
                v.push_back(s[i]);
            else if(s[i]!=v.back())
                v.pop_back();
            else
                v.push_back(s[i]);
        }
        if(v.size()==1)
            cout<<"Case #"<<k<<": "<<"Y\n";
        else
            cout<<"Case #"<<k<<": "<<"N\n";
    }
return 0;
}
