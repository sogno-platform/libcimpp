#ifndef ExcREXSFeedbackSignalKind_H
#define ExcREXSFeedbackSignalKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Type of rate feedback signals.
	*/
	class ExcREXSFeedbackSignalKind
	{
	public:
		enum ExcREXSFeedbackSignalKind_ENUM
		{
			/**
			 * The voltage regulator output voltage is used. It is the same as exciter field voltage.
			 */
			fieldVoltage,
			/**
			 * The exciter field current is used.
			 */
			fieldCurrent,
			/**
			 * The output voltage of the exciter is used.
			 */
			outputVoltage,
		};

		ExcREXSFeedbackSignalKind() : value(), initialized(false) {}
		ExcREXSFeedbackSignalKind(ExcREXSFeedbackSignalKind_ENUM value) : value(value), initialized(true) {}

		ExcREXSFeedbackSignalKind& operator=(ExcREXSFeedbackSignalKind_ENUM rop);
		operator ExcREXSFeedbackSignalKind_ENUM() const;

		ExcREXSFeedbackSignalKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, ExcREXSFeedbackSignalKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const ExcREXSFeedbackSignalKind& obj);
	};
}
#endif
