#include<bits/stdc++.h>
using namespace std;


/*
    Time Complexity     : O(n)
    Space Complexity    : O(1)
*/
int maxSum_kadanesAlgo(vector<int> v){
    int maxSum = 0;
    int sum = 0;
    int n = v.size();

    //carry the sum forward if it is greater than 0
    for(int i = 0;i<n;i++){
        if(sum+v[i] > 0){
            sum = sum + v[i];
            maxSum = max(maxSum, sum);
        }
    }

    return maxSum;
}

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> v(n,0);

        for(int i = 0;i<n;i++) cin>>v[i];

        int ans = maxSum_kadanesAlgo(v);

        cout<<ans<<endl;
    }
    
    return 0;
}