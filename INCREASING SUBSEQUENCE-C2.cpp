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
	int i=0,l=n-1,m=0,cm=0,ck=0,k=0;
	vector<char> ch;
	while(n--)
	{
	if((l-i)>0)
		{
		if(ar[i]>m&&ar[l]>m)
			{   
			 if(ar[i]==ar[l])
				{
			     k=m;
					while(ar[i]>k)
					{
						cm++;
						k=ar[i];
						i++;
					}
					k=m;
					while(ar[l]>k)
					{
						ck++;
						k=ar[l];
						l--;
					}
					int mx=max(cm,ck);
					if(mx==cm)
					{
				        while(cm--)
						ch.push_back('L');
						break;
					}
					else if(mx==ck)
					{
						while(ck--)
						ch.push_back('R');
						break;
					}	
				}
				else if(ar[i]<ar[l])
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
			else if(ar[i]>m)
			{
				m=ar[i];
				i++;
				ch.push_back('L');
			}
			else if(ar[l]>m)
			{
				m=ar[l];
				l--;
				ch.push_back('R');
			}
		}
		else
		{
			if(ar[i]>m)
			ch.push_back('L');
			else if(ar[l]>m)
			ch.push_back('R');
		}	
	}
	int s=ch.size();
	cout<<s<<"\n";
	for(int i=0;i<s;i++)
	cout<<ch[i];
}
