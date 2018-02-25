#ifndef _PIZZA_BAKER_
#define _PIZZA_BAKER_
#include "Pizza.hpp"
class IPizzaBaker {
protected:
  std::shared_ptr<CPizza> m_pizza;

public:
  virtual ~IPizzaBaker() = 0;
  std::shared_ptr<CPizza> get_pizza() { return m_pizza; }
  void create_pizza() { m_pizza.reset(new CPizza); }
  virtual void bake_sauce() = 0;
  virtual void bake_flour() = 0;
  virtual void bake_filling() = 0;
  virtual void name_pizza() = 0;
  void bake_pizza() {
    std::cout << "Here we bake pizza " + m_pizza->get_name() + "(stub)\n";
  }
};
IPizzaBaker::~IPizzaBaker() {}
#endif
