#include <bits/stdc++.h>
typedef long long int ll;
#define fr(i,n)   for(ll i=0;i<n;i++)
#define input1(n)  ll n;cin>>n;
#define test ll t;cin>>t;while(t--) ;
using namespace std;

  int main() {
	//cout<<"GfG!";
	input1(n);
	ll a[n];
	fr(i,n)
	{
	    cin>>a[i];
	    
	}
	ll flag=0;
        sort(a,a+n);
	for(ll i=0;i<n/2+n%2;i++)
	{
	    if(a[i]==a[i+n/2])
	    {
              flag=1;
               break;
            }
	}
	cout<<flag;
	return 0;
}
