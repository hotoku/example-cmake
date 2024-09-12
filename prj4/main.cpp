#include <iostream>
#include <functional>

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}

int main()
{
    std::function<int(int, int)> f1 = add;
    std::function<int(int, int)> f2 = sub;
    int x = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << f1(x, i) << std::endl;
        }
        else
        {
            std::cout << f2(x, i) << std::endl;
        }
    }
    return 0;
}