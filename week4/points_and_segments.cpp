#include <bits/stdc++.h>
typedef long long int ll;
#define fr(i,n)   for(ll i=0;i<n;i++)
#define input1(n)  ll n;cin>>n;
#define test ll t;cin>>t;while(t--) ;
using namespace std;
struct node{
    ll a;
    ll b;
};
bool compare(node x,node y)
{
    if(x.a==y.a)
    return x.b<y.b;
    
    return x.a<y.a;
}
  int main() {
	//cout<<"GfG!";
	input1(n);
	input1(k);
	//input1(k);
	//unordered_map<ll,ll> mp;
	//cout<<n;
	node x[n];
	fr(i,n)
	{
	    ll k,j;
	    cin>>j>>k;
	    x[i].a=j;
	    x[i].b=k;
	}
	sort(x,x+n,compare);
	//ll flag=0;
	
	while(k--)
	{
	    ll m;
	    cin>>m;
	    ll c=0;
	    ll i=0;
	    while(m>x[i].a)
	    {
	    if(m>x[i].b)
	    break;
	    else
	    c++;
	    i++;
	    }
	    cout<<c<<" ";
	    }
	return 0;
}