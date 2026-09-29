#include <iostream>

int n{};

int read_array_length(int& n) {
    std::cin >> n;
    return n;
}


int* memory_alloсation(int size) {
    return new int[size];
}

void read(int* arr, int size) {
    for (int i{}; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void print(int* arr, int size, std::string message = "") {
    if (!message.empty()) {
        std::cout << message;
    }
    else {
        std::cout << message;
    }
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

int enter_x(int& x) {
    std::cin >> x;
    return x;
}

int found_x_in_array(int* arr, int size, int x) {
    int pos = -1;
    bool is_in_array = false;
    while (is_in_array == false && pos <= size) {
        if (x == arr[pos]) {
            is_in_array = true;
            return pos;
        }
        pos++;
    }
    return -1;
}

//TASK 2
bool is_sorted_non_decreasing(int* arr, int size) {
    bool is_no_less = true;

    for (int i = 1; i < n; ++i) {
        if (arr[i - 1] > arr[i] && is_no_less == true) {
            is_no_less = false;
        }
    }
    return is_no_less;
}

//TASK 3

int count_numbers_larger_than_neighbors(int* arr, int size) {
    int quantity = 0;

    for (int i = 1; i < n - 1; ++i) {
        if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i]) {
            quantity++;
        }
    }
    return quantity;
}

int main() {

    //Task 1

    std::cout << "Task 1" << '\n';

    std::cout << "Enter length of array: ";

    read_array_length(n);

    int* arr = memory_alloсation(n);

    std::cout << "Enter array: ";

    read(arr, n);

    print(arr, n, "Your array is: ");

    std::cout << "Enter X: ";

    enter_x(x);

    if (found_x_in_array(arr, n, x) != -1) {
        std::cout << "Position x in array is: " << found_x_in_array(arr, n, x);
    }
    else {
        std::cout << "X not found in array";
    }
    memory_deletes(arr);

    //Task 2

    std::cout << "\n\n" << "Task 2" << '\n';

    std::cout << "Enter length of array: ";

    read_array_length(n);

    int* arr2 = memory_alloсation(n);

    std::cout << "Enter array: ";

    read(arr2, n);

    print(arr2, n, "Your array is: ");

    if (is_sorted_non_decreasing(arr2, n) == true) {
        std::cout << "Yes. Array is sorted in non-decreasing order";
    }
    else {
        std::cout << "No. Array is not sorted in non-decreasing order";
    }

    memory_deletes(arr2);

    //Task 3

    std::cout << "\n\n" << "Task 3" << '\n';

    std::cout << "Enter length of array: ";

    read_array_length(n);

    int* arr3 = memory_alloсation(n);

    std::cout << "Enter array: ";

    read(arr3, n);

    print(arr3, n, "Your array is: ");

    std::cout << "Quantity numbers more then numbers left and right: " << count_numbers_larger_than_neighbors(arr3, n);

    memory_deletes(arr3);
}