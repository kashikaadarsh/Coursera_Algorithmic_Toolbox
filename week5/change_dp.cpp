#include <bits/stdc++.h>
typedef long long int ll;
#define fr(i,n)   for(ll i=0;i<n;i++)
#define input1(n)  ll n;cin>>n;
#define test ll t;cin>>t;while(t--) ;
using namespace std;
int min3(int a,int b,int c)
{
    if(a<=b&&a<=c)
    return a;
    else if(b<=a&&b<=c)
    return b;
    else
    return c;
}
  int main() {
	//cout<<"GfG!";
	input1(n);
	ll x;
	ll ar[1001];
	ll coin[3]={1,3,4};
	ar[1]=1;
	ar[2]=2;
	ar[3]=1;
	ar[4]=1;
	for(int i=5;i<1001;i++)
	{
	    ar[i]=min3(ar[i-1],ar[i-3],ar[i-4])+1;
	    
	}
	//fr(i,n+1)
	//cout<<a[i]<<" ";
	cout<<ar[n];
	return 0;
}