#ifndef ExcST7BOELselectorKind_H
#define ExcST7BOELselectorKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Type of connection for the OEL input used for static excitation systems type 7B.
	*/
	class ExcST7BOELselectorKind
	{
	public:
		enum ExcST7BOELselectorKind_ENUM
		{
			/**
			 * No OEL input is used.
			 */
			noOELinput,
			/**
			 * The signal is added to Vref.
			 */
			addVref,
			/**
			 * The signal is connected in the input of the LV gate.
			 */
			inputLVgate,
			/**
			 * The signal is connected in the output of the LV gate.
			 */
			outputLVgate,
		};

		ExcST7BOELselectorKind() : value(), initialized(false) {}
		ExcST7BOELselectorKind(ExcST7BOELselectorKind_ENUM value) : value(value), initialized(true) {}

		ExcST7BOELselectorKind& operator=(ExcST7BOELselectorKind_ENUM rop);
		operator ExcST7BOELselectorKind_ENUM() const;

		ExcST7BOELselectorKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, ExcST7BOELselectorKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const ExcST7BOELselectorKind& obj);
	};
}
#endif
