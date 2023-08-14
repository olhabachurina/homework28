#pragma once
#include <vector>
class FindMin {
public:
    int operator()(const std::vector<int>& numbers);
};

class FindMax {
public:
    int operator()(const std::vector<int>& numbers);
};

class SortDescending {
public:
    void operator()(std::vector<int>& numbers);
};

class SortAscending {
public:
    void operator()(std::vector<int>& numbers);
};

class IncreaseBy {
private:
    int value;

public:
    IncreaseBy(int val) : value(val) {}
    void operator()(std::vector<int>& numbers);
};

class DecreaseBy {
private:
    int value;

public:
    DecreaseBy(int val) : value(val) {}
    void operator()(std::vector<int>& numbers);
};

class RemoveValue {
private:
    int targetValue;

public:
    RemoveValue(int val) : targetValue(val) {}
    void operator()(std::vector<int>& numbers);
};
