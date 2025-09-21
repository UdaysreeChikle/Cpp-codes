//difference between 0, NULL, and nullptr in function overloading.

#include <iostream>
using namespace std;

// Overloaded functions
void fun(int x) {
    cout << "fun(int) called" << endl;
}

void fun(char* p) {
    cout << "fun(char*) called" << endl;
}

int main() {
    // Using 0
    fun(0);       // Calls fun(int), not fun(char*) → can be confusing

    // Using NULL
    #define NULL 0
    fun(NULL);    // Calls fun(int) → same ambiguity as 0

    // Using nullptr (C++11+)
    fun(nullptr); // Calls fun(char*) → unambiguous, safe

    return 0;
}
