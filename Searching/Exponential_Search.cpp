#include <bits/stdc++.h>
using namespace std;

int recursiveBinarySearch(vector<int> arr, int key, int start, int end) {
    if (start > end) return -1;
    int mid = start+(end-start)/2;
    cout << "at: " << mid << endl;
    if (arr[mid] == key) return mid;
    else if (arr[mid] < key) return recursiveBinarySearch(arr, key, mid+1, end);
    else return recursiveBinarySearch(arr, key, start, mid-1);
}

int exponentialSearch(vector<int>& arr, int key) {
    int n = arr.size();
    if (arr[0] == key) return 0;
    int i = 1;
    while (i < n && arr[i] <= key) i*=2;
    return recursiveBinarySearch(arr, key, i/2, min(i, n - 1));
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    int key = 17;
    int ans = exponentialSearch(arr, key);
    if (ans == -1) {
        cout << "Key: " << key << " Not Found" << endl;
    } else {
        cout << "Key: " << key << " Found At: " << ans << endl;
    }
}
