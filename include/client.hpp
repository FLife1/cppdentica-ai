#pragma once
#include<string>

class LLMClient{
public:
    static std::string post(const std::string& url, const std::string& payload, const std::string& token);
};
