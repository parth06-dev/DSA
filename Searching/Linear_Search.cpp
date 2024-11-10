#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> arr, int key) {
    for (int i=0; i<arr.size(); i++) {
        if (arr[i] == key) return i;
    } return -1;
}
int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int key = 10;
    int ans = linearSearch(arr, 10);
    if (ans == -1) {
        cout << "Element: " << key << " Not Found" << endl;
    } else {
        cout << "Element: " << key << " Found At: " << ans << endl;
    }
} 
