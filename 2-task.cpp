#include <iostream>

int main() {
    int array[15];

    for (int i = 0; i < 15; i++) {
        std::cout << "Input number: ";
        std::cin >> array[i];
    }
    int sum1 = 0;
    int min = array[0];
    for (int i = 0; i < 15; i++) {
        sum1 += array[i];
        if (array[i] < min) {
            min = array[i];
        }
    }
    int sum2 = (2 * min + 13) * 7;
    sum1 = sum1 - sum2;
    std::cout << "Repetitive number is " << sum1;
}

/*
В программе инициализирован массив из 15 целых положительных чисел. Эти числа являются множеством
из 14 последовательных чисел, начиная с Х (Х может быть любым), а одно число из ряда повторяется.
Необходимо найти повторяющееся число и вывести его в консоль.
По возможности используйте минимум дополнительной памяти и проходов по массиву.
*/