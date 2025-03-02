#include<bits/stdc++.h>
using namespace std;

int majorityElementAlgo(vector<int> &a){
    int count=0;
    int candidate=0;
    for(int i=0;i<a.size();i++){
        if(count==0) candidate=a[i];
        if(a[i]==candidate) count++;
        else count--;
    }

    count=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==candidate) count++;
    }

    if(count>a.size()/2) return candidate;
    else return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++) cin>>a[i];

    int majorityElement=majorityElementAlgo(a);
    if(majorityElement!=-1) cout<<"Majority element is "<<majorityElement<<endl;
    else cout<<"No majority element"<<endl;
    return 0;
}