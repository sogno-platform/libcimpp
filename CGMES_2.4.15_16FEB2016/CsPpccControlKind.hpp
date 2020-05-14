#ifndef CsPpccControlKind_H
#define CsPpccControlKind_H

namespace CIMPP {
	/*
	Active power control modes for HVDC line operating as Current Source Converter.
	*/
	enum class CsPpccControlKind
	{
		/**
		 * Active power control at AC side.
		 */
		activePower,
		/**
		 * DC voltage control.
		 */
		dcVoltage,
		/**
		 * DC current control
		 */
		dcCurrent,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::CsPpccControlKind& rop);
}
#endif
