#include<bits/stdc++.h>
using namespace std;


/*
                    Time Complexity
    Best Case    :      O(N*log2(N))
    Worst Case   :      O(N^2)        <- When array is already sorted and we have choosen the pivot as first element
*/

int partition(vector<int> &v, int low, int high){
    int pivot = low;
    int ptr = high+1;

    for(int i = high;i>pivot;i--){
        if(v[i] > v[pivot]){
            swap(v[--ptr],v[i]);
        }
    }
    swap(v[pivot],v[--ptr]);

    return ptr;
}

void quickSort(vector<int> &v, int low, int high){
    if(low < high){
        int mid = partition(v,low,high);

        quickSort(v, low, mid-1);
        quickSort(v, mid+1, high);
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

        quickSort(v,0,n-1);

        for(auto x: v) cout<<x<<" ";
        cout<<endl;
    }
    
    return 0;
}