#ifndef WindPlantQcontrolModeKind_H
#define WindPlantQcontrolModeKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Reactive power/voltage controller mode.
	*/
	class WindPlantQcontrolModeKind
	{
	public:
		enum WindPlantQcontrolModeKind_ENUM
		{
			/**
			 * Reactive power reference.
			 */
			reactivePower,
			/**
			 * Power factor reference.
			 */
			powerFactor,
			/**
			 * UQ static.
			 */
			uqStatic,
			/**
			 * Voltage control.
			 */
			voltageControl,
		};

		WindPlantQcontrolModeKind() : value(), initialized(false) {}
		WindPlantQcontrolModeKind(WindPlantQcontrolModeKind_ENUM value) : value(value), initialized(true) {}

		WindPlantQcontrolModeKind& operator=(WindPlantQcontrolModeKind_ENUM rop);
		operator WindPlantQcontrolModeKind_ENUM() const;

		WindPlantQcontrolModeKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, WindPlantQcontrolModeKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const WindPlantQcontrolModeKind& obj);
	};
}
#endif
