#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;

    cout << "Enter 1st numbers: ";
    cin >> n1;
    cout << "Enter 2nd numbers: ";
    cin >> n2;
    cout << "Enter 3rd numbers: ";
    cin >> n3;
    if((n1 >= n2) && (n1 >= n3))
    cout << "Largest number: " << n1;
    else if ((n2 >= n1) && (n2 >= n3))
    cout << "Largest number: " << n2;
    else
    cout << "Largest number: " << n3;
    
   
}


