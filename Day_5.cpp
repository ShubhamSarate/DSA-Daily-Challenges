#include<bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int> &vec){

   vector<int> ans;

   int maxx = INT_MIN;

   for(int i=vec.size()-1;i>=0;i--){

      if(vec[i] > maxx){
         ans.push_back(vec[i]);
         maxx = vec[i];
      }
   }
   reverse(ans.begin(),ans.end());
   return ans;
}
   
int main()
{
   vector<int> vec = {7,10,4,10,6,5,2};
   int n = vec.size(); 

   vector<int> ans = leader(vec);

   for(auto val : ans){
      cout<<val<<" ";
   }
   
   return 0;
}
