#include<bits/stdc++.h>
using namespace std;
int iterativeBinarySearch(vector<int> arr, int key) {
    int start = 0;
    int end = arr.size()-1;
    while (start <= end) {
        int mid = start+(end-start)/2;
        cout << "at: " << mid << endl;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) start = mid+1;
        else end = mid-1;
    } return -1;
}
int recursiveBinarySearch(vector<int> arr, int key, int start, int end) {
    if (start > end) return -1;
    int mid = start+(end-start)/2;
    cout << "at: " << mid << endl;
    if (arr[mid] == key) return mid;
    else if (arr[mid] < key) return recursiveBinarySearch(arr, key, mid+1, end);
    else return recursiveBinarySearch(arr, key, start, mid-1);
}
int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int key = 10;
    int ans = recursiveBinarySearch(arr, 10, 0 , arr.size()-1);
    if (ans == -1) {
        cout << "Element: " << key << " Not Found" << endl;
    } else {
        cout << "Element: " << key << " Found At: " << ans << endl;
    }
} 