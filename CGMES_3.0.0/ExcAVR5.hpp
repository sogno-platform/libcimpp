#ifndef ExcAVR5_H
#define ExcAVR5_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Manual excitation control with field circuit resistance. This model can be used as a very simple representation of manual voltage control.
	*/
	class ExcAVR5 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAVR5();
		~ExcAVR5() override;

		CIMPP::PU ka;  /* Gain (&lt;i&gt;Ka&lt;/i&gt;). Default: nullptr */
		CIMPP::PU rex;  /* Effective output resistance (&lt;i&gt;Rex&lt;/i&gt;). &lt;i&gt;Rex&lt;/i&gt; represents the effective output resistance seen by the excitation system. Default: nullptr */
		CIMPP::Seconds ta;  /* Time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcAVR5_factory();
}
#endif
