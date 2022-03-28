#include <iostream> 

int main() {
    std::string appartements[10];
    for (int i = 0; i < 10; i++) {
        std::cout << "Input surname of tenant: ";
        std::cin >> appartements[i];
    }
    bool correct = true;
    for (int i = 0; i < 3; i++) {
        int temp;
        do {
            std::cout << "Input number of appartament: ";
            std::cin >> temp;
            correct = ((temp < 1 || temp > 10) ? false : correct);
            if (!correct) std::cout << "Invalid input" << std::endl;
        } while (!correct);
        std::cout << appartements[temp - 1] << std::endl; 
    }
}

/*
На вход программе поступают десять фамилий в формате строк. 
Это фамилии жильцов квартир с первой по десятую. Необходимо прочитать эти фамилии и записать в одномерный массив. 
Далее пользователь вводит три номера квартир. 
Необходимо вывести в консоль фамилию жильца, проживающего в этой квартире. 
Если пользователь введёт некорректный номер квартиры, необходимо сообщить ему об этом.
*/