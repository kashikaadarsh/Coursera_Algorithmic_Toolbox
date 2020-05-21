#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define input1(n)  ll n;cin>>n;
#define test       ll t;cin>>t;while(t--)
#define fast       ios_base::sync_with_stdio(false);cin.tie(NULL);
ll arr[1000001];
int main() {
	//cout<<"GfG!";
	fast;
	input1(n);
	stack <long long int>st;
	arr[1]=0;
	arr[2]=1;
	arr[3]=1;
	for(ll i=4;i<1000001;i++)
	{
	    arr[i]=arr[i-1]+1;
	    if(i%2==0)
	    arr[i]=min(arr[i],arr[i/2]+1);
	    if(i%3==0)
	    arr[i]=min(arr[i],arr[i/3]+1);
	}
	//st.push(n);
	ll i=n;
	while(i>1)
	{
	    st.push(i);
	    if(arr[i]==arr[i-1]+1)
	    i-=1;
	    else if(i%2==0 && arr[i]==arr[i/2]+1)
	    i=i/2;
	    else if(i%3==0 && arr[i]==arr[i/3]+1)
	    i=i/3;
	 }
	 st.push(1);
	 cout<<arr[n]<<"\n";
	 while(!st.empty())
	 {
	     cout<<st.top()<<" ";
	     st.pop();
	 }
	return 0;
}