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

        int maxel = *max_element(v.begin(),v.end());

        /*
            NOTE:   Maximum array size allowed inside main function is [ 10^6 ] for int datatype
                    If array if declared outside the main function then maximum size allowed is ~ [ 10^7 ]
        */
        vector<int> hash(maxel+1,0);
        for(int i = 0;i<n;i++){
            hash[v[i]]++;
        }

        for(int i = 0;i<hash.size();i++){
            cout<<i<<" "<<hash[i]<<endl;
        }
    }
    
    return 0;
}