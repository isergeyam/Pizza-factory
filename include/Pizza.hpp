#ifndef _PIZZA_H_
#define _PIZZA_H_
#include <iostream>
#include <memory>
#include <string>
enum EFlour { wheat, buckwheat, corn };
enum ESauce { tomato, curry, cheesy };
enum EFilling { cheese, meat, vegetable };
class CPizza {
private:
  const EFlour m_flour;
  const ESauce m_sauce;
  const EFilling m_filling;
  const std::string m_name;

public:
  CPizza(EFlour m_flour, ESauce m_sauce, EFilling m_filling, std::string m_name)
      : m_flour(m_flour), m_sauce(m_sauce), m_filling(m_filling),
        m_name(m_name) {}
  std::string get_name() const { return m_name; }
};
#endif
