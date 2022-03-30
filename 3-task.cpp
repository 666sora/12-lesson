#include <iostream>

int main() {
    float array[15];
    for (int i = 0; i < 15; i++) {
        std::cout << "Input float number: ";
        std::cin >> array[i];
    }
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 14; j++) {
            if (array[j] < array[j + 1]) {
                float temp = array[j];
                array[j] = array [j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 15; i++) {
        std::cout << array[i] << " "; 
    }
}

/*
Пользователь вводит в консоль 15 дробных чисел. 
Необходимо прочитать их и вывести в консоль в порядке 
от большего к меньшему. По возможности используйте минимум 
дополнительной памяти и проходов по массиву.
*/