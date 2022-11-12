#include <iostream>
#include <string>

int addNums(int first_num, int second_num){
    int sum = first_num + second_num;
    return sum;
}

int divNums(int dividend, int divisor){
    int Quotient = dividend / divisor;
    return Quotient;
}

int main(){
    // int age{35};
    // std::cout << "age: " << age << std::endl;

    // std::cerr << "Error" << std::endl;
    // std::clog << "log" << std::endl;

    // int age1;
    // std::string name;

    // std::cout << "type name and age" << std::endl;

    // std::cin >> name;
    // std::cin >> age1;

    // std::cin >> name >> age1;

    // std::cout << "Hello " << name << " you are " << age1 << " years old." << std::endl;

    int age3;
    std::string full_name;
    std::cout << "please type full name and age" << std::endl;
    std::getline(std::cin, full_name);
    std::cin >> age3;
    std::cout << "Hi " << full_name << " age " << age3 << std::endl;

    return 0;
}
