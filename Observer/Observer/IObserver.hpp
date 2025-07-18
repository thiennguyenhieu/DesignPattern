#ifndef IOBSERVER_HPP_
#define IOBSERVER_HPP_

class IObserver {
public:
    virtual ~IObserver() = default;

    virtual void update(int data) = 0;
};

#endif // IOBSERVER_HPP_
