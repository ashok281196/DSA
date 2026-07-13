#include <bits/stdc++.h>

using namespace std;

vector<int> ngr(vector<int>& arr , int n){
    vector<int> res(n);
    stack<int> st;

    for(int i = n-1; i>=0; i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }

        res[i] = (st.empty() ? -1 : st.top());
        st.push(arr[i]);
    }
    return res;
}

vector<int> ngl(vector<int>& arr , int n){
    vector<int> res(n);
    stack<int> st;

    for(int i = 0; i < n; i++){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }

        res[i] = (st.empty() ? -1 : st.top());
        st.push(arr[i]);
    }
    return res;
}

int main(){
    
    vector<int> arr = {1, 4, 2, 5, 7, 3, 12};
    int n = arr.size();

    vector<int> resNGR = ngr(arr, n);

    for(int i = 0 ; i < n ; i++){
        cout << resNGR[i] << " "; 
    }
    cout <<endl;
    return 0;
}