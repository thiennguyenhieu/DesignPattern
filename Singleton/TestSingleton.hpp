#ifndef TESTSINGLETON_HPP_
#define TESTSINGLETON_HPP_

#include "TemplateSingleton.hpp"

class TestSingleton : public Singleton<TestSingleton>
{
    friend class Singleton<TestSingleton>;

private:
    TestSingleton() = default;
    ~TestSingleton() = default;

public:
    void printString();
};

#endif // TESTSINGLETON_HPP_
