#include <iostream>
#include <vector>
#include <cstring>

struct Point {
    int x;
    int y;
};

int main() {
    std::vector<Point> source = { {1, 2}, {3, 4}, {5, 6} };
    std::vector<Point> destination(source.size());

    // Sao chép bằng memcpy: không phù hợp
    // std::memcpy(&destination[0], &source[0], source.size() * sizeof(Point)); // Không khuyến nghị

    // Sao chép bằng phương pháp hợp lệ
    std::copy(source.begin(), source.end(), destination.begin());

    std::cout << "Destination: ";
    for (const auto& point : destination) {
        std::cout << "(" << point.x << ", " << point.y << ") ";
    }
    std::cout << std::endl;

    return 0;
}