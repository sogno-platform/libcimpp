#ifndef GovSteamFV3_H
#define GovSteamFV3_H
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
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	Simplified GovSteamIEEE1 Steam turbine governor model with Prmax limit and fast valving.
	*/
	class GovSteamFV3 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamFV3();
		~GovSteamFV3() override;

		CIMPP::PU k;  /* Governor gain, (reciprocal of droop) (K).  Typical Value = 20. Default: nullptr */
		CIMPP::PU k1;  /* Fraction of turbine power developed after first boiler pass (K1).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU k2;  /* Fraction of turbine power developed after second boiler pass (K2).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU k3;  /* Fraction of hp turbine power developed after crossover or third boiler pass (K3). Typical Value = 0.6. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
		CIMPP::PU pmax;  /* Maximum valve opening, PU of MWbase (Pmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU pmin;  /* Minimum valve opening, PU of MWbase (Pmin).  Typical Value = 0. Default: nullptr */
		CIMPP::PU prmax;  /* Max. pressure in reheater (Prmax).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds t1;  /* Governor lead time constant (T1).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t2;  /* Governor lag time constant (T2).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t3;  /* Valve positioner time constant (T3).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t4;  /* Inlet piping/steam bowl time constant (T4).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds t5;  /* Time constant of second boiler pass (i.e. reheater) (T5).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds t6;  /* Time constant of crossover or third boiler pass (T6).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds ta;  /* Time to close intercept valve (IV) (Ta).  Typical Value = 0.97. Default: nullptr */
		CIMPP::Seconds tb;  /* Time until IV starts to reopen (Tb).  Typical Value = 0.98. Default: nullptr */
		CIMPP::Seconds tc;  /* Time until IV is fully open (Tc).  Typical Value = 0.99. Default: nullptr */
		CIMPP::Simple_Float uc;  /* Maximum valve closing velocity (Uc).  Unit = PU/sec.  Typical Value = -1. Default: nullptr */
		CIMPP::Simple_Float uo;  /* Maximum valve opening velocity (Uo).  Unit = PU/sec.  Typical Value = 0.1. Default: nullptr */

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

	BaseClass* GovSteamFV3_factory();
}
#endif
