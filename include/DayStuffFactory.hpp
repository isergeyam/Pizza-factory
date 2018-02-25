#ifndef _DAY_STUFF_FACTORY_H_
#define _DAY_STUFF_FACTORY_H_
#include "Cashier.hpp"
#include "StuffFactory.hpp"
class DayStuffFactory : IStuffFactory {
public:
  virtual CCashier *create_cashier() override {
    std::cout << "Here we hire an day shift cashier...(stub)\n";
    return new CCashier;
  }
  virtual CCleaner *create_cleaner() override {
    std::cout << "Here we hire an day shift cleaner...(stub)\n";
    return new CCleaner;
  }
  virtual CCourier *create_courier() override {
    std::cout << "Here we hire an day shift courier...(stub)\n";
    return new CCourier;
  }
  ~DayStuffFactory() {}
};
#endif
