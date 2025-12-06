#include <iostream>
#include <cstring>

using namespace std;

int xy[100][100];

int main()
{
    int black = 0, n, x, y;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        xy[x][y] = 1;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                xy[x + j][y + i] = 1;
            }
        }
    }
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (xy[i][j] == 1) black++;
        }
    }
    cout << black;

    return 0;
}