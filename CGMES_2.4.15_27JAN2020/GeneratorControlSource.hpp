#ifndef GeneratorControlSource_H
#define GeneratorControlSource_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	The source of controls for a generating unit.
	*/
	class GeneratorControlSource
	{
	public:
		enum GeneratorControlSource_ENUM
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

		GeneratorControlSource() : value(), initialized(false) {}
		GeneratorControlSource(GeneratorControlSource_ENUM value) : value(value), initialized(true) {}

		GeneratorControlSource& operator=(GeneratorControlSource_ENUM rop);
		operator GeneratorControlSource_ENUM() const;

		GeneratorControlSource_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, GeneratorControlSource& rop);
		friend std::ostream& operator<<(std::ostream& os, const GeneratorControlSource& obj);
	};
}
#endif
