#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> sss(vector<int>&arr){
    unordered_map<int,vector<int>> mp;
    vector<pair<int,int>> ans;
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        if (sum == 0) {
            ans.push_back({0, i});
        }
        if (mp.find(sum) != mp.end()) {
            for (int idx : mp[sum]) {
                ans.push_back({idx + 1, i});
            }
        }
        mp[sum].push_back(i);
    }
    return ans;
}

int main() {
 
    vector<int> arr = {4,-1,-2,1,2,-1};
    vector<pair<int,int>>subarr = sss(arr);

    for (auto p : subarr) {
        cout<<"("<<p.first<<","<<p.second<<")"<<endl;
    }
    return 0;
}
