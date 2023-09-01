#include <iostream>

using namespace std;
int addNumbers(int first , int second){
    int result = first + second;
    return result;
}
int main()
{
    int firstnumber {3}; //This is how you can declare a variable with integer
    int secondnumber {3};
    std::cout << "FirstNumber: " << firstnumber << std::endl;
    std::cout << "SecondNumber: " << secondnumber << std::endl;
    int sum = firstnumber + secondnumber;
    std:: cout << "Sum of " << firstnumber << " and " << secondnumber << " is: " << sum << std::endl;
    std::cout << "This is the result of calling functions below, please check the code: " << std::endl;
    int new_sum = addNumbers(5,5);
    std::cout << new_sum << std::endl;
    return 0;
}
