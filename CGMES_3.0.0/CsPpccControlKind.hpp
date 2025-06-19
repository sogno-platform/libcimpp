#ifndef CsPpccControlKind_H
#define CsPpccControlKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Active power control modes for HVDC line operating as Current Source Converter. */
	class CsPpccControlKind
	{
	public:
		enum CsPpccControlKind_ENUM
		{
			/** Control is active power control at AC side, at point of common coupling. Target is provided by ACDCConverter.targetPpcc. */
			activePower,
			/** Control is DC voltage  with target value provided by ACDCConverter.targetUdc. */
			dcVoltage,
			/** Control is DC current  with target value provided by CsConverter.targetIdc. */
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
