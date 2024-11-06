#include <iostream>

using namespace std;

class SwapNumbers {
private:
    int a; 
    int b; 

public:
    SwapNumbers(int num1, int num2) : a(num1), b(num2) {}
    void swap() {
        a = a + b; 
        b = a - b; 
        a = a - b;  
    }
    void display() const {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    SwapNumbers swapObj(num1, num2);
    cout << "Before swapping: ";
    swapObj.display(); 
    swapObj.swap();
    cout << "After swapping:";
    swapObj.display() ;
return 0;
}
