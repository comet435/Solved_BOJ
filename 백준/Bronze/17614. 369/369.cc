#include <iostream>

int count369(int num) {
    int count = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit == 3 || digit == 6 || digit == 9) {
            count++;
        }
        num /= 10;
    }

    return count;
}


int countClaps(int N) {
    int totalClaps = 0;

    for (int i = 1; i <= N; ++i) {
        totalClaps += count369(i);
    }

    return totalClaps;
}

int main() {
    int N;
    std::cin >> N;

    int result = countClaps(N);

    std::cout  << result;

    return 0;
}
