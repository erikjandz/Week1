#include <iostream>

using namespace std;

int main(){
    int number;
    cout << "Hoe groot?";
    cin >> number;
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number - i; j++) {
            cout << '*';
        }
        cout << "\n";
    }
}