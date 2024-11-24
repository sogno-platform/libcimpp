#ifndef SynchronousMachineOperatingMode_H
#define SynchronousMachineOperatingMode_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Synchronous machine operating mode.
	*/
	class SynchronousMachineOperatingMode
	{
	public:
		enum SynchronousMachineOperatingMode_ENUM
		{
			generator,
			condenser,
			motor,
		};

		SynchronousMachineOperatingMode() : value(), initialized(false) {}
		SynchronousMachineOperatingMode(SynchronousMachineOperatingMode_ENUM value) : value(value), initialized(true) {}

		SynchronousMachineOperatingMode& operator=(SynchronousMachineOperatingMode_ENUM rop);
		operator SynchronousMachineOperatingMode_ENUM() const;

		SynchronousMachineOperatingMode_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, SynchronousMachineOperatingMode& rop);
		friend std::ostream& operator<<(std::ostream& os, const SynchronousMachineOperatingMode& obj);
	};
}
#endif
