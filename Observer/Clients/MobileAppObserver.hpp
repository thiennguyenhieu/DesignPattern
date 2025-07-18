#ifndef MOBILEAPP_OBSERVER_HPP_
#define MOBILEAPP_OBSERVER_HPP_

#include "IObserver.hpp"

class MobileAppObserver : public IObserver {
public:
   MobileAppObserver() = default;
   ~MobileAppObserver() override = default;

   void update(int data) override;
};

#endif /* MOBILEAPP_OBSERVER_HPP_ */
