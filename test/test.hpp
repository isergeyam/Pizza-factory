#include "Pizzeria.hpp"
#include <gtest/gtest.h>
namespace {
class PizzaTest : public ::testing::Test {
protected:
  CCashier mycashier;
  CCourier mycourier;
  CCleaner mycleaner;
  std::shared_ptr<CPizza> mypizza;
  PizzaTest() : mypizza(new CPizza) { mypizza->set_name("testpizza"); }
};
TEST_F(PizzaTest, CourierTest) {
  testing::internal::CaptureStdout();
  mycourier.deliver(std::shared_ptr<CPizza>(mypizza), "testaddress");
  EXPECT_EQ(testing::internal::GetCapturedStdout(),
            "Delivering pizza testpizza to address testaddress(stub)\n");
}
TEST_F(PizzaTest, BakerTest) {
  testing::internal::CaptureStdout();
  CMargaritaBaker mybaker;
  mybaker.create_pizza();
  mybaker.name_pizza();
  mybaker.bake_pizza();
  EXPECT_EQ(testing::internal::GetCapturedStdout(),
            "Here we bake pizza Margarita(stub)\n");
}
TEST_F(PizzaTest, FactoryTest) {
  testing::internal::CaptureStdout();
  DayStuffFactory myfactory;
  CCleaner *mcl = myfactory.create_cleaner();
  EXPECT_EQ(testing::internal::GetCapturedStdout(),
            "Here we hire an day shift cleaner...(stub)\n");
  delete mcl;
}
TEST_F(PizzaTest, CustomBakerTest) {
  testing::internal::CaptureStdout();
  CCustomBaker mybaker(EFlour::wheat, ESauce::cheesy, EFilling::vegetable,
                       "mypizza");
  mybaker.create_pizza();
  mybaker.name_pizza();
  mybaker.bake_pizza();
  EXPECT_EQ(testing::internal::GetCapturedStdout(),
            "Here we bake pizza mypizza(stub)\n");
}
TEST_F(PizzaTest, CashierTest) {
  testing::internal::CaptureStdout();
  mycashier.set_pizza_baker(new CHawaiiBaker);
  mycashier.set_courier(new CCourier);
  mycashier.set_address("testaddress");
  mycashier.process_order();
  EXPECT_EQ(testing::internal::GetCapturedStdout(),
            "Here we bake pizza Hawaii(stub)\nDelivering pizza Hawaii to \ 
address testaddress(stub)\nCourier finished...(stub)\n");
}
} // namespace
