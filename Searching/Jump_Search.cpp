#include<bits/stdc++.h>
using namespace std;
int jumpSearch(vector<int>& arr, int key) {
    int n = arr.size();
    int jumpSize = sqrt(n);
    int j = jumpSize;
    int prev = 0;
    while (arr[min(j,n)-1] < key) {
        prev = j;
        j += jumpSize;
        if (prev >= n) return -1;
    }
    while (arr[prev] < key) {
        prev++;
        if (prev == min(j, n)) return -1;
    }
    if (arr[prev] == key) return prev;
    return -1;
}
int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int key = 10;
    int ans = jumpSearch(arr, 10);
    if (ans == -1) {
        cout << "Element: " << key << " Not Found" << endl;
    } else {
        cout << "Element: " << key << " Found At: " << ans << endl;
    }
}