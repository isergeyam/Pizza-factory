#ifndef _MARGARITA_BAKER_H_
#define _MARGARITA_BAKER_H_
#include "PizzaBaker.hpp"
class CMargaritaBaker : public IPizzaBaker {
public:
  void name_pizza() override { m_pizza->set_name("Margarita"); }
  void bake_flour() override { m_pizza->set_flour(wheat); }
  void bake_sauce() override { m_pizza->set_sauce(tomato); }
  void bake_filling() override { m_pizza->set_filling(cheese); }
};
#endif
