#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> v;
        while(n>0){
            int lastdigit = n%10;
            v.push_back(lastdigit);

            n = n/10;
        }

        for(auto x: v) cout<<x<<" ";
        cout<<endl;
        
    }
    
    return 0;
}