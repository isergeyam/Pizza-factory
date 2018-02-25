#ifndef _NIGHT_STUFF_FACTORY_H_
#define _NIGHT_STUFF_FACTORY_H_
#include "StuffFactory.hpp"
class NightStuffFactory : IStuffFactory {
public:
  virtual CCashier *create_cashier() override {
    std::cout << "Here we hire an night shift cashier...(stub)\n";
    return new CCashier;
  }
  virtual CCleaner *create_cleaner() override {
    std::cout << "Here we hire an night shift cleaner...(stub)\n";
    return new CCleaner;
  }
  virtual CCourier *create_courier() override {
    std::cout << "Here we hire an night shift courier...(stub)\n";
    return new CCourier;
  }
};
#endif
