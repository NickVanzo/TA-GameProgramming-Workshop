#include "../include/GameObject.h"
#include <iostream>

GameObject::GameObject(const std::string &objectName)
    : objectName(objectName) {
      
    }

std::string GameObject::GetObjectName()
{
  return this->objectName;
}