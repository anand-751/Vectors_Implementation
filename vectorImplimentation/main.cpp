#include <iostream>
#include "Vector.h"



int main(){
    ANANDCPP::Vector vec;;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    //vec.pop();

    vec.displayVector();

    std::cout << std::endl << vec.top();

    std::cout << std::endl << vec.capacity();

    std::cout << std::endl << vec.size();

    return 0;
}