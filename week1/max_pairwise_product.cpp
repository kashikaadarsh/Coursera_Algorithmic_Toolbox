#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
     sort(numbers.begin(),numbers.end());
     long long int x=numbers[n-1]*numbers[n-2];
    std::cout << x << "\n";
    return 0;
}
