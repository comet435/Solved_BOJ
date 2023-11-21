#include <iostream>
#include <algorithm>

struct Point {
    int x, y;
};

bool cmp(const Point& p1, const Point& p2) {
    if (p1.y == p2.y) {
        return p1.x < p2.x;
    }
    return p1.y < p2.y;
}

int main() {
    int num = 0;
    std::cin >> num;

    Point* points = new Point[num];

    for (int i = 0; i < num; ++i) {
        std::cin >> points[i].x >> points[i].y;
    }

    std::sort(points, points + num, cmp);

    for (int i = 0; i < num; ++i) {
        std::cout << points[i].x << " " << points[i].y << '\n';
    }

    delete[] points;

    return 0;
}
