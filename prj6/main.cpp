#include <iostream>

int main()
{
#ifdef HOTOKU_PRJ6
    std::cout << "Hello, World!" << std::endl;
#else
    std::cout << "Goodbye, World!" << std::endl;
#endif

    return 0;
}
