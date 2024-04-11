#include<bits/stdc++.h>
using namespace std;


/*
    ***Adjacent Swapping***
                    Time Complexity
    Best Case   :       O(n)
    Worst Case  :       O(n^2)
*/
void insertion_sort(vector<int> &v){
    int n = v.size();

    for(int i = 0;i<n;i++){
        int ptr = i;
        while(ptr>0 && v[ptr] < v[ptr-1]){
            swap(v[ptr],v[ptr-1]);
            --ptr;
        }
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

        insertion_sort(v);

        for(auto x: v) cout<<x<<" ";
        cout<<endl;
    }
    
    return 0;
}