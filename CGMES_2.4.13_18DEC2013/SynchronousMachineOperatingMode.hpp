#ifndef SynchronousMachineOperatingMode_H
#define SynchronousMachineOperatingMode_H

namespace CIMPP {
	/*
	Synchronous machine operating mode.
	*/
	enum class SynchronousMachineOperatingMode
	{
		/**
		 * 
		 */
		generator,
		/**
		 * 
		 */
		condenser,
		/**
		 * 
		 */
		motor,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::SynchronousMachineOperatingMode& rop);
}
#endif
