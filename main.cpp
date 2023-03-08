#include <iostream>
#include <thread>

int main() {
    std::thread t([] {
        std::cout << "hello concurrent world!\n";
    });
    t.join();
}