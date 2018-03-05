#ifndef _PIZZA_BAKER_
#define _PIZZA_BAKER_
#include "Pizza.hpp"
class IPizzaBaker {
protected:
  std::shared_ptr<CPizza> m_pizza;
  EFlour m_flour;
  ESauce m_sauce;
  EFilling m_filling;
  std::string m_name;

public:
  virtual ~IPizzaBaker() = 0;
  std::shared_ptr<CPizza> get_pizza() const {
    return std::shared_ptr<CPizza>(
        new CPizza(m_flour, m_sauce, m_filling, m_name));
  }
  virtual void bake_sauce(){};
  virtual void bake_flour(){};
  virtual void bake_filling(){};
  virtual void name_pizza(){};
  void bake_pizza() {
    std::cout << "Here we bake pizza " + m_name + "(stub)\n";
  }
};
IPizzaBaker::~IPizzaBaker() {}
#endif
