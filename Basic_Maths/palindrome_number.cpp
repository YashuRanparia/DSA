#include<bits/stdc++.h>
using namespace std;

bool isNumPalindrome(int n){
    
    int temp = n;
    int revnum = 0;

    while(temp>0){
        revnum = revnum*10 + temp%10;

        temp = temp/10;
    }

    if(revnum == n) return true;

    return false;
}

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        
        if(isNumPalindrome(n)) cout<<"Yes number is Palindrome.";
        else cout<<"No the number is not Palindrome.";
    }
    
    return 0;
}