// DZ 20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// ДЗ №20
//Создайте массив случайных чисел


#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
void show_arr(T arr[], const int length) {
    std::cout << '[';
    for (int i = 0; i < length; i++) {
        std::cout << arr[i] << ", ";
    }
    std::cout << "\b\b]\n";
}

template <typename T>
void fill_arr(T arr[], const int length, T left, T rigth) {
    srand(time(NULL));
    for (int i = 0; i < length; i++)
        arr[i] = rand() % (rigth + 1 - left) + left;
}

/*search_index – возвращает индекс первого вхождения
элемента в массив. Содержит параметр по умолчанию begin = 0
на случай, если пользователь захочет начать поиск
с определённой позиции*/

template <typename T>
int search_index(T arr[], const int length, T value, T begin = 0) {
    for (int i = begin; i < length; i++) {
        if (arr[i] == value)
            return i;

    }return -1;
}

/*search_last_index – возвращает индекс последнего
вхождения элемента в массив. Функция должна быть
перегруженной на случай, если пользователь захочет
начать поиск с определённой позиции*/

int search_last_index(int arr[], const int length, int value, int begin) {
    for (int i = begin; i >= 0; i--) {
        return i;
        return -1;
    }
}

/*arr_min – возвращает значение
минимального элемента массива*/

template <typename T>
int arr_min(T arr[], const int length) {
    int min = arr[0];
    for (int i = 0; i < length; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

/*arr_max – возвращает значение
максимального элемента массива*/

template <typename T>
int arr_max(T arr[], const int length) {
    int max = arr[0];
    for (int i = 0; i < length; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

/*mean_value – возвращает среднее
арифметическое всех элементов массива*/

template <typename T>
int mean_value(T arr[], const int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum / 100;
}

//range – выводит все элементы массива, которые
//входят в переданный в функцию диапазон;

template <typename T>
void range(T arr[], const int length, T left, T right) {
    for (int i = 0; i < length; i++) {
        if (arr[i] > left && arr[i] < right) {
            std::cout << arr[i] << '\t';
        }        
    }
}

//counter – возвращает количество вхождений
//переданного элемента в массив.

template <typename T>
int counter(T arr[], const int length, T value) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] = value) count++;    
return count;
    }
    
}


int main() {
    setlocale(LC_ALL, "rus");
    int a = -100;
    int b = 100;


    const int SIZE = 100;
    int arr[SIZE];

    /*Создайте массив случайных чисел*/

    std::cout << "Массив: ";
    fill_arr(arr, SIZE, a, b);
    show_arr(arr, SIZE);

    /*search_index – возвращает индекс первого вхождения
    элемента в массив. Содержит параметр по умолчанию begin = 0
    на случай, если пользователь захочет начать поиск
    с определённой позиции*/

    std::cout << "\nВведите число: ";
    int value;
    std::cin >> value;
    std::cout << "Поиск начинается с\t";
    int begin;
    std::cin >> begin;
    std::cout << "\tэлемента массива";
    std::cout << "\nИндекс первого вхождения в массив: " <<
        search_index(arr, SIZE, value, begin);

    /*search_last_index – возвращает индекс последнего
    вхождения элемента в массив. Функция должна быть
    перегруженной на случай, если пользователь захочет
    начать поиск с определённой позиции*/

    std::cout << "\nВведите число: ";
    int value1;
    std::cin >> value1;
    std::cout << "Поиск начинается с\t";
    int begin1;
    std::cin >> begin1;
    std::cout << "\tэлемента массива";
    std::cout << "\nИндекс последнего вхождения в массив: " <<
        search_index(arr, SIZE, value1, begin1);

    /*arr_min – возвращает значение
    минимального элемента массива*/

    std::cout << "\nМинимальное значение в массиве: ";
    std::cout << arr_min(arr, SIZE);

    /*arr_max – возвращает значение
    максимального элемента массива*/

    std::cout << "\nМаксимальное значение в массиве: ";
    std::cout << arr_max(arr, SIZE);

    /*mean_value – возвращает среднее
    арифметическое всех элементов массива*/

    std::cout << "\nСреднее арифметичеое всех эллеменов массива: ";
    std::cout << mean_value(arr, SIZE);

    //range – выводит все элементы массива, которые
//входят в переданный в функцию диапазон;
    
    int X, Y;

    std::cout << "\nВведите значение нижней границы диапазона: ";
    std::cin >> X;

    std::cout << "\nВведите значение верхней границы диапазона: ";
    std::cin >> Y;

    std::cout << "\nЭлементы массива, входящие в диапазон: "; 
    range(arr, SIZE, X, Y);

    //counter – возвращает количество вхождений
//переданного элемента в массив.

    
    int M;
    std::cout << "\nВведите число из массива: ";
    std::cin >> M;

    std::cout << "\nКоличество вхождений элемнта в массив: " << counter(arr, SIZE, M);

}


