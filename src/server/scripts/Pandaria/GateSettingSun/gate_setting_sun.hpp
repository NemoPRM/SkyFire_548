////////////////////////////////////////////////////////////////////////////////
///
///  MILLENIUM-STUDIO
///  Copyright 2015 Millenium-studio SARL
///  All Rights Reserved.
///
////////////////////////////////////////////////////////////////////////////////

#ifndef GATE_SETTING_SUN_HPP
# define GATE_SETTING_SUN_HPP

# include "SpellScript.h"
# include "Map.h"
# include "Creature.h"
# include "CreatureAIImpl.h"
# include "ScriptMgr.h"
# include "ScriptedCreature.h"
# include "Vehicle.h"
# include "Spline.h"
# include "InstanceScript.h"

uint32 const EncounterCount = 4;

# define INVISIBLE_CREATURE_MODEL 11686

enum DataTypes
{
    DATA_KIPTILAK               = 0,
    DATA_GADOK                  = 1,
    DATA_RIMOK                  = 2,
    DATA_RAIGONN                = 3,

    DATA_IN_FIGHT               = 4,

    DATA_OPEN_FIRST_DOOR        = 5,
    DATA_BRASIER_CLICKED        = 6,
    DATA_RANDOM_BOMBARDER       = 7,
    DATA_RANDOM_BOMB_STALKER    = 8,
    MAX_DATA
};

enum CreaturesIds
{
    NPC_KIPTILAK                = 56906,
    NPC_GADOK                   = 56589,
    NPC_RIMOK                   = 56636,
    NPC_RAIGONN                 = 56877,

    NPC_KRITHUK_BOMBARDER       = 56706,
    NPC_BOMB_STALKER            = 56709,

    // Kip'Tilak
    NPC_STABLE_MUNITION         = 56917,

    NPC_EXPLOSION_BUNNY_N_M     = 56911,
    NPC_EXPLOSION_BUNNY_S_M     = 56918,
    NPC_EXPLOSION_BUNNY_E_M     = 56919,
    NPC_EXPLOSION_BUNNY_W_M     = 56920,

    NPC_EXPLOSION_BUNNY_N_P     = 59205,
    NPC_EXPLOSION_BUNNY_S_P     = 59206,
    NPC_EXPLOSION_BUNNY_E_P     = 59207,
    NPC_EXPLOSION_BUNNY_W_P     = 59208,

    // Gadok
    NPC_STALKER_NORTH_SOUTH     = 56932,
    NPC_STALKER_WEST_EAST       = 56913,

    NPC_KRIKTHIK_STRIKER        = 59778, // Appear on Gadok bombardment
    NPC_KRIKTHIK_DISRUPTOR      = 59794, // Bombard tower when Gadok is in fight

    // Rimok
    NPC_ADD_GENERATOR           = 59834,

    NPC_KRIKTHIK_SWARMER        = 59835,
    NPC_KRIKTHIK_SABOTEUR       = 60447,

    // Raingonn
    NPC_WEAK_SPOT               = 56895,

    NPC_KRIKTHIK_PROTECTORAT    = 56929,
    NPC_KRIKTHIK_ENGULFER       = 56912,
    NPC_KRIKTHIK_SWARM_BRINGER  = 56930,

    NPC_ARTILLERY               = 59819
};

enum ObjectsIds
{
    GO_KIPTILAK_ENTRANCE_DOOR   = 212982,
    GO_KIPTILAK_WALLS           = 214629,
    GO_KIPTILAK_MANTID_BOMBS    = 215757,
    GO_KIPTILAK_EXIT_DOOR       = 212983,

    GO_SIGNAL_FIRE              = 213507,

    GO_RIMAK_AFTER_DOOR         = 212985,

    GO_RAIGONN_DOOR             = 212986,
    GO_RAIGONN_AFTER_DOOR       = 214261,

    GO_GREATDOOR_SECOND_DOOR    = 214888,

    GO_WALL_C                   = 213198,
    GO_WALL_B                   = 213199,
    GO_WALL_A                   = 213200,

    GO_PORTAL_TEMP_CORDE        = 400001,
    GO_PORTAL_TEMP_GADOK        = 400002,

    GO_GREAT_DOOR               = 211245,
    GO_GREAT_DOOR_PHASE_2       = 211246,

    ChallengeModeDoor           = 239409
};

enum eSettingSun
{
    CINEMATIC_SETTING_SUN       = 265
};

enum eScenarioDatas
{
    ScenarioID  = 48,
    /// Bosses datas
    Kiptilak    = 19245,
    Gadok       = 19246,
    Rimok       = 19247,
    Raigonn     = 19248,
    Ennemies    = 20017,
    KillCount   = 25
};

#endif ///< GATE_SETTING_SUN_HPP
