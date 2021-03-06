#ifndef REVERSE_DRIVE_HPP
#define REVERSE_DRIVE_HPP

#include <WPILib.h>

// Flip the direction that the drive considers "forward" so that intaking and
// shooting are both intuitive.
class Reverse_Drive : public Command {
public:
	Reverse_Drive() {};
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // REVERSE_DRIVE_HPP
