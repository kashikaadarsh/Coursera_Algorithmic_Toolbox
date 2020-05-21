#include <bits/stdc++.h>
typedef long long int ll;
#define fr(i,n)   for(ll i=0;i<n;i++)
#define input1(n)  ll n;cin>>n;
#define test ll t;cin>>t;while(t--) ;
using namespace std;
int min3(int x, int y, int z) 
{ 
    return min(min(x, y), z); 
} 

  int main() {
	string a,b;
	cin>>a>>b;
	ll n=a.length();
	ll m=b.length();
	ll dp[n+1][m+1];
	for(ll i=0;i<=n;i++)
	{
	    for(ll j=0;j<=m;j++)
	    {
	        if(i==0)
	        dp[i][j]=j;
	        else if(j==0)
	        dp[i][j]=i;
	        else if(a[i-1]==b[j-1])
	        dp[i][j]=dp[i-1][j-1];
	        else
	        dp[i][j]=min3(dp[i-1][j-1],dp[i-1][j],dp[i][j-1])+1;
	    }
	}
	cout<<dp[n][m];
	return 0;
}