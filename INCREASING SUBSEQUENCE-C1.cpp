#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int ar[n];
     for(int i=0;i<n;i++)
     {
     	cin>>ar[i];
	 }
	 int i=0,l=n-1;
	int m=0;
	vector<char> ch;
	while(n--)
	{
		if(ar[i]>m&&ar[l]>m)
		{
			if(ar[i]<ar[l])
			{
				m=ar[i];
				i++;
				ch.push_back('L');
			}
			else
			{
				m=ar[l];
				l--;
				ch.push_back('R');
			}
		}
		else if((ar[i]>m))
		{
		   m=ar[i];
		   i++;
		   ch.push_back('L');	
		}
		else if((ar[l]>m))
		{
			m=ar[l];
			l--;
			ch.push_back('R');
		}
		else
		break;
		}
    int s=ch.size();
     cout<<s<<'\n';
    
     for(int i=0;i<s;i++)
     {
         cout<<ch[i];
     }
}
 
 
