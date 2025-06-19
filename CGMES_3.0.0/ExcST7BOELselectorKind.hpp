#ifndef ExcST7BOELselectorKind_H
#define ExcST7BOELselectorKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Types of connections for the OEL input used for static excitation systems type 7B. */
	class ExcST7BOELselectorKind
	{
	public:
		enum ExcST7BOELselectorKind_ENUM
		{
			/** No OEL input is used. Corresponds to &lt;i&gt;OELin&lt;/i&gt; not = 1 and not = 2 and not = 3 on the ExcST7B diagram. Original ExcST7B model would have called this &lt;i&gt;OELin&lt;/i&gt; = 0. */
			noOELinput,
			/** The signal is added to &lt;i&gt;Vref&lt;/i&gt;.  Corresponds to &lt;i&gt;OELin&lt;/i&gt; = 1 on the ExcST7B diagram. */
			addVref,
			/** The signal is connected into the input &lt;i&gt;LVGate&lt;/i&gt;. Corresponds to &lt;i&gt;OELin&lt;/i&gt; = 2 on the ExcST7B diagram. */
			inputLVgate,
			/** The signal is connected into the output &lt;i&gt;LVGate&lt;/i&gt;.  Corresponds to &lt;i&gt;OELin&lt;/i&gt; = 3 on the ExcST7B diagram. */
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
