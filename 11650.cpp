#include <iostream>
#include <algorithm>
using namespace std;

struct Point {
    int x, y;
};

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    struct Point points[100001];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> points[i].x >> points[i].y;
    }
    sort(points, points + N, [](const Point& a, const Point& b) {
        if (a.x == b.x) return a.y < b.y;
        return a.x < b.x;
        });
    for (int i = 0; i < N; i++) {
        cout << points[i].x << ' ' << points[i].y << '\n';
    }
return 0;
}

