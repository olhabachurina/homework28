// homework28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Functors.h"

int main() {
    std::vector<int> numbers = { 5, 3, 8, 2, 7, 1, 9, 4, 6 };

    FindMin findMin;//функтор для поиска минимального значения в векторе.
    FindMax findMax;//функтор для поиска максимального значения в векторе.
    SortDescending sortDescending;//функтор для сортировки вектора по убыванию.
    SortAscending sortAscending;//функтор для сортировки вектора по возрастанию.
    IncreaseBy increaseBy(10);//функтор для увеличения всех значений в векторе на заданную константу.
    DecreaseBy decreaseBy(5);// функтор для уменьшения всех значений в векторе на заданную константу.
    RemoveValue removeValue(6);// функтор для удаления всех элементов вектора, равных заданному значению.

    std::cout << "Min value: " << findMin(numbers) << std::endl;
    std::cout << "Max value: " << findMax(numbers) << std::endl;

    sortDescending(numbers);
    std::cout << "Sorted in descending order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    sortAscending(numbers);
    std::cout << "Sorted in ascending order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    increaseBy(numbers);
    std::cout << "Increased by 10: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    decreaseBy(numbers);
    std::cout << "Decreased by 5: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    removeValue(numbers);
    std::cout << "After removing 6: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
