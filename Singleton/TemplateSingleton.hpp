#ifndef TEMPLATE_SINGLETON_HPP
#define TEMPLATE_SINGLETON_HPP

#include <memory>
#include <mutex>

template <typename T>
class Singleton
{
public:
    // Returns a reference to the singleton instance
    static T& getInstance()
    {
        static T instance; // Thread-safe in C++11 and above
        return instance;
    }

    // Delete copy/move constructors and assignment operators
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton& operator=(Singleton&&) = delete;

protected:
    Singleton() = default;
    virtual ~Singleton() = default;
};

#endif // TEMPLATE_SINGLETON_HPP
