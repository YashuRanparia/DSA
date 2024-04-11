#include<bits/stdc++.h>
using namespace std;


/*
                    Time Complexity
    Best Case    :      O(N*log2(N))
    Worst Case   :      O(N*log2(N))
*/

void merge_parts(vector<int> &v, int low, int mid, int high){
    vector<int> part(high-low+1,0);
    
    int l = low, r = mid+1,id = 0;
    while(l<=mid || r<=high){
        if(l>mid){
            part[id] = v[r];
            ++id;
            ++r;
        }else if(r>high){
            part[id] = v[l];
            ++id;
            ++l;
        }else{
            if(v[l] <= v[r]){
                part[id] = v[l];
                ++l;
                ++id;
            }else{
                part[id] = v[r];
                ++r;
                ++id;
            }
        }
    }

    for(int i = low, ptr = 0;i<=high;i++,ptr++){
        v[i] = part[ptr];
    }
}

void merge__sort(vector<int> &v, int low, int high){
    if(low < high){
        int mid = (low+high)/2;

        merge__sort(v,low,mid);
        merge__sort(v,mid+1,high);
        merge_parts(v,low,mid,high);
    }
    return;
}


//Driver code
int main(){

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> v(n,0);

        for(int i = 0;i<n;i++) cin>>v[i];

        merge__sort(v,0,n-1);

        for(auto x: v) cout<<x<<" ";
        cout<<endl;
    }
    
    return 0;
}