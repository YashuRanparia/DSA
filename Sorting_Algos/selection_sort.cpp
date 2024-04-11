#include<bits/stdc++.h>
using namespace std;


/*
                    Time Complexity
    Best Case    :      O(n^2)
    Worst Case   :      O(n^2)
*/
void selection_sort(vector<int> &v){
    int n = v.size();

    for(int i = 0;i<n;i++){
        int minid = i;

        for(int j = i+1;j<n;j++){
            if(v[minid] > v[j]) minid = j;
        }

        if(minid != i) swap(v[i], v[minid]);
    }
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

        selection_sort(v);

        for(auto x: v) cout<<x<<" ";
        cout<<endl;
    }
    
    return 0;
}