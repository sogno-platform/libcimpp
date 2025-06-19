#ifndef WindQcontrolModeKind_H
#define WindQcontrolModeKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief General wind turbine Q control modes <i>M</i><i><sub>qG</sub></i><i>.</i> */
	class WindQcontrolModeKind
	{
	public:
		enum WindQcontrolModeKind_ENUM
		{
			/** Voltage control (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qG&lt;/sub&gt;&lt;/i&gt; equals 0). */
			voltage,
			/** Reactive power control (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qG&lt;/sub&gt;&lt;/i&gt; equals 1). */
			reactivePower,
			/** Open loop reactive power control (only used with closed loop at plant level) (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qG&lt;/sub&gt;&lt;/i&gt;&lt;sub&gt; &lt;/sub&gt;equals 2). */
			openLoopReactivePower,
			/** Power factor control (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qG&lt;/sub&gt;&lt;/i&gt;&lt;sub&gt; &lt;/sub&gt;equals 3). */
			powerFactor,
			/** Open loop power factor control (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qG&lt;/sub&gt;&lt;/i&gt;&lt;sub&gt; &lt;/sub&gt;equals 4). */
			openLooppowerFactor,
		};

		WindQcontrolModeKind() : value(), initialized(false) {}
		WindQcontrolModeKind(WindQcontrolModeKind_ENUM value) : value(value), initialized(true) {}

		WindQcontrolModeKind& operator=(WindQcontrolModeKind_ENUM rop);
		operator WindQcontrolModeKind_ENUM() const;

		WindQcontrolModeKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, WindQcontrolModeKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const WindQcontrolModeKind& obj);
	};
}
#endif
