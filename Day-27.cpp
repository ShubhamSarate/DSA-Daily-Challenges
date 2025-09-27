#include<bits/stdc++.h>
using namespace std;

int Stock(vector<int> &vec,int &n){

    int Buy = vec[0];
    int ans = INT_MIN;

    for(int i=1;i<n;i++){

        if(vec[i] > Buy){
            ans = max(ans,vec[i] - Buy);
        }
        Buy = min(Buy,vec[i]);
    }
    return ans;
}
   
int main()
{
   vector<int> vec = {7,1,5,3,6,4};
   int n = vec.size(); 

   cout<<"Maximum Profit : "<<Stock(vec,n);
   
   return 0;
}