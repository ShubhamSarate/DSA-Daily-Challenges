#include<bits/stdc++.h>
using namespace std;

string rev(string &str){
    
    int n = str.length();
    string ans = "";
    string final = "";

    for(int i=n;i>=0;i--){
        string word = "";

        while(i>=0 &&str[i] != ' '){
            word += str[i];
            i--;
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
