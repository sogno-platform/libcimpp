#ifndef CsOperatingModeKind_H
#define CsOperatingModeKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Operating mode for HVDC line operating as Current Source Converter.
	*/
	class CsOperatingModeKind
	{
	public:
		enum CsOperatingModeKind_ENUM
		{
			/**
			 * Operating as inverter, which is the power receiving end.
			 */
			inverter,
			/**
			 * Operating as rectifier, which is the power sending end.
			 */
			rectifier,
		};

		CsOperatingModeKind() : value(), initialized(false) {}
		CsOperatingModeKind(CsOperatingModeKind_ENUM value) : value(value), initialized(true) {}

		CsOperatingModeKind& operator=(CsOperatingModeKind_ENUM rop);
		operator CsOperatingModeKind_ENUM() const;

		CsOperatingModeKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, CsOperatingModeKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const CsOperatingModeKind& obj);
	};
}
#endif
