#ifndef _COURIER_H_
#define _COURIER_H_
#include "Pizza.hpp"
#include <memory>
class CCourier {
public:
  void deliver(std::shared_ptr<CPizza> pizza, std::string address) {
    std::cout << "Delivering pizza " + pizza->get_name() + " to address " +
                     address + "(stub)\n";
    return;
  }
};
#endif
