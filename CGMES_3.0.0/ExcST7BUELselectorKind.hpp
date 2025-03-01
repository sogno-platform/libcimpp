#ifndef ExcST7BUELselectorKind_H
#define ExcST7BUELselectorKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Types of connections for the UEL input used for static excitation systems type 7B. */
	class ExcST7BUELselectorKind
	{
	public:
		enum ExcST7BUELselectorKind_ENUM
		{
			/** No UEL input is used.  Corresponds to &lt;i&gt;UELin&lt;/i&gt; not = 1 and not = 2 and not = 3 on the ExcST7B diagram. Original ExcST7B model would have called this &lt;i&gt;UELin&lt;/i&gt; = 0. */
			noUELinput,
			/** The signal is added to &lt;i&gt;Vref&lt;/i&gt;. Corresponds to &lt;i&gt;UELin&lt;/i&gt; = 1 on the ExcST7B diagram. */
			addVref,
			/** The signal is connected into the input &lt;i&gt;HVGate&lt;/i&gt;.  Corresponds to &lt;i&gt;UELin&lt;/i&gt; = 2 on the ExcST7B diagram. */
			inputHVgate,
			/** The signal is connected into the output &lt;i&gt;HVGate&lt;/i&gt;.  Corresponds to &lt;i&gt;UELin&lt;/i&gt; = 3 on the ExcST7B diagram. */
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
