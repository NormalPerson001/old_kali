#include <iostream>
#include <string>
using namespace std;

int main (){
    //types of messages
    /*
    //print data
    std::cout << "printing data" << std::endl;
    //print error
    std::cerr << "Error: This is an error message" << std::endl;
    //print log
    std::clog << "Log: This is a log message" << std::endl;
    // input
    */
    //inputting without spaces
    /*
    int age1;
    std::string name1;
    std::cout << "Please input your name and age: "<< std::endl;
    std::cin >> name1;
    std::cin >> age1;
    std::cout << "Hey " << name1 << " i know you are " << age1 << " years old" << std::endl;
    */
    std::cout << "PLEASE NOTE THAT THERE ARE IMPORTANT COMMENTS IN THIS FILE PLEASE VIEW IT !!!!!!" << std::endl;
    //inputting with spaces
    std:: string full_name;
    int age2;
    std::cout << "Please enter your name and age: " << std::endl;
    std::getline(cin,full_name); //This function will allow you to put your full name with spaces
    std::cin >> age2;
    std::cout << "Hey " << full_name << " you are " << age2 << " old" << std::endl;
    return 0;
}
