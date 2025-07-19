#include "Observer/EventPublisher.hpp"
#include "Clients/MobileAppObserver.hpp"
#include "Clients/WebAppObserver.hpp"

int main()
{
   EventPublisher subject;

   MobileAppObserver mobileObserver;
   WebAppObserver webObserver;

   subject.attach(&mobileObserver);
   subject.attach(&webObserver);
   subject.setData(1);

   return 0;
}
