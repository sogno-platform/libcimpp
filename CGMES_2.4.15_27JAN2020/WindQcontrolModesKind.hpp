#ifndef WindQcontrolModesKind_H
#define WindQcontrolModesKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	General wind turbine Q control modes .
	*/
	class WindQcontrolModesKind
	{
	public:
		enum WindQcontrolModesKind_ENUM
		{
			/**
			 * Voltage control ().
			 */
			voltage,
			/**
			 * Reactive power control ().
			 */
			reactivePower,
			/**
			 * Open loop reactive power control (only used with closed loop at plant level) ().
			 */
			openLoopReactivePower,
			/**
			 * Power factor control ().
			 */
			powerFactor,
		};

		WindQcontrolModesKind() : value(), initialized(false) {}
		WindQcontrolModesKind(WindQcontrolModesKind_ENUM value) : value(value), initialized(true) {}

		WindQcontrolModesKind& operator=(WindQcontrolModesKind_ENUM rop);
		operator WindQcontrolModesKind_ENUM() const;

		WindQcontrolModesKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, WindQcontrolModesKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const WindQcontrolModesKind& obj);
	};
}
#endif
