#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Structure to hold family member details
struct Person {
    string name;
    int age;
};

// Function for Binary Search
int binarySearch(vector<Person>& family, string key) {

    // Convert search key to lowercase
    for(char &c : key)
        c = tolower(c);

    int left = 0;
    int right = family.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        string midName = family[mid].name;

        // Convert middle name to lowercase
        for(char &c : midName)
            c = tolower(c);

        if (midName == key) {
            return mid; // Found
        }
        else if (midName < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1; // Not found
}

int main() {

    // Family data (must be sorted for Binary Search)
    vector<Person> family = {
        {"Amjed", 25},
        {"Anne", 19},
        {"Emely", 22}
    };

    string key_name;

    cout << "Enter a name to search: ";
    getline(cin, key_name);

    int result = binarySearch(family, key_name);

    if (result != -1) {
        cout << family[result].name
             << " was found and is aged "
             << family[result].age << endl;
    }
    else {
        cout << "Not found" << endl;
    }

    return 0;
}
