#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &vec1,vector<int> &vec2){
   
   int i = vec1.size() - 1;
   int j = 0;

   while(i >= 0 && j < vec2.size()){

      if(vec1[i] > vec2[j]){
         swap(vec1[i],vec2[j]);
         i --;
         j ++;
      }
      else{
         break;
      }
   }
   sort(vec1.begin(),vec1.end());
   sort(vec2.begin(),vec2.end());
}
   
int main()
{
   vector<int> vec1 = {2,3,8};
   vector<int> vec2 = {4,6,10};
   
   merge(vec1,vec2);

   for(auto val : vec1){
      cout<<val<<" ";
   }
   cout<<endl;

   for(auto val : vec2){
      cout<<val<<" ";
   }
   
   return 0;
}
