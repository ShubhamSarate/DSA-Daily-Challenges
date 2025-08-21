#include<bits/stdc++.h>
using namespace std;

int yes(vector<int> &vec,int n){

    int i = 0;
    int j = n - 1;
    int imax = 0;
    int jmax = 0;
    int ans = 0;

    while(i <= j){
        imax = max(imax,vec[i]);
        jmax = max(jmax,vec[j]);

        if(imax < jmax){
            ans += imax - vec[i];
            i++;
        }
        else{
            ans += jmax - vec[j];
            j--;
        }
    }
    return ans;
}
   
int main()
{
   vector<int> vec = {2,0,2};
   int n = vec.size(); 

   cout<<yes(vec,n);
   
   return 0;
}
