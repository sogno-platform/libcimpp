#ifndef CsOperatingModeKind_H
#define CsOperatingModeKind_H

namespace CIMPP {
	/*
	Operating mode for HVDC line operating as Current Source Converter.
	*/
	enum class CsOperatingModeKind
	{
		/**
		 * Operating as inverter
		 */
		inverter,
		/**
		 * Operating as rectifier.
		 */
		rectifier,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::CsOperatingModeKind& rop);
}
#endif
