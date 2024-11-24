#ifndef CsPpccControlKind_H
#define CsPpccControlKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Active power control modes for HVDC line operating as Current Source Converter.
	*/
	class CsPpccControlKind
	{
	public:
		enum CsPpccControlKind_ENUM
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

		CsPpccControlKind() : value(), initialized(false) {}
		CsPpccControlKind(CsPpccControlKind_ENUM value) : value(value), initialized(true) {}

		CsPpccControlKind& operator=(CsPpccControlKind_ENUM rop);
		operator CsPpccControlKind_ENUM() const;

		CsPpccControlKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, CsPpccControlKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const CsPpccControlKind& obj);
	};
}
#endif
