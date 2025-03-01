#ifndef ControlAreaTypeKind_H
#define ControlAreaTypeKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief The type of control area. */
	class ControlAreaTypeKind
	{
	public:
		enum ControlAreaTypeKind_ENUM
		{
			/** Used for automatic generation control. */
			AGC,
			/** Used for load forecast. */
			Forecast,
			/** Used for interchange specification or control. */
			Interchange,
		};

		ControlAreaTypeKind() : value(), initialized(false) {}
		ControlAreaTypeKind(ControlAreaTypeKind_ENUM value) : value(value), initialized(true) {}

		ControlAreaTypeKind& operator=(ControlAreaTypeKind_ENUM rop);
		operator ControlAreaTypeKind_ENUM() const;

		ControlAreaTypeKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, ControlAreaTypeKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const ControlAreaTypeKind& obj);
	};
}
#endif
