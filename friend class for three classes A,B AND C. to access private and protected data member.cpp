#include <iostream>
#include <string>
using namespace std;
class FriendClass;
class A {
private:
    int privateA;
protected:
    string protectedA;

public:
    A(int a, const string& str) : privateA(a), protectedA(str) {}
    friend class FriendClass;
};
class B {
private:
    double privateB;
protected:
    string protectedB;
public:
    B(double b, const string& str) : privateB(b), protectedB(str) {}
    friend class FriendClass;
};
class C {
private:
    char privateC;
protected:
    int protectedC;

public:
    C(char c, int num) : privateC(c), protectedC(num) {}
    friend class FriendClass;
};
class FriendClass {
public:
    void displayDetails(const A& a, const B& b, const C& c) {
        cout << "Class A: " << endl;
        cout << "Private A: " << a.privateA << endl;
        cout << "Protected A: " << a.protectedA << endl;

        cout << "Class B: " << endl;
        cout << "Private B: " << b.privateB << endl;
        cout << "Protected B: " << b.protectedB << endl;

        cout << "Class C: " << endl;
        cout << "Private C: " << c.privateC << endl;
        cout << "Protected C: " << c.protectedC << endl;
    }
};
int main() {
    A objA(10, "Hello");
    B objB(20.5, "World");
    C objC('X', 100);
    FriendClass friendObj;
    friendObj.displayDetails(objA, objB, objC);
    return 0;
}
