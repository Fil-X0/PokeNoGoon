#ifndef GUARD_CONSTANTS_TMS_HMS_H
#define GUARD_CONSTANTS_TMS_HMS_H

#define FOREACH_TM(F) \
    F(PROTECT) \
    F(BREAKING_SWIPE) \
    F(SCALD) \
    F(PSYCHIC) \
    F(SUPER_FANG) \
    F(TOXIC) \
    F(FAKE_OUT) \
    F(SEISMIC_TOSS) \
    F(MAGICAL_LEAF) \
    F(ROOST) \
    F(FLIP_TURN) \
    F(EXPLOSION) \
    F(ICE_BEAM) \
    F(ICICLE_SPEAR) \
    F(AURA_SPHERE) \
    F(PSYCHIC_FANGS) \
    F(LEECH_LIFE) \
    F(ROCK_BLAST) \
    F(SOLAR_BLADE) \
    F(WEATHER_BALL) \
    F(MUD_SHOT) \
    F(SOLAR_BEAM) \
    F(BULLET_PUNCH) \
    F(THUNDERBOLT) \
    F(VOLT_SWITCH) \
    F(EARTHQUAKE) \
    F(POWER_GEM) \
    F(DIG) \
    F(NIGHT_SHADE) \
    F(SHADOW_BALL) \
    F(MISTY_EXPLOSION) \
    F(DRAINING_KISS) \
    F(DEFOG) \
    F(SHOCK_WAVE) \
    F(ELECTROWEB) \
    F(SLUDGE_BOMB) \
    F(AERIAL_ACE) \
    F(U_TURN) \
    F(ROCK_TOMB) \
    F(DUAL_WINGBEAT) \
    F(FEINT_ATTACK) \
    F(FACADE) \
    F(SMART_STRIKE) \
    F(SCREECH) \
    F(METAL_SOUND) \
    F(DAZZLING_GLEAM) \
    F(ICY_WIND) \
    F(TAILWIND) \
    F(DRAGON_CLAW) \
    F(FLAMETHROWER)

#define FOREACH_HM(F) \
    F(CUT) \
    F(FLY) \
    F(SURF) \
    F(STRENGTH) \
    F(FLASH) \
    F(ROCK_SMASH) \
    F(WATERFALL) \
    F(DIVE)

#define FOREACH_TMHM(F) \
    FOREACH_TM(F) \
    FOREACH_HM(F)

#endif
