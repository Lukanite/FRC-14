#ifndef SUBSYSTEMS_HPP
#define SUBSYSTEMS_HPP

#include "drive_base.hpp"
#include "collector.hpp"
#include "vision.hpp"
#include "compressor_system.hpp"
#include "underglow.hpp"
#include "catapult.hpp"
#include "puller.hpp"
#include "camera_light.hpp"

// A copy of each subsystem on the robot, to be shared among the commands which
// require them.
namespace Subsystems {
	extern Drive_Base * drive_base;
	extern Collector * collector;
	extern Vision *vision;
	extern Compressor_System *compressor_system;
	extern Underglow *underglow;
	extern Catapult *catapult;
	extern Puller *puller;
	extern Camera_Light *camera_light;
	void initialize();
}

#endif // SUBSYSTEMS_HPP
