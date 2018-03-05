#ifndef _CASHIER_H_
#define _CASHIER_H_
#include "Courier.hpp"
#include "PizzaBaker.hpp"
class CCashier {
private:
  IPizzaBaker *m_pizza_baker;
  std::string m_address;
  CCourier *m_courier;

public:
  CCashier() : m_pizza_baker(nullptr), m_courier(nullptr) {}
  void set_pizza_baker(IPizzaBaker *baker) { m_pizza_baker = baker; }
  void set_courier(CCourier *courier) { m_courier = courier; }
  void set_address(std::string address) { m_address = address; }
  void process_order() {
    m_pizza_baker->bake_flour();
    m_pizza_baker->bake_filling();
    m_pizza_baker->bake_sauce();
    m_pizza_baker->name_pizza();
    m_pizza_baker->bake_pizza();
    m_courier->deliver(m_pizza_baker->get_pizza(), m_address);
    std::cout << "Courier finished...(stub)\n";
    return;
  }
};
#endif
