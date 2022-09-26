#include "coda.h"

int main()
{
    std::cout << "Hello, coda!" << std::endl;

    coda::coda* c = new coda::coda();
    c->Setup();
    delete c;
}
