#include <iostream>

int addNums(int first_num, int second_num){
    int sum = first_num + second_num;
    return sum;
}

int divNums(int dividend, int divisor){
    int Quotient = dividend / divisor;
    return Quotient;
}

int main(){
    int first_num {3};
    int second_num {7};

    std::cout << "1st: " << first_num << std::endl;
    std::cout << "2nd: " << second_num << std::endl;

    int sum = first_num + second_num;
    std::cout << "Sum: " << sum << std::endl;

    sum = addNums(25, 7);
    std::cout << "Sum: " << sum << std::endl;

    sum = addNums(30, 54);
    std::cout << "Sum: " << sum << std::endl;

    std::cout << "Sum: " << addNums(3, 42) << std::endl;

    std::cout << "Div: " << divNums(9, 3) << std::endl;
    // std::cout << "Div: " << divNums(3, 0) << std::endl;
    std::cout << "Div: " << divNums(3, 7) << std::endl;
    std::cout << "Div: " << divNums(10, 3) << std::endl;
    std::cout << "Div: " << divNums(11, 3) << std::endl;

    return 0;
}
