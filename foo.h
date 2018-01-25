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
