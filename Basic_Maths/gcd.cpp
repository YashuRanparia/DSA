#include<bits/stdc++.h>
using namespace std;

/*
    Euclidean's Algorithm
    Time Complexity: O(log(phi)(min(a,b)))     <-- Here division is not happening with constant divisor thus log has base phi 
    Space Complexity: O(1)
*/
int gcd_euclidean(int x, int y){

    int a = x;
    int b = y;
    while(a > 0 && b > 0){
        if(a > b) a = a%b;
        else b = b%a;
    }
    
    if(a == 0) return b;
    else return a;
}

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int x,y;
        cin>>x>>y;

        int ans = gcd_euclidean(x,y);
        
        cout<<"GCD of "<<x<<" and "<<y<<" is "<<ans<<endl;
    }
    
    return 0;
}