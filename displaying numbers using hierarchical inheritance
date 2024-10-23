#include <iostream>
using namespace std;
class Base {
protected:
    int num1; 
    int num2; 
public:
    Base(int n1, int n2) : num1(n1), num2(n2) {}
};
class Derived1 : public Base {
public:
    Derived1(int n1, int n2) : Base(n1, n2) {}
    void displayNum1() {
        cout << "The first number is: " << num1 << endl; 
    }
};
class Derived2 : public Base {
public:
    Derived2(int n1, int n2) : Base(n1, n2) {}
    void displayNum2() {
        cout << "The second number is: " << num2 << endl;
    }
};
int main() {
    Derived1 obj1(5, 10); 
    obj1.displayNum1(); 
    Derived2 obj2(5, 10); 
    obj2.displayNum2(); 
    return 0;
}
