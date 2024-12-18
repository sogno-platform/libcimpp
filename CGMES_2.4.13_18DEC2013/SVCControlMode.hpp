#ifndef SVCControlMode_H
#define SVCControlMode_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Static VAr Compensator control mode.
	*/
	class SVCControlMode
	{
	public:
		enum SVCControlMode_ENUM
		{
			reactivePower,
			voltage,
		};

		SVCControlMode() : value(), initialized(false) {}
		SVCControlMode(SVCControlMode_ENUM value) : value(value), initialized(true) {}

		SVCControlMode& operator=(SVCControlMode_ENUM rop);
		operator SVCControlMode_ENUM() const;

		SVCControlMode_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, SVCControlMode& rop);
		friend std::ostream& operator<<(std::ostream& os, const SVCControlMode& obj);
	};
}
#endif
