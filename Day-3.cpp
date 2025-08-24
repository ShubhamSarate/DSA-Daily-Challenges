#include<bits/stdc++.h>
using namespace std;

int Duplicate(vector<int> &vec){

   int i = vec[0];
   int j = vec[0];

   do{
      i = vec[i];
      j = vec[vec[j]];
   }while(i != j);

   i = vec[0];

   while(i != j){
      i = vec[i];
      j = vec[j];
   }
   return i;
}
   
int main()
{
   vector<int> vec = {1,4,4,2,3};
   
   cout<<Duplicate(vec);
   
   return 0;
}
