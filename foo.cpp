#include <boost/shared_ptr.hpp>

class Bar;

class Foo
{
public:
  Foo();
  int getA();
  int getB();
private:
  int a;
  boost::shared_ptr<Bar> bar;
};

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
