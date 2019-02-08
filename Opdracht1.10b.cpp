#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Hoe groot?";
    cin >> number;
    int i = 0;
    while(i < number){
        i++;
        int j = 0;
        while(j < i) {
            j++;
            cout << '*';
        }
        cout << "\n";
    }
    i = 0;
    while(i < number){
        i++;
        int j = 0;
        while(j < number - i) {
            j++;
            cout << '*';
        }
        cout << "\n";
    }
}
