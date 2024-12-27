#ifndef Switch_H
#define Switch_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Boolean.hpp"
#include "CurrentFlow.hpp"

namespace CIMPP
{
	class SvSwitch;
	class SwitchSchedule;

	/*
	A generic device designed to close, or open, or both, one or more electric circuits.  All switches are two terminal devices including grounding switches. The ACDCTerminal.connected at the two sides of the switch shall not be considered for assessing switch connectivity, i.e. only Switch.open, .normalOpen and .locked are relevant.
	*/
	class Switch : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		Switch();
		~Switch() override;

		std::list<CIMPP::SvSwitch*> SvSwitch;  /* The switch state associated with the switch. Default: 0 */
		std::list<CIMPP::SwitchSchedule*> SwitchSchedules;  /* A Switch can be associated with SwitchSchedules. Default: 0 */
		CIMPP::Boolean locked;  /* If true, the switch is locked. The resulting switch state is a combination of locked and Switch.open attributes as follows: &lt;ul&gt; 	&lt;li&gt;locked=true and Switch.open=true. The resulting state is open and locked;&lt;/li&gt; 	&lt;li&gt;locked=false and Switch.open=true. The resulting state is open;&lt;/li&gt; 	&lt;li&gt;locked=false and Switch.open=false. The resulting state is closed.&lt;/li&gt; &lt;/ul&gt; Default: false */
		CIMPP::Boolean normalOpen;  /* The attribute is used in cases when no Measurement for the status value is present. If the Switch has a status measurement the Discrete.normalValue is expected to match with the Switch.normalOpen. Default: false */
		CIMPP::Boolean open;  /* The attribute tells if the switch is considered open when used as input to topology processing. Default: false */
		CIMPP::CurrentFlow ratedCurrent;  /* The maximum continuous current carrying capacity in amps governed by the device material and construction. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Boolean retained;  /* Branch is retained in the topological solution.  The flow through retained switches will normally be calculated in power flow. Default: false */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* Switch_factory();
}
#endif
