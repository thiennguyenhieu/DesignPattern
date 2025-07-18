#include "EventPublisher.hpp"
#include <algorithm>

void EventPublisher::attach(IObserver* observer) {
   if (observer && std::find(_observers.begin(), _observers.end(), observer) == _observers.end()) {
      _observers.push_back(observer);
   }
}

void EventPublisher::detach(IObserver* observer) {
   auto it = std::remove(_observers.begin(), _observers.end(), observer);
   if (it != _observers.end()) {
      _observers.erase(it, _observers.end());
   }
}

void EventPublisher::notifyObservers() {
   for (auto* observer : _observers) {
      if (observer) {
         observer->update(_data);
      }
   }
}

void EventPublisher::setData(int data) {
   _data = data;
   notifyObservers();
}
