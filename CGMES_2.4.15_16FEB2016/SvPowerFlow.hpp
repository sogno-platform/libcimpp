#ifndef SvPowerFlow_H
#define SvPowerFlow_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"

namespace CIMPP
{
	class Terminal;

	/*
	State variable for power flow. Load convention is used for flow direction. This means flow out from the TopologicalNode into the equipment is positive.
	*/
	class SvPowerFlow : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		SvPowerFlow();
		~SvPowerFlow() override;

		CIMPP::Terminal* Terminal;  /* The terminal associated with the power flow state variable. Default: 0 */
		CIMPP::ActivePower p;  /* The active power flow. Load sign convention is used, i.e. positive sign means flow out from a TopologicalNode (bus) into the conducting equipment. Default: nullptr */
		CIMPP::ReactivePower q;  /* The reactive power flow. Load sign convention is used, i.e. positive sign means flow out from a TopologicalNode (bus) into the conducting equipment. Default: nullptr */

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

	BaseClass* SvPowerFlow_factory();
}
#endif
