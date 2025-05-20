#include "broker/producer.hpp"
#include "broker/broker.hpp"


Producer::Producer(Broker* broker) : _broker(broker) {}
Producer::~Producer() {}


int Producer::produce(const Message<int>& message) {
    _broker->produce(message);
    return 0;
}
