#pragma once
#include "eeprom.h"
#include "wrappers.h"

/* Select hand configuration */
// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS
#undef USE_I2C

#define USE_SERIAL_PD2
// #define PERMISSIVE_HOLD
#define TAPPING_TERM 200
// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT
// Enable rapid switch from tap to hold, disables double tap hold auto-repeat
#define TAPPING_FORCE_HOLD
// Auto Shift and Retro Shift (Auto Shift for Tap Hold)

// For heavy chording
#define QMK_KEYS_PER_SCAN 4