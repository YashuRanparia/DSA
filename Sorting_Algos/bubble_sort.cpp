#include<bits/stdc++.h>
using namespace std;


/*
    ***Adjacent Swapping***
                    Time Complexity
    Best Case   :       O(n)
    Worst Case  :       O(n^2)
*/
void bubble_sort(vector<int> &v){
    int n = v.size();

    for(int i = n-1;i>0;i--){
        int swaps = 0;
        for(int j = 0;j<i;j++){
            if(v[j] > v[j+1]){
                swap(v[j],v[j+1]);
                ++swaps;
            }
        }

        if(swaps == 0) break;       //condition which makes bubble sort to perform in time O(n) in best case
    }

    return;
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

        bubble_sort(v);

        for(auto x: v) cout<<x<<" ";
        cout<<endl;
    }
    
    return 0;
}