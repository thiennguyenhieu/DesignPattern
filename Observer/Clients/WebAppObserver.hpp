#ifndef WEBAPP_OBSERVER_HPP_
#define WEBAPP_OBSERVER_HPP_

#include "../Observer/IObserver.hpp"

class WebAppObserver : public IObserver {
public:
   WebAppObserver() = default;
   ~WebAppObserver() override = default;

   void update(int data) override;
};

#endif // WEBAPP_OBSERVER_HPP_
