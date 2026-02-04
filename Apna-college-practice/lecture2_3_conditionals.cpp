#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    char ch;

    cout << "Enter first number : " ;
    cin >> n1;

    cout << "Enter operation : ";
    cin >> ch;


    cout << "Enter second number : " ;
    cin >> n2;

    
    if(ch== '+') {
        cout << n1 << " + " << n2 << " = " << n1+n2;
    }else if(ch== '-') {
        cout << n1 << " - " << n2 << " = " << n1-n2;
    }else if(ch== '*') {
        cout << n1 << " * " << n2 << " = " << n1*n2;
    }else if(ch== '-') {
        if(n2 != 0) {
        cout << n1 << " / " << n2 << " = " << n1/n2;
        }
    }else {
        cout << "ERROR! Invalid operation";
    }

    return 0;
}
