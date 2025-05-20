#include <queue>
#include <ctime>
#include <string>
#include <unordered_map>

#ifndef MESSAGE_H
#define MESSAGE_H


template <typename T>
struct Message {
    std::unordered_map<std::string, std::string> headers;
    std::string key;
    T payload;
    std::time_t created_at = std::time(nullptr);

    std::string getHeaders() const {
        std::string headers_str;
        for (std::string& header : headers) {
            headers_str += header + " ";
        }
        return headers_str;
    }
};

#endif
