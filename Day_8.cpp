#include<bits/stdc++.h>
using namespace std;

string rev(string &str){

    reverse(str.begin(),str.end());
    
    int n = str.length();
    string ans = "";
    string final = "";

    for(int i=0;i<n;i++){
        string word = "";

        while(i<n &&str[i] != ' '){
            word += str[i];
            i++;
        }
        if(word.length() > 0){
            reverse(word.begin(),word.end());
            ans += " " + word;
        }
    }
    return ans.substr(1);
}
   
int main()
{
   string str = "a good  example"; 
   cout<<rev(str);
   
   return 0;
}
