#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        //Number n;
        int n;
        cin>>n;

        vector<int> divisors;
        for(int i = 1;i*i <= n;i++){
            if(n%i == 0){
                divisors.push_back(i);
                if(n/i != i) divisors.push_back(n/i);
            }
        }

        sort(divisors.begin(),divisors.end());  //rearrange divisors in ascending order

        for(auto x: divisors) cout<<x<<" ";
        cout<<endl;
    }

    //Time Complexity : O(sqrt(n))
    
    return 0;
}