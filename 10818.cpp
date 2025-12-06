#include <iostream>

using namespace std;

int main()
{
    int n, i;
    int j = 0;
    int w[1000000] = {0};
    int newr = -1000001;
    int worr = 1000001;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> w[i];
    }
    for (j = 0; j < n; j++) {
        if (newr < w[j]) {
            newr = w[j];
        }
        if (worr > w[j]) {
            worr = w[j];
        }
    }
    cout << worr << " " << newr;

    return 0;
}