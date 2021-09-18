#pragma once
#include<Game-Tag.hh>
#include<string>

class Inheritance
{
    private: 
    unsigned int level{};
    float progress{};
    NameTag nameTag{}; 




    public:
    Inheritance(NameTag nameTag, unsigned int level, float progress);
    ~Inheritance();
    unsigned int GetLevel() const;
    float GetProgress() const;
    NameTag GetNameTag() const;
    std::string GetNameTagStr() const;
};