#pragma once

#include <const.h>
#include <gametrace.h>

using NetworkStateChanged_t = NetworkStateChangedData;

class GameSessionConfiguration_t {};

#ifndef FL_PAWN_FAKECLIENT
#define FL_PAWN_FAKECLIENT FL_BOT
#endif

#ifndef FL_CONTROLLER_FAKECLIENT
#define FL_CONTROLLER_FAKECLIENT FL_FAKECLIENT
#endif
