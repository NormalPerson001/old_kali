#include <iostream>
#include <string>
using namespace std;

int main (){
    int number1 = 15; //Decimal
    int number2 = 017; //Octal
    int number3 = 0x0f; //Hexa
    int number4 = 0b00001111; //Binary
    std::cout << "This is number: "<< number1 << std::endl;
    std::cout << "This is number: "<< number2 << std::endl;
    std::cout << "This is number: "<< number3 << std::endl;
    std::cout << "This is number: "<< number4 << std::endl;
    float number5 {5.1}; //float and double kinda same thing //This is Functional initialization
    int number6 (5.1); //This will give you logical ERROR  //This is Braced initialization
    //int number7 {5.1} This will give you compile ERROR
    std::string Qusay = "Qusay";

    int number8 = 5.1; //This is assignment initialization
    std::cout << "This is number: "<< number5 << std::endl;
    std::cout << "This is number: "<< number6 << " but it must be 5.1"<<std::endl;
    std::cout << "This is number: "<< number8 << " But also it must be 5.1"<<std::endl;
    std::cout << "This is number " << number6 << " have " << sizeof(number6) <<" size in memory" << std::endl;
    std::cout << "This name " << Qusay << " have " << sizeof(Qusay) << " size in memory"<< std::endl;
    std::cout << "This is the size of string: " << sizeof(string);
}
