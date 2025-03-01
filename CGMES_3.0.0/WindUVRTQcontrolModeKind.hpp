#ifndef WindUVRTQcontrolModeKind_H
#define WindUVRTQcontrolModeKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief UVRT Q control modes <i>M</i><i><sub>qUVRT</sub></i><i>.</i> */
	class WindUVRTQcontrolModeKind
	{
	public:
		enum WindUVRTQcontrolModeKind_ENUM
		{
			/** Voltage-dependent reactive current injection (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qUVRT&lt;/sub&gt;&lt;/i&gt; &lt;sub&gt; &lt;/sub&gt;equals 0). */
			mode0,
			/** Reactive current injection controlled as the pre-fault value plus an additional voltage dependent reactive current injection (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qUVRT&lt;/sub&gt;&lt;/i&gt; equals 1). */
			mode1,
			/** Reactive current injection controlled as the pre-fault value plus an additional voltage-dependent reactive current injection during fault, and as the pre-fault value plus an additional constant reactive current injection post fault (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qUVRT&lt;/sub&gt;&lt;/i&gt;&lt;sub&gt;  &lt;/sub&gt;equals 2). */
			mode2,
		};

		WindUVRTQcontrolModeKind() : value(), initialized(false) {}
		WindUVRTQcontrolModeKind(WindUVRTQcontrolModeKind_ENUM value) : value(value), initialized(true) {}

		WindUVRTQcontrolModeKind& operator=(WindUVRTQcontrolModeKind_ENUM rop);
		operator WindUVRTQcontrolModeKind_ENUM() const;

		WindUVRTQcontrolModeKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, WindUVRTQcontrolModeKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const WindUVRTQcontrolModeKind& obj);
	};
}
#endif
