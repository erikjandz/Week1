#include <iostream>
#include <string>

using namespace std;

int main(){
    string text;
    cout << "Geef een string om te vertalen";
    getline(cin, text);
    for(int i=0; i < text.size(); i++){
        if(text[i] == 'l'){
            text[i] = '1';
        }else if(text[i] == 'e'){
            text[i] = '3';
        }else if(text[i] == 't'){
            text[i] = '7';
        }else if(text[i] == 'o'){
            text[i] = '0';
        }else{
            text[i] = char(int(text[i]) - 32);
        }
    }
    cout << text;
}
