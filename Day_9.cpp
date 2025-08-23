#include<bits/stdc++.h>
using namespace std;

string prefixCommon(vector<string> &str){

    if(str.empty()){
        return "";
    }
    sort(str.begin(),str.end());

    string ans = "";
    string first = str.front();
    string last = str.back();

    int len = min(first.size(),last.size());

    for(int i=0;i<len;i++){

        if(first[i] == last[i]){
            ans += first[i];
        }
        else{
            break;
        }
    }
    return ans;
}
   
int main()
{
   vector<string> str = {"flower","flow","flight"};
   
   cout<<prefixCommon(str);
   
   return 0;
}
