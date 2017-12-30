#include <iostream>

using namespace std;

#include "wolf.H"

int main(int argc, char const *argv[])
{
    animal* ptr = new wolf();
    ptr->eat();
    return 0;
}
