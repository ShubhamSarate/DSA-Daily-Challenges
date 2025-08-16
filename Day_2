#include<bits/stdc++.h>
using namespace std;

int MissingValue(vector<int> &vec,int n){

   int actual = 0;
   int expect = 0;
   int ans;

   for(int i=0;i<n-1;i++){
      actual += vec[i];
   }
   expect = n * (n+1)/2;

   return ans = expect - actual;
}
   
int main()
{
   vector<int> vec = {1};
   int n = vec.size()+1; 

   cout<<MissingValue(vec,n);
   
   return 0;
}
