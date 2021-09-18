#pragma once 
#include "Character.hh"
#include<string>
#include"Skill.hh"
#include"Type.hh"

class Player : public Inheritance
{
    private:
    
    SkillType skillType{};
    CharacterType characterType{};
    Inheritance* Inheritance(NameTag nameTag, unsigned int level, float progress);

    public:
    
     Player(NameTag nameTag, unsigned int level, float progress, SkillType skillType, CharacterType characterType);
     ~Player();
     SkillType GetSkillType() const;
     std::string GetSkillTypeStr() const;
     
     CharacterType GetCharacterType() const;
     std::string GetCharacterTypeStr() const;

};