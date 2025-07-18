#ifndef EVENTPUBLISHER_HPP_
#define EVENTPUBLISHER_HPP_

#include "ISubject.hpp"
#include <vector>
#include <memory>

class EventPublisher : public ISubject {
public:
    EventPublisher() = default;
    ~EventPublisher() override = default;

    void attach(IObserver* observer) override;
    void detach(IObserver* observer) override;
    void notifyObservers() override;

    void setData(int data);

private:
    std::vector<IObserver*> _observers;
    int _data = 0;
};

#endif // EVENTPUBLISHER_HPP_
