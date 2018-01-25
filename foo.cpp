#include "foo.h"

class Bar
{
public:
  Bar() : b(42) {}
  int getB() { return b; }
private:
  int b;
};

Foo::Foo() : a(5) {}

int Foo::getA() { return a; }

int Foo::getB() { return bar->getB(); }
