#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr;

    while (n > 0) {
        arr.push_back(n % 10);
        n /= 10;
    }
    reverse(arr.begin(), arr.end());

    int size = arr.size();

    for (int hook = 1; hook < size; hook++) {
        int l = 1, r = 1;

        for (int i = 0; i < hook; i++) {
            l *= arr[i];
        }
        for (int i = hook; i < size; i++) {
            r *= arr[i];
        }

        if (l == r) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}