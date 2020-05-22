#include <iostream>

int get_change(int n) {
  //write your code here
int count=0;
count+=n/10;
n=n-10*(n/10);
count+=n/5;
n=n-5*(n/5);
count+=n;
//std::cout<<n<<"\n";
  return count;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
