#include <memory>

class Bar;

class Foo
{
public:
  Foo();
  int getA();
  int getB();
private:
  int a;
  std::shared_ptr<Bar> bar;
};
