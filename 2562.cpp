#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int max = 0;
    int count = 0;
    int w[10];

    for (i = 0; i < 9; i++) {
        cin >> w[i];
    }
    for (j = 0; j < 9; j++) {
        if (max < w[j]) {
            max = w[j];
            count = j + 1;
        }
    }
    cout << max << "\n" << count;

    return 0;
}