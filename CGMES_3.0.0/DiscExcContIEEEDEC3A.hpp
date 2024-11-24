#ifndef DiscExcContIEEEDEC3A_H
#define DiscExcContIEEEDEC3A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DiscontinuousExcitationControlDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	IEEE type DEC3A model. In some systems, the stabilizer output is disconnected from the regulator immediately following a severe fault to prevent the stabilizer from competing with action of voltage regulator during the first swing. Reference: IEEE 421.5-2005 12.4.
	*/
	class DiscExcContIEEEDEC3A : public DiscontinuousExcitationControlDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		DiscExcContIEEEDEC3A();
		~DiscExcContIEEEDEC3A() override;

		CIMPP::Seconds tdr;  /* Reset time delay (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;DR&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::PU vtmin;  /* Terminal undervoltage comparison level (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;TMIN&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DiscExcContIEEEDEC3A_factory();
}
#endif
