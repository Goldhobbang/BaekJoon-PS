#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    int arr[100001];
    bool isSan = false;

    for (int i = 0; i < T; i++) {
        cin >> arr[i];

        if (i > 0) {
            if (arr[i - 1] < arr[i]) { 
                if (isSan) { 
                    cout << "NO";
                    return 0;
                }
            } 
            else if (arr[i - 1] > arr[i]) { 
                isSan = true;
            }
            else { 
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
    return 0;
}