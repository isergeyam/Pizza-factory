#ifndef _STUFF_FACTORY_H_
#define _STUFF_FACTORY_H_
#include "Cashier.hpp"
#include "Cleaner.hpp"
#include "Courier.hpp"
class IStuffFactory {
public:
  virtual CCashier *create_cashier() = 0;
  virtual CCleaner *create_cleaner() = 0;
  virtual CCourier *create_courier() = 0;
  virtual ~IStuffFactory() = 0;
};
IStuffFactory::~IStuffFactory() {}
#endif
