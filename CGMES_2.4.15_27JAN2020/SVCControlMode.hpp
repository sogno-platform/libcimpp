#ifndef SVCControlMode_H
#define SVCControlMode_H

namespace CIMPP {
	/*
	Static VAr Compensator control mode.
	*/
	enum class SVCControlMode
	{
		/**
		 * 
		 */
		reactivePower,
		/**
		 * 
		 */
		voltage,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::SVCControlMode& rop);
}
#endif
