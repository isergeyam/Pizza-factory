#ifndef _PIZZA_H_
#define _PIZZA_H_
#include <bits/stdc++.h>
enum EFlour { wheat, buckwheat, corn };
enum ESauce { tomato, curry, cheesy };
enum EFilling { cheese, meat, vegetable };
class CPizza {
private:
  EFlour m_flour;
  ESauce m_sauce;
  EFilling m_filling;
  std::string m_name;

public:
  void set_flour(EFlour m_flour) { this->m_flour = m_flour; }
  void set_filling(EFilling m_filling) { this->m_filling = m_filling; }
  void set_sauce(ESauce m_sauce) { this->m_sauce = m_sauce; }
  void set_name(std::string m_name) { this->m_name = m_name; }
  std::string get_name() const { return m_name; }
};
#endif
