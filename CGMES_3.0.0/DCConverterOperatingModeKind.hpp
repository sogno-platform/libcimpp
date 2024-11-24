#ifndef DCConverterOperatingModeKind_H
#define DCConverterOperatingModeKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	The operating mode of an HVDC bipole.
	*/
	class DCConverterOperatingModeKind
	{
	public:
		enum DCConverterOperatingModeKind_ENUM
		{
			/**
			 * Bipolar operation.
			 */
			bipolar,
			/**
			 * Monopolar operation with metallic return.
			 */
			monopolarMetallicReturn,
			/**
			 * Monopolar operation with ground return.
			 */
			monopolarGroundReturn,
		};

		DCConverterOperatingModeKind() : value(), initialized(false) {}
		DCConverterOperatingModeKind(DCConverterOperatingModeKind_ENUM value) : value(value), initialized(true) {}

		DCConverterOperatingModeKind& operator=(DCConverterOperatingModeKind_ENUM rop);
		operator DCConverterOperatingModeKind_ENUM() const;

		DCConverterOperatingModeKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, DCConverterOperatingModeKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const DCConverterOperatingModeKind& obj);
	};
}
#endif
