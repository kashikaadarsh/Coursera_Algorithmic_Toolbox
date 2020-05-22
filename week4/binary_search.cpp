#include <iostream>
typedef long long int ll;
#define fr(i,n)   for(ll i=0;i<n;i++)
#define input1(n)  ll n;cin>>n;
#define test ll t;cin>>t;while(t--) ;
using namespace std;

ll binarySearch(ll arr[], ll l, ll r, ll x) 
{ 
    if (r >= l) { 
        ll mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 
  

int main() {
	//cout<<"GfG!";
	input1(n);
	ll a[n];
	//cout<<n;
	fr(i,n)
	cin>>a[i];
	input1(k);
	ll b[k];
	fr(i,k)
	cin>>b[i];
	fr(i,k)
	{
	    //cout<<b[i]<<" ";
	    cout<<binarySearch(a,0,n-1,b[i])<<" ";
	}
	
	
	return 0;
}