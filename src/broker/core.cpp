#include "broker/broker.hpp"


Broker::Broker() {}
Broker::~Broker() {}


Message<int>* Broker::poll() {
    Message<int>* message = messages.top();
    messages.pop();
    return message;
}

int Broker::produce(const Message<int>& message) {
    // messages.push(&message);
    return 0;
}
