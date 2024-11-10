#include<bits/stdc++.h>
using namespace std;
int interpolationSearch(vector<int>& arr, int key) {
    int start = 0;
    int end = arr.size()-1;
    while (start <= end && key >= arr[start] && key <= arr[end]) {
        int loc = start + ((key - arr[start]) * (end - start)) / (arr[end] - arr[start]);
        if (start <= loc && loc <= end) {
            // cout << "at: " << arr[loc] << endl;
            if (key == arr[loc]) return loc;
            else if (key < arr[loc]) end = loc-1;
            else start = loc+1;
        } 
    } return -1;
}
int main() {
    // vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    vector<int> arr = {1,4,9,14,19,21,29,30,37,44,67,77};
    int key = 45;
    int ans = interpolationSearch(arr, key);
    if (ans == -1) {
        cout << "Key: " << key << " Not Found" << endl;
    } else {
        cout << "Key: " << key << " Found At: " << ans << endl;
    }
}