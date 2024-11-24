#ifndef WindLVRTQcontrolModesKind_H
#define WindLVRTQcontrolModesKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	LVRT Q control modes .
	*/
	class WindLVRTQcontrolModesKind
	{
	public:
		enum WindLVRTQcontrolModesKind_ENUM
		{
			/**
			 * Voltage dependent reactive current injection ().
			 */
			mode1,
			/**
			 * Reactive current injection controlled as the pre-fault value plus an additional voltage dependent reactive current injection ().
			 */
			mode2,
			/**
			 * Reactive current injection controlled as the pre-fault value plus an additional voltage dependent reactive current injection during fault, and as the pre-fault value plus an additional constant reactive current injection post fault ().
			 */
			mode3,
		};

		WindLVRTQcontrolModesKind() : value(), initialized(false) {}
		WindLVRTQcontrolModesKind(WindLVRTQcontrolModesKind_ENUM value) : value(value), initialized(true) {}

		WindLVRTQcontrolModesKind& operator=(WindLVRTQcontrolModesKind_ENUM rop);
		operator WindLVRTQcontrolModesKind_ENUM() const;

		WindLVRTQcontrolModesKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, WindLVRTQcontrolModesKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const WindLVRTQcontrolModesKind& obj);
	};
}
#endif
