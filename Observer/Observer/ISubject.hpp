#ifndef ISUBJECT_HPP_
#define ISUBJECT_HPP_

#include "IObserver.hpp"

class ISubject {
public:
    virtual ~ISubject() = default;

    virtual void attach(IObserver* observer) = 0;
    virtual void detach(IObserver* observer) = 0;
    virtual void notifyObservers() = 0;
};

#endif // ISUBJECT_HPP_
