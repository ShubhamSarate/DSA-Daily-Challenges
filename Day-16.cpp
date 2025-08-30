#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b; 
}

int main() {
    long long N, M;
    cout<<"Enter first value : ";
    cin >> N;
    cout<<endl;
    cout<<"Enter second value : ";
    cin >> M;
    cout<<endl;

    cout << lcm(N, M) << endl;

    return 0;
}
