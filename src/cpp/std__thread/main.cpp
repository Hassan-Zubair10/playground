#include <iostream>
#include <thread>

void threadFunction(int id) {
    std::cout << "Hello From Thread " << id << std::endl;
}

int main() {
    std::thread t1(threadFunction, 1);
    std::thread t2(threadFunction, 2);

    t1.join();
    t2.join();

    return 0;
}
