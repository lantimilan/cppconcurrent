// hello.cpp
//
// compile:
// g++ -std=c++11 hello.cpp -pthread -o hello
//
// lyan@lyan-ThinkPad-T430:~/github/cpp11$ g++ -std=c++11 hello.cpp -pthread -o hello
// lyan@lyan-ThinkPad-T430:~/github/cpp11$ ./hello
// Hello Concurrent World


#include <iostream>
#include <thread>

void hello()
{
    std::cout << "Hello Concurrent World\n";
}

int main()
{
    std::thread t(hello);
    t.join();
}
