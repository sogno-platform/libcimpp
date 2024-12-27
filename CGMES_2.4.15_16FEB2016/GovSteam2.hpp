#ifndef GovSteam2_H
#define GovSteam2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	Simplified governor model.
	*/
	class GovSteam2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteam2();
		~GovSteam2() override;

		CIMPP::PU dbf;  /* Frequency dead band (DBF).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float k;  /* Governor gain (reciprocal of droop) (K).  Typical Value = 20. Default: nullptr */
		CIMPP::PU mnef;  /* Fuel flow maximum negative error value (MN).  Typical Value = -1. Default: nullptr */
		CIMPP::PU mxef;  /* Fuel flow maximum positive error value (MX).  Typical Value = 1. Default: nullptr */
		CIMPP::PU pmax;  /* Maximum fuel flow (P).  Typical Value = 1. Default: nullptr */
		CIMPP::PU pmin;  /* Minimum fuel flow (P).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t1;  /* Governor lag time constant (T) (&gt;0).  Typical Value = 0.45. Default: nullptr */
		CIMPP::Seconds t2;  /* Governor lead time constant (T) (may be 0).  Typical Value = 0. Default: nullptr */

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

	BaseClass* GovSteam2_factory();
}
#endif
