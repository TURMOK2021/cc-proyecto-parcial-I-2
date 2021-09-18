#include<iostream>
#include"Player.hh"

Player::Player(NameTag nameTag, unsigned int level, float progress, SkillType skillType, CharacterType characterType)
{
    this->skillType = skillType;
    this->characterType = characterType;
}

SkillType skillType::GetSkillType() const
{
    return skillType;
}
std::string GetSkillTypeStr() const
 {
     return SkillType == FireLance ? "FireLance" : SkillType == CronoStasis ? "CronoStasis" : SkillType == BlackMeteor ? "BlackMeteor" : "EndOfTheThinks";
 }

CharacterType characterType::GetCharacterType() const
{
    return characterType;
}
