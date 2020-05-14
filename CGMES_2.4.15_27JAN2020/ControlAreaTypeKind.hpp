#ifndef ControlAreaTypeKind_H
#define ControlAreaTypeKind_H

namespace CIMPP {
	/*
	The type of control area.
	*/
	enum class ControlAreaTypeKind
	{
		/**
		 * Used for automatic generation control.
		 */
		AGC,
		/**
		 * Used for load forecast.
		 */
		Forecast,
		/**
		 * Used for interchange specification or control.
		 */
		Interchange,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::ControlAreaTypeKind& rop);
}
#endif
