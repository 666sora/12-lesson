#include <iostream>

int main() {
    int array[15];
    
    for (int i = 0; i < 15; i++) {
        std::cout << "Input number: ";
        std::cin >> array[i];
    }
    int reit;
    bool reit = false;
    for (int i = 0; i < 15 && !reit; i++) {
        for (int j = 0; j < 14; j++) {
            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array [j + 1];
                array[j + 1] = temp;
            }
            else if (array[j] == array[j + 1]) {
                reit = array[j];
                reit = true;
            }
        }
    }
    std::cout << "Repetitive number is " << reit;
}

/*
В программе инициализирован массив из 15 целых положительных чисел. Эти числа являются множеством 
из 14 последовательных чисел, начиная с Х (Х может быть любым), а одно число из ряда повторяется. 
Необходимо найти повторяющееся число и вывести его в консоль. 
По возможности используйте минимум дополнительной памяти и проходов по массиву.
*/