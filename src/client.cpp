#include "client.hpp"
#include <cpr/cpr.h>

std::string LLMClient::post(const std::string& url, const std::string& payload, const std::string& token) {
    auto r = cpr::Post(
        cpr::Url{url},
        cpr::Header{{"Content-Type", "application/json"}, {"Authorization", "Bearer " + token}},
        cpr::Body{payload}
    );
    return r.text;
}