#ifndef WindGenUnitKind_H
#define WindGenUnitKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Kind of wind generating unit. */
	class WindGenUnitKind
	{
	public:
		enum WindGenUnitKind_ENUM
		{
			/** The wind generating unit is located offshore. */
			offshore,
			/** The wind generating unit is located onshore. */
			onshore,
		};

		WindGenUnitKind() : value(), initialized(false) {}
		WindGenUnitKind(WindGenUnitKind_ENUM value) : value(value), initialized(true) {}

		WindGenUnitKind& operator=(WindGenUnitKind_ENUM rop);
		operator WindGenUnitKind_ENUM() const;

		WindGenUnitKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, WindGenUnitKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const WindGenUnitKind& obj);
	};
}
#endif
