#ifndef DCConverterOperatingModeKind_H
#define DCConverterOperatingModeKind_H

namespace CIMPP {
	/*
	The operating mode of an HVDC bipole.
	*/
	enum class DCConverterOperatingModeKind
	{
		/**
		 * Bipolar operation.
		 */
		bipolar,
		/**
		 * Monopolar operation with metallic return
		 */
		monopolarMetallicReturn,
		/**
		 * Monopolar operation with ground return
		 */
		monopolarGroundReturn,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::DCConverterOperatingModeKind& rop);
}
#endif
