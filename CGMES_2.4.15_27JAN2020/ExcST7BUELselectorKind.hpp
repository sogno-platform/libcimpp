#ifndef ExcST7BUELselectorKind_H
#define ExcST7BUELselectorKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Type of connection for the UEL input used for static excitation systems type 7B.
	*/
	class ExcST7BUELselectorKind
	{
	public:
		enum ExcST7BUELselectorKind_ENUM
		{
			/**
			 * No UEL input is used.
			 */
			noUELinput,
			/**
			 * The signal is added to Vref.
			 */
			addVref,
			/**
			 * The signal is connected in the input of the HV gate.
			 */
			inputHVgate,
			/**
			 * The signal is connected in the output of the HV gate.
			 */
			outputHVgate,
		};

		ExcST7BUELselectorKind() : value(), initialized(false) {}
		ExcST7BUELselectorKind(ExcST7BUELselectorKind_ENUM value) : value(value), initialized(true) {}

		ExcST7BUELselectorKind& operator=(ExcST7BUELselectorKind_ENUM rop);
		operator ExcST7BUELselectorKind_ENUM() const;

		ExcST7BUELselectorKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, ExcST7BUELselectorKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const ExcST7BUELselectorKind& obj);
	};
}
#endif
