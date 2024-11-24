#ifndef BatteryStateKind_H
#define BatteryStateKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	The state of the battery unit.
	*/
	class BatteryStateKind
	{
	public:
		enum BatteryStateKind_ENUM
		{
			/**
			 * Stored energy is decreasing.
			 */
			discharging,
			/**
			 * Unable to charge, and not discharging.
			 */
			full,
			/**
			 * Neither charging nor discharging, but able to do so.
			 */
			waiting,
			/**
			 * Stored energy is increasing.
			 */
			charging,
			/**
			 * Unable to discharge, and not charging.
			 */
			empty,
		};

		BatteryStateKind() : value(), initialized(false) {}
		BatteryStateKind(BatteryStateKind_ENUM value) : value(value), initialized(true) {}

		BatteryStateKind& operator=(BatteryStateKind_ENUM rop);
		operator BatteryStateKind_ENUM() const;

		BatteryStateKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, BatteryStateKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const BatteryStateKind& obj);
	};
}
#endif
