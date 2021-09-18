#include<iostream>
#include"Character.hh"

Inheritance::Inheritance(NameTag nameTag, unsigned int level, float progress)
{
    this->level = level;
    this->progress = progress;
}

NameTag nameTag::GetNameTag() const
{
    return nameTag;
}
std::string GetNameTagStr() const
 {
    return nameTag == SURPRICE ? "Surprice" : nameTag == KILLER ? "Killer" : "Knight";
 }


Inheritance::~Inheritance()
{
    std::cout << "Game Over" << std::endl;
}

unsigned int Inheritance::GetLevel() const
{
    return level;
}

float Inheritance::GetProgress() const
{
    return progress;
}
