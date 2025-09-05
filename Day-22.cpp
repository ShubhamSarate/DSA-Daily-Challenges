#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int firstElementKTimes(const vector<int>& arr, int k) {
    unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }
    for (int num : arr) {
        if (freq[num] == k) {
            return num;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {3, 1, 4, 4, 5, 2, 6, 1, 4};
    int k = 2;
    cout << firstElementKTimes(arr1, k) << endl;

    return 0;
}
