#pragma once

#include <Geode/Geode.hpp>

extern bool g_cbfSoftToggle;

void earlyInputSetup();

bool collectEarlyClicks(std::vector<PlayerButtonCommand> &out, double &target,
                        double lastTime, double sampleSeconds,
                        double stepSeconds, bool player2Block,
                        bool isTwoPlayer);

#ifdef GEODE_IS_WINDOWS

void refreshCbfInputBinds();
#endif
