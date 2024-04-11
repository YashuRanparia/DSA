#include<bits/stdc++.h>
using namespace std;

bool isArmstrongnum(int n){
    int temp = n;
    int sum = 0;

    while (temp>0)
    {
        sum = sum + (temp%10)*(temp%10)*(temp%10);
        temp = temp/10;
    }
    
    if(sum == n) return true;
    return false;
}

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        //Number n;
        int n;
        cin>>n;

        if(isArmstrongnum(n)) cout<<"Yes it is an armstrong number.";
        else cout<<"No it is not an armstrong number.";
    }

    //Time Complexity : O(numbr of digits)
    
    return 0;
}