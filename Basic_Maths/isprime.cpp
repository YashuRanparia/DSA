#include<bits/stdc++.h>
using namespace std;

/*
    Time Complexity: O(sqrt(n))
    Space Complexity: O(1)
*/
bool isPrime(int n){

    for(int i = 2;i*i<=n;i++){
        if(n%i == 0) return false;
    }
    
    return true;
}

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        if(isPrime(n)) cout<<"Yes number is Prime."<<endl;
        else cout<<"No number is not Prime."<<endl;
        
    }
    
    return 0;
}