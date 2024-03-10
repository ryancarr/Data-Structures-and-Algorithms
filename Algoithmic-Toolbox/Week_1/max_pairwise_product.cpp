#include <iostream>
#include <vector>

/// @brief Find the maximum product possible using the two largest numbers in the vector
/// @param numbers The vector of numbers we're examining
/// @return The maximum product
long long MaxPairwiseProduct(const std::vector<int> &numbers) {
    int n = numbers.size();
    int first_index = -1, second_index = -1;

    for(int i = 0; i < n; ++i) {
        if (first_index == -1 || numbers[i] > numbers[first_index])
            first_index = i;
    }

    for(int j = 0; j < n; ++j) {
        if (j != first_index && (second_index == -1 || numbers[j] > numbers[second_index]))
            second_index = j;
    }

    return ((long long) numbers[first_index]) * numbers[second_index];
}

int main() {
    int n = 0;
    std::cin >> n;
    std::vector<int> numbers(n);

    for (int i = 0; i < n; i++){
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers);
}