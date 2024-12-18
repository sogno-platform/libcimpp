#ifndef ExcIEEEST1AUELselectorKind_H
#define ExcIEEEST1AUELselectorKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Types of connections for the UEL input used in ExcIEEEST1A.
	*/
	class ExcIEEEST1AUELselectorKind
	{
	public:
		enum ExcIEEEST1AUELselectorKind_ENUM
		{
			/**
			 * Ignore UEL signal.
			 */
			ignoreUELsignal,
			/**
			 * UEL input HV gate with voltage regulator output.
			 */
			inputHVgateVoltageOutput,
			/**
			 * UEL input HV gate with error signal.
			 */
			inputHVgateErrorSignal,
			/**
			 * UEL input added to error signal.
			 */
			inputAddedToErrorSignal,
		};

		ExcIEEEST1AUELselectorKind() : value(), initialized(false) {}
		ExcIEEEST1AUELselectorKind(ExcIEEEST1AUELselectorKind_ENUM value) : value(value), initialized(true) {}

		ExcIEEEST1AUELselectorKind& operator=(ExcIEEEST1AUELselectorKind_ENUM rop);
		operator ExcIEEEST1AUELselectorKind_ENUM() const;

		ExcIEEEST1AUELselectorKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, ExcIEEEST1AUELselectorKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const ExcIEEEST1AUELselectorKind& obj);
	};
}
#endif
