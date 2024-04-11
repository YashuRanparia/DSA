#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> v(n,0);
        for(int i = 0;i<n;i++) cin>>v[i];

        /*
                                                                Time complexity
            insertion of the elements is :                         O(log(N))
            accessing the elements:                                O(1)
        */
        map<int,int> m;
        for(auto x: v) m[x]++;

        for(auto x: m) cout<<x.first<<" "<<x.second<<endl;
    }
    
    return 0;
}