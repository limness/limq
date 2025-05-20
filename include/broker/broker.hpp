#include <queue>
#include "broker/message.hpp"

#ifndef BROKER_H
#define BROKER_H

class Broker {
    std::priority_queue<Message<int>*> messages;

public:
    Broker();
    ~Broker();

public:
    int produce(const Message<int>& message);
    Message<int>* poll();
};

#endif
