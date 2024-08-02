#include <iostream>

namespace first
{
    int x = 1;
}
namespace second
{
    int x = 2;
}

// "::" is known as the scope resolution operator

int main()
{
    using namespace first;

    return 0;
}