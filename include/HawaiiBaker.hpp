#ifndef _HAWAII_BAKER_H_
#define _HAWAII_BAKER_H_
#include "PizzaBaker.hpp"
class CHawaiiBaker : public IPizzaBaker {
public:
  void name_pizza() override { m_pizza->set_name("Hawaii"); }
  void bake_flour() override { m_pizza->set_flour(buckwheat); }
  void bake_sauce() override { m_pizza->set_sauce(curry); }
  void bake_filling() override { m_pizza->set_filling(meat); }
};
#endif
