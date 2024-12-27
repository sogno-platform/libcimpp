#ifndef GovSteamSGO_H
#define GovSteamSGO_H
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
#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Simplified Steam turbine governor model.
	*/
	class GovSteamSGO : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamSGO();
		~GovSteamSGO() override;

		CIMPP::PU k1;  /* One/per unit regulation (K1). Default: nullptr */
		CIMPP::PU k2;  /* Fraction (K2). Default: nullptr */
		CIMPP::PU k3;  /* Fraction (K3). Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
		CIMPP::PU pmax;  /* Upper power limit (Pmax). Default: nullptr */
		CIMPP::Seconds pmin;  /* Lower power limit (Pmin). Default: nullptr */
		CIMPP::Seconds t1;  /* Controller lag (T1). Default: nullptr */
		CIMPP::Seconds t2;  /* Controller lead compensation (T2). Default: nullptr */
		CIMPP::Seconds t3;  /* Governor lag (T3) (&gt;0). Default: nullptr */
		CIMPP::Seconds t4;  /* Delay due to steam inlet volumes associated with steam chest and inlet piping (T4). Default: nullptr */
		CIMPP::Seconds t5;  /* Reheater delay including hot and cold leads (T5). Default: nullptr */
		CIMPP::Seconds t6;  /* Delay due to IP-LP turbine, crossover pipes and LP end hoods (T6). Default: nullptr */

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

	BaseClass* GovSteamSGO_factory();
}
#endif
