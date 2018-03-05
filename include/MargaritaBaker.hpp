#ifndef _MARGARITA_BAKER_H_
#define _MARGARITA_BAKER_H_
#include "PizzaBaker.hpp"
class CMargaritaBaker : public IPizzaBaker {
public:
  void name_pizza() override { m_name = "Margarita"; }
  void bake_flour() override { m_flour = wheat; }
  void bake_sauce() override { m_sauce = tomato; }
  void bake_filling() override { m_filling = cheese; }
};
#endif
