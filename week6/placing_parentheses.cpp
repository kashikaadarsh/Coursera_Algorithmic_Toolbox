#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll m[30][30],M[30][30];
ll operation(ll a,ll b,ll op)
{
    if(op=='*')
     return a*b;
    if(op=='-')
     return a-b;
    return a+b;
}
void update(ll i,ll j,ll n[],char op[])
{
    ll k,mn=INT_MAX,mx=INT_MIN,a,b,c,d;
    if(i==j)
    {
        m[i][j]=n[i];
        M[i][j]=n[i];
    }
    else
    {
        for(int k=i;k<j;k++)
        {
            a=operation(M[i][k],M[k+1][j],op[k]);
            b=operation(m[i][k],m[k+1][j],op[k]);
            c=operation(M[i][k],m[k+1][j],op[k]);
            d=operation(m[i][k],M[k+1][j],op[k]);
            mn=min(mn,min(a,min(b,min(c,d))));
            mx=max(mx,max(a,max(b,max(c,d))));
        }
        M[i][j]=mx;
        m[i][j]=mn;
    }
}
int main() 
{
	string s;
	ll i,j,n[30],ns=0,os=0;
	char op[30];
	cin>>s;
	for(i=0;i<s.length();i++)
	{
	    if(i%2==0)
	     n[ns++]=s[i]-48;
	    else
	     op[os++]=s[i];
	}
	for(i=0;i<ns;i++)
	{
	    for(j=0;j<ns;j++)
	    {
	        update(j,j+i,n,op);
	    }
	}
	cout<<M[0][ns-1];
	return 0;
}