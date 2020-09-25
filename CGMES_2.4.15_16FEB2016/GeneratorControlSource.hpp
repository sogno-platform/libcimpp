#ifndef GeneratorControlSource_H
#define GeneratorControlSource_H

namespace CIMPP {
	/*
	The source of controls for a generating unit.
	*/
	enum class GeneratorControlSource
	{
		/**
		 * Not available.
		 */
		unavailable,
		/**
		 * Off of automatic generation control (AGC).
		 */
		offAGC,
		/**
		 * On automatic generation control (AGC).
		 */
		onAGC,
		/**
		 * Plant is controlling.
		 */
		plantControl,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::GeneratorControlSource& rop);
}
#endif
