#include "MobileAppObserver.hpp"
#include <iostream>

void MobileAppObserver::update(int data) {
   std::cout << "Update for Mobile client: " << data << std::endl;
}

