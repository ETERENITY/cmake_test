#include <iostream>
#include <thread>
#include "add.h"
#include "sub.h"
int main(){
    int i = 1;
    std::cout << "hello world" << add(1, 2) << sub(2, 1) << std::endl;
    int data[4]{ 1,2,3,4 };
    martix mat(2, 2, data);
    std::this_thread::sleep_for(std::chrono::seconds(5));
    return 0;
}