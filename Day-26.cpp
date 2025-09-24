#include<bits/stdc++.h>
using namespace std;

// ................ Maximum Water Contain ................. //

int MaxWater(vector<int> &vec){

   int st = 0;
   int end = vec.size()-1;
   int maxi = 0;

   while(st < end){

      int height = min(vec[st],vec[end]);
      int width = end - st;
      int area = height * width;

      maxi = max(maxi,area);

      if(vec[st] < vec[end]){
         st ++;
      }
      else{
         end --;
      }
   }
   return maxi;
}
   
int main()
{
   vector<int> vec = {1,8,6,2,5,4,8,3,7};

   cout<<"Maximum Water Contain : "<<MaxWater(vec);
   
   return 0;
}