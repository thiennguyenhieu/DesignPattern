#include "WebAppObserver.hpp"
#include <iostream>

void WebAppObserver::update(int data) {
   std::cout << "Update for Web client: " << data << std::endl;
}
