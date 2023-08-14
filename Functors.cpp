#include "Functors.h"
#include <algorithm>
#include <functional>
#include <stdexcept>

int FindMin::operator()(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        throw std::runtime_error("Vector is empty");
    }
    return *std::min_element(numbers.begin(), numbers.end());
}

int FindMax::operator()(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        throw std::runtime_error("Vector is empty");
    }
    return *std::max_element(numbers.begin(), numbers.end());
}

void SortDescending::operator()(std::vector<int>& numbers) {
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());
}

void SortAscending::operator()(std::vector<int>& numbers) {
    std::sort(numbers.begin(), numbers.end());
}

void IncreaseBy::operator()(std::vector<int>& numbers) {
    for (int& num : numbers) {
        num += value;
    }
}

void DecreaseBy::operator()(std::vector<int>& numbers) {
    for (int& num : numbers) {
        num -= value;
    }
}

void RemoveValue::operator()(std::vector<int>& numbers) {
    numbers.erase(std::remove(numbers.begin(), numbers.end(), targetValue), numbers.end());
}