#include <iostream>
#include <thread>
//Test compiler.
//clang++ -std=c++20 Test.cpp
void message();

int main(int argc, char const *argv[])
{
    std::thread first_thread(message);

    if (first_thread.joinable()) {
        std::cout << "Thread is joinable" << std::endl;
    } else {
        std::cout << "Thread is not a joinable" << std::endl;
    }

    first_thread.join();

    if (first_thread.joinable()) {
        std::cout << "Thread after joinable" << std::endl;
    } else {
        std::cout << "Thread after a not joinable" << std::endl;
    }

    return 0;
}

void message() {
    std::cout << "Hello from Thread!" << std::endl;
}

