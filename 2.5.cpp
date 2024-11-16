#include<iostream>
#include<sstream> 
using namespace std;

int main() {
    string line;
    getline(cin, line); 

    int letters = 0, spaces = 0, digits = 0, others = 0;

    for (char ch : line) {
        if (isalpha(ch)) {
            letters++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else if (isspace(ch)) {
            spaces++;
        }
        else {
            others++;
        }
    }
    cout << "Ӣ����ĸ����: " << letters << endl;
    cout << "�����ַ�����: " << digits << endl;
    cout << "�ո�����: " << spaces << endl;
    cout << "�����ַ�����: " << others << endl;

    return 0;
}