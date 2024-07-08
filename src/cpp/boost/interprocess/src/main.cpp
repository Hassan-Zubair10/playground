#include <iostream>
#include <cstring>
#include "boost/interprocess/shared_memory_object.hpp"
#include "boost/interprocess/mapped_region.hpp"

namespace ipc = boost::interprocess;

int main()
{
    struct shm_remove
    {
        shm_remove()  { ipc::shared_memory_object::remove("MySharedMemory"); }
        ~shm_remove() { ipc::shared_memory_object::remove("MySharedMemory"); }
    } remover;

    ipc::shared_memory_object shm(ipc::create_only, "MySharedMemory", ipc::read_write);
    shm.truncate(1024);

    ipc::mapped_region region(shm, ipc::read_write);
    void *addr = region.get_address();

    const char *message = "I am Batman!";
    std::memcpy(addr, message, std::strlen(message) + 1);

    std::cout << "Message in shared memory: " << static_cast<char*>(addr) << std::endl;

    return 0;
}
