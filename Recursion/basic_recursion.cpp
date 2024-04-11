#include<bits/stdc++.h>
using namespace std;

/*
    Time Complexity: O(n)
    Stack Space: O(n)
*/
int sum_of_first_n_nums(int n){
    if(n == 1) return 1;

    return n + sum_of_first_n_nums(n-1);
}

/*
    Time Complexity: O(n)
    Stack Space: O(n)
*/
int factorial(int n){
    if(n == 1) return 1;

    return n * factorial(n-1);
}


/*
    Time Complexity: O(2^n)
    Stack Space: O(2^n)
*/
int fibonnaci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    int num = fibonnaci(n-1) + fibonnaci(n-2);
    return num;
}

/*
    Time Complexity: O(n)
    Stack Space: O(n)
*/
void reverse_array(vector<int> &v, int l, int r){
    if(l >= r) return;

    int temp = v[l];
    v[l] = v[r];
    v[r] = temp;

    reverse_array(v,l+1,r-1);
}


/*
    Time Complexity: O(n)
    Stack Space: O(n)
*/
bool isPalindrome_recursive(string s, int l, int r){
    if(l >= r) return true;

    bool curr = (s[l] == s[r]);

    return curr && isPalindrome_recursive(s,l+1,r-1);
}


//Driver Code
int main(){

    int t;
    cin>>t;

    while (t--)
    {
        //----------------------------------------------
        // int n;
        // cin>>n;

        // int ans = fibonnaci(n);
        // cout<<ans<<endl;

        //--------------------------------------------
        // vector<int> v = {1,2,3,4,5,6,7};

        // reverse_array(v,0,v.size()-1);
        // for(auto x: v) cout<<x<<" ";
        // cout<<endl;

        //--------------------------------------------
        string s;
        cin>>s;

        if(isPalindrome_recursive(s,0,s.length()-1)) cout<<"Yes, it is Palindrome."<<endl;
        else cout<<"No, it is not Palindrome."<<endl;

    }
    
    return 0;
}