#ifndef _HAWAII_BAKER_H_
#define _HAWAII_BAKER_H_
#include "PizzaBaker.hpp"
class CHawaiiBaker : public IPizzaBaker {
public:
  void name_pizza() override { m_name = "Hawaii"; }
  void bake_flour() override { m_flour = buckwheat; }
  void bake_sauce() override { m_sauce = curry; }
  void bake_filling() override { m_filling = meat; }
};
#endif
