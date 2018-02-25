#ifndef _CUSTOM_BASKER_H_
#define _CUSTOM_BASKER_H_
#include "PizzaBaker.hpp"
class CCustomBaker : public IPizzaBaker {
private:
  EFlour m_flour;
  ESauce m_sauce;
  EFilling m_filling;
  std::string m_name;

public:
  CCustomBaker(EFlour m_flour, ESauce m_sauce, EFilling m_filling,
               std::string m_name)
      : m_flour(m_flour), m_sauce(m_sauce), m_filling(m_filling),
        m_name(m_name) {}
  void name_pizza() override { m_pizza->set_name(m_name); }
  void bake_flour() override { m_pizza->set_flour(m_flour); }
  void bake_sauce() override { m_pizza->set_sauce(m_sauce); }
  void bake_filling() override { m_pizza->set_filling(m_filling); }
};
#endif
