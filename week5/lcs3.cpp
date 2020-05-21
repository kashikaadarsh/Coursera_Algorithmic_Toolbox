#include <bits/stdc++.h>
typedef long long int ll;
#define fr(i,n)   for(ll i=0;i<n;i++)
#define input1(n)  ll n;cin>>n;
#define test ll t;cin>>t;while(t--) ;
using namespace std;
int max3(int x, int y, int z) 
{ 
    return max(max(x, y), z); 
} 

  int main() {
	input1(n);
	ll a[n];
	fr(i,n)
	cin>>a[i];
	input1(m);
	ll b[m];
	fr(i,m)
	cin>>b[i];
	input1(p);
	ll c[p];
	fr(i,p)
	cin>>c[i];
	ll dp[n+1][m+1][p+1];
	for(ll i=0;i<=n;i++)
	{
	    for(ll j=0;j<=m;j++)
	    {
	        for(ll k=0;k<=p;k++)
	        {
	        if(i==0||j==0||k==0)
	        dp[i][j][k]=0;
	        
	        else if(a[i-1]==b[j-1]&&a[i-1]==c[k-1])
	        dp[i][j][k]=dp[i-1][j-1][k-1]+1;
	        else
	        dp[i][j][k]=max3(dp[i-1][j][k],dp[i][j-1][k],dp[i][j][k-1]);
	        }
	    }
	}
	cout<<dp[n][m][p];
	return 0;
}