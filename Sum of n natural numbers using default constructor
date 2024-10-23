#include <iostream>

class SumNaturalNumbers {
private:
    int n;  
    int sum; 

public:
    SumNaturalNumbers() : n(0), sum(0) {}
    SumNaturalNumbers(int num) : n(num) {
        calculateSum();
    }
    void calculateSum() {
        sum = n * (n + 1) / 2; 
    }
    void displaySum() const {
        std::cout << "The sum of the first " << n << " natural numbers is: " << sum << std::endl;
    }
};

int main() {
    int n;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    SumNaturalNumbers sumObj; 
    SumNaturalNumbers sumObjWithInput(n);
    sumObjWithInput.displaySum(); 

    return 0;
}
