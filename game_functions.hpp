#pragma once

#include "../BaseStructures/player.hpp"
#include "../Math/math.hpp"

namespace gamehacking::game_functions
{
	bool InLineOfSight(gamehacking::base_structures::Player&);
	gamehacking::math::Vector3D Project(gamehacking::math::Vector3D&);
	gamehacking::math::Vector3D GetResolution(void);
	double GetFOV(void);
	void AimAt(gamehacking::math::Vector3D location);
}