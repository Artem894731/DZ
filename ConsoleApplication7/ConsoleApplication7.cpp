#include <iostream>

int n{};

int length_of_array(int &n) {
    std::cout << "Enter length of array: ";
    std::cin >> n;
    return n;
}


int* memory_allotation(int size) {
    return new int[size];
}

void read(int* arr, int size) {
    std::cout << "Enter array: ";
    for (int i{}; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void print(int* arr, int size) {
    std::cout << "Your array is: ";
    for (int i{}; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}


void memory_deletes(int* arr) {
    delete[] arr;
    arr = nullptr;
}

//TASK 1
int x{};

int enter_x(int &x) {
    std::cout << "Enter your number: ";
    std::cin >> x;
    return x;
}

void if_x_in_array(int* arr, int size, int x) {
    int pos = 0;

    while (pos < n) {
        if (x == arr[pos]) {
            std::cout << "Position: " << pos + 1 << '\n';
            break;
        }
        else if (x != arr[pos] && pos + 1 == n) {
            std::cout << "x not found";
            break;
        }
        pos++;
    }
}

//TASK 2
void is_array_sorted_in_nondecreasing_order(int* arr, int size) {
    bool is_no_less = true;

    for (int i = 1; i < n; ++i) {
        if (arr[i - 1] > arr[i] && is_no_less == true) {
            is_no_less = false;
        }
    }

    if (is_no_less == true) {
        std::cout << "Yes. Array is sorted in non-decreasing order";
    }
    else {
        std::cout << "No. Array is not sorted in non-decreasing order";
    }
}

//TASK 3

void Quantity_numbers(int* arr, int size) {
    int quantity = 0;

    for (int i = 1; i < n - 1; ++i) {
        if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i]) {
            quantity++;
        }
    }
    std::cout << "Quantity numbers more then numbers left and right: " << quantity;
}

int main() {

    //Task 1

    std::cout << "Task 1" << '\n';

    length_of_array(n);

    int* arr = memory_allotation(n);

    read(arr, n);

    print(arr, n);

    enter_x(x);

    if_x_in_array(arr, n, x);

    memory_deletes(arr);

    //Task 2

    std::cout << "\n\n" << "Task 2" << '\n';

    length_of_array(n);

    int* arr2 = memory_allotation(n);

    read(arr2, n);

    print(arr2, n);

    is_array_sorted_in_nondecreasing_order(arr2, n);

    memory_deletes(arr2);

    //Task 3

    std::cout << "\n\n" << "Task 3" << '\n';

    length_of_array(n);

    int* arr3 = memory_allotation(n);

    read(arr3, n);

    print(arr3, n);

    Quantity_numbers(arr3, n);

    memory_deletes(arr3);
}