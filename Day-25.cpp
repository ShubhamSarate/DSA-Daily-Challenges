#include<bits/stdc++.h>
using namespace std;

bool ArmStrong(int n){

    int original = n;
    int sum = 0;

    int digits = 0;
    int temp = n;

    while(temp != 0){
        digits ++;
        temp /= 10;
    }

    temp = n;
    while(temp != 0){
        int val = temp % 10;
        sum += pow(val,digits);
        temp /= 10;
    }
    return (original == sum);
}
   
int main()
{
   int n = 711;

   if(ArmStrong(n)){
    cout<<"Yes";
   }
   else{
    cout<<"No";
   }
   
   return 0;
}