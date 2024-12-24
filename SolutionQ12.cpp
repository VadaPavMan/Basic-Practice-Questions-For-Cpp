#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
#include <vector>
#include <string>
#include <limits>
#include <conio.h>
#include <cctype>
using namespace std;

// Ignore Above Header Files

class item {
private:
    int code;
    float price;

public:
    void getdata() {
        cout << "Enter item code: ";
        cin >> code;
        cout << "Enter item price: ";
        cin >> price;
    }

    void show() const {
        cout << "Item Code: " << code << ", Price: " << price << endl;
    }
};

int main() {
    int n = 3; // Number of items
    item* items = new item[n]; // Dynamically allocate array of objects

    // Input data for items
    cout << "Enter details for " << n << " items:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Item " << i + 1 << ":" << endl;
        items[i].getdata();
    }

    // Display data for items
    cout << "\nDetails of items:" << endl;
    for (int i = 0; i < n; ++i) {
        items[i].show();
    }

    // Free allocated memory
    delete[] items;

    return 0;
}
