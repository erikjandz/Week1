#include <iostream>
//Ik heb gekozen voor for loops omdat ik dat makkelijker vind werken.
using namespace std;

int main() {
    int number;
    cout << "Hoe groot?";
    cin >> number;
    for (int i = 0; i < number; i++){
        for (int j = 0; j < number - i; j++){
            cout << ' ';
        }
        for (int k = 0; k < i; k++){
            cout << '*';
        }
        cout << "\n";
    }
    for (int i = 0; i < number; i++){
        for (int j = 0; j < i; j++){
            cout << ' ';
        }
        for (int k = 0; k < number - i; k++){
            cout << '*';
        }
        cout << "\n";
    }
}

