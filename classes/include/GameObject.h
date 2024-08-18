#pragma once
#include <string>

class GameObject
{
public:
    GameObject(const std::string& objectName);
    std::string GetObjectName();
private:
    std::string objectName;
};