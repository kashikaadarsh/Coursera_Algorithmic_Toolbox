#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int ll;
int a[301];
int W,n,i,j;
vector <int> dp[301];
int main() 
{
	
	cin>>W>>n;
	for(i=1;i<=n;i++)
          cin>>a[i];
	
	sort(a+1,a+n+1);
	for(i=0;i<=n;i++)
	{
	    for(j=0;j<=W;j++)
	    {
	        if(i==0||j==0)
	        {
	            dp[i].push_back(0);
	            continue;
	        }
	        dp[i].push_back(dp[i-1][j]);
	        if(a[i]<=j)
	         dp[i][j]=max(a[i]+dp[i-1][j-a[i]],dp[i][j]);
	    }
	}
	cout<<dp[n][W];
	return 0;
}