#include <iostream>
#include "Computer.h"
int main()
{
    int n = 5;
    computer* arr = new computer[n]{
        {"asus", 8, 15'000},
        { "lenovo", 9, 15'000},
        {"hp", 8, 15'000}
    };
    cout << "computer with RAM > 10\n";
    for (int i = 0; i < n; i++)
    {
        if (arr[i].ram > 10) {
            cout << arr[i].name << endl;
        }
    }
}