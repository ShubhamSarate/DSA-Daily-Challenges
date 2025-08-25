#include<iostream>
#include<vector>
#include<string>
using namespace std;

void permutation(string &str,vector<string> &ans,int i){

 if(i == str.size()){
     ans.push_back(str);
     return;
 }
 
 for(int j=i;j<str.size();j++){
     bool isokay = true;
     for(int k=i;k<j;k++){
         if(str[k] == str[j]){
             isokay = false;
             break;
         }
     }
     if(!isokay) continue;
     swap(str[j],str[i]);
     permutation(str,ans,i+1);
     swap(str[j],str[i]);
 }
}

int main()
{
    string str = "abc";
    vector<string> ans;
    
    sort(str.begin(),str.end());
    
    permutation(str,ans,0);
    
       for(auto &val : ans){
           cout<<val<<" ";
       }
       cout<<endl;
    
    return 0;
}
