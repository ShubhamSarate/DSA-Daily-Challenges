#include<bits/stdc++.h>
using namespace std;

void sort0s102s(vector<int> &vec,int n){

   int l = 0;
   int mid = 0;
   int r = n - 1;

   while(mid <= r){

      if(vec[mid] == 0){

         swap(vec[mid],vec[l]);
         mid ++;
         l ++;
      }
      else if(vec[mid] == 1){
         mid ++;
      }
      else{  //if(vec[mid] == 2)
         swap(vec[mid],vec[r]);
         r --;
      }
   }
}
   
int main()
{
   vector<int> vec = {0,1,2,1,0,2,1,0};
   int n = vec.size(); 

   sort0s102s(vec,n);

   for(auto val : vec){
      cout<<val<<" ";
   }
   
   return 0;
}
