#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int n, int tank, vector<int> & stops) {
    // write your code here
int cf=0,lf=0;
int x=0;
while(cf<=n-2)
{
  lf=cf;
 while((cf<=n-2)&&(stops[cf+1]-stops[lf]<=tank))
  cf=cf+1;

if(cf==lf)
return -1;
if(cf<=n-2)
x++;

}
    return x;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n+2);
    stops[0]=0;
    for (size_t i = 1; i <=n; ++i)
        cin >> stops.at(i);
     stops[n+1]=d;
     //for (size_t i = 0; i <=n+1; ++i)
       // cout<<stops.at(i)<<" ";
    cout << compute_min_refills(n+2, m, stops) << "\n";

    return 0;
}
