//
// Created by stevlulz on 3/7/19.
//

#ifndef TMP_PROJ_ENUM_H
#define TMP_PROJ_ENUM_H

#include <iostream>
enum SQUARE_TYPE
{
    NONE,
    ENGINE_MOTOR,
    ENGINE_WEAPON,
    ENGINE_PART,
    ENGINE_MOTOR_DESACTIVATED,
    ENGINE_WEAPON_DESACTIVATED,
    //Burned states + Pertforated states
    ENGINE_MOTOR_BURNED,
    ENGINE_WEAPON_BURNED,
    ENGINE_PART_BURNED,
    ENGINE_MOTOR_DESACTIVATED_BURNED,
    ENGINE_WEAPON_DESACTIVATED_BURNED,
    ENGINE_MOTOR_PERFORATED,
    ENGINE_WEAPON_PERFORATED,
    ENGINE_PART_PERFORATED,
    ENGINE_MOTOR_DESACTIVATED_PERFORATED,
    ENGINE_WEAPON_DESACTIVATED_PERFORATED,
    ENGINE_MOTOR_BURNED_PERFORATED,
    ENGINE_WEAPON_BURNED_PERFORATED,
    ENGINE_PART_BURNED_PERFORATED,
    ENGINE_MOTOR_DESACTIVATED_BURNED_PERFORATED,
    ENGINE_WEAPON_DESACTIVATED_BURNED_PERFORATED,
    ENGINE_MOTOR_DEAD,
    ENGINE_WEAPON_DEAD,
    ENGINE_PART_DEAD
};

enum MOTOR_STATE
{
    MOTOR,
    MOTOR_BURNED,
    MOTOR_PERFORATED,
    MOTOR_PERFORATED_BURNED,
    MOTOR_DESACTIVATED,
    MOTOR_DESACTIVATED_BURNED,
    MOTOR_DESACTIVATED_PERFORED,
    MOTOR_DESACTIVATED_BURNED_PERFORED,
    MOTOR_DEAD
};

enum WEAPON_STATE
{
    WEAPON,
    WEAPON_BURNED,
    WEAPON_PERFORATED,
    WEAPON_BURNED_PERFORATED,
    WEAPON_DESACTIVATED,
    WEAPON_DESACTIVATED_BURNED,
    WEAPON_DESACTIVATED_PERFORED,
    WEAPON_DESACTIVATED_BURNED_PERFORED,
    WEAPON_DEAD
};

enum PART_STATE
{
    PART,
    PART_BURNED,
    PART_PERFORATED,
    PART_BURNED_PERFORATED
    PART_DEAD
};

enum ENGINE_TYPE
{
    PORTE_AVION,
    CROISEUR,
    CONTRE_TORPILLEUR,
    CUIRASSE,
    TORPILLEUR,
    BOMBARDIER,
    INTERCEPTEUR,
    BROUILLEUR,
    PATROUILE,
    RECONNAISSANCE,
    NOT_INTRODUCED
};

enum SHOT_TYPE
{
    PORTE_AVION_SKILL,
    CROISEUR_SKILL,
    CONTRE_TORPILLEUR_SKILL,
    CUIRASSE_SKILL,
    TORPILLEUR_SKILL,
    BOMBARDIER_SKILL,
    INTERCEPTEUR_SKILL,
    BROUILLEUR_SKILL,
    PATROUILE_SKILL,
    RECONNAISSANCE_SKILL
};


#endif //TMP_PROJ_ENUM_H
