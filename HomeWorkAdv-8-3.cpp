#include <iostream>
#include "MySmartPtr.h"

int main() {

    My_smart_ptr<std::string> ptr(new std::string("Hellow! I'am Smart pointer!"));
    std::cout << *ptr << "\n";

    My_smart_ptr<int> vec_ptr(new int(5));
    std::cout << *vec_ptr << "\n";
}