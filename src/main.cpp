#include <iostream>
#include <unordered_map>
#include <string>
#include "broker/broker.hpp"
#include "broker/producer.hpp"
#include "broker/message.hpp"


int main() {
    Broker broker;
    Producer producer(&broker);

    std::unordered_map<std::string, std::string> headers = {
        {"type", "JSON"},
        {"event", "HuiZnaet"}
    };
    Message<int> message;
    message.headers = headers;
    message.key = "10";
    message.payload = 100;

    std::cout << message.getHeaders() << std::endl;
    std::cout << message.payload << std::endl;
    std::cout << message.key << std::endl;
    std::cout << message.created_at << std::endl;

    producer.produce(message);
}
