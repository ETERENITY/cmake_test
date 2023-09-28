#include <iostream>
#include <thread>
#include "add.h"
int main(){
    std::cout << "hello world" << add(1, 2) << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    return 0;
}