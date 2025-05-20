#include "broker/message.hpp"
#include "broker/broker.hpp"


#ifndef PRODUCER_H
#define PRODUCER_H

class Producer {
    Broker* _broker;

public:
    Producer(Broker* broker);
    ~Producer();

public:
    int produce(const Message<int>& message);
};

#endif
