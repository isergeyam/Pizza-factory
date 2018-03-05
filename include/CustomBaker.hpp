#ifndef _CUSTOM_BASKER_H_
#define _CUSTOM_BASKER_H_
#include "PizzaBaker.hpp"
class CCustomBaker : public IPizzaBaker {
public:
  CCustomBaker(EFlour m_flour, ESauce m_sauce, EFilling m_filling,
               std::string m_name) {
    this->m_flour = m_flour;
    this->m_sauce = m_sauce;
    this->m_filling = m_filling;
    this->m_name = m_name;
  }
  CCustomBaker() {}
  void set_flour(EFlour m_flour) { this->m_flour = m_flour; }
  void set_filling(EFilling m_filling) { this->m_filling = m_filling; }
  void set_sauce(ESauce m_sauce) { this->m_sauce = m_sauce; }
  void set_name(std::string m_name) { this->m_name = m_name; }
};
#endif
