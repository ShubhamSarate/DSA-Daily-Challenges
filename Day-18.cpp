#include <iostream>

using namespace std;

long long countFactors(long long n) {
    long long count = 0;
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            if (i * i == n)
                count += 1; 
            else
                count += 2; 
        }
    }
    return count;
}


int main() {
    long long n;
    cout << "Enter value of N: ";
    cin >> n;
    cout << "N: " << countFactors(n) << endl;
    return 0;
}

