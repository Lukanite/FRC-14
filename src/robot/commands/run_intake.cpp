#include "run_intake.hpp"
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Run_Intake::Run_Intake() {
	Requires(Subsystems::intake);
}

void Run_Intake::Execute() {
	float speed = UI::Secondary_Driver::controller->get_left_y();
	Subsystems::intake->set_normalized(speed);
}

bool Run_Intake::IsFinished() {
	return false;
}
