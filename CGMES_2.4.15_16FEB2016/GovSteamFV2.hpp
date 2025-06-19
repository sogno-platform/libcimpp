#ifndef GovSteamFV2_H
#define GovSteamFV2_H
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

	/** \brief Steam turbine governor with reheat time constants and modeling of the effects of fast valve closing to reduce mechanical power. */
	class GovSteamFV2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamFV2();
		~GovSteamFV2() override;

		/** \brief (Dt). Default: nullptr */
		CIMPP::PU dt;

		/** \brief Fraction of the turbine power developed by turbine sections not involved in fast valving (K). Default: nullptr */
		CIMPP::PU k;

		/** \brief Alternate Base used instead of Machine base in equipment model if necessary (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief (R). Default: nullptr */
		CIMPP::PU r;

		/** \brief Governor time constant (T1). Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Reheater time constant (T3). Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Time after initial time for valve to close (Ta). Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Time after initial time for valve to begin opening (Tb). Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Time after initial time for valve to become fully open (Tc). Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Initial time to begin fast valving (Ti). Default: nullptr */
		CIMPP::Seconds ti;

		/** \brief Time constant with which power falls off after intercept valve closure (Tt). Default: nullptr */
		CIMPP::Seconds tt;

		/** \brief (Vmax). Default: nullptr */
		CIMPP::PU vmax;

		/** \brief (Vmin). Default: nullptr */
		CIMPP::PU vmin;

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

	BaseClass* GovSteamFV2_factory();
}
#endif
