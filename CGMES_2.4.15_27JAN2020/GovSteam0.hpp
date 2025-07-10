#ifndef GovSteam0_H
#define GovSteam0_H
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
#include "CimClassDetails.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief A simplified steam turbine governor model. */
	class GovSteam0 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteam0();
		~GovSteam0() override;

		/** \brief Turbine damping coefficient (Dt).  Unit = delta P / delta speed. Typical Value = 0. Default: nullptr */
		CIMPP::PU dt;

		/** \brief Base for power values (MWbase)  (&gt;0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Permanent droop (R).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU r;

		/** \brief Steam bowl time constant (T1).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Numerator time constant of T2/T3 block (T2).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Reheater time constant (T3).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Maximum valve position, PU of mwcap (Vmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vmax;

		/** \brief Minimum valve position, PU of mwcap (Vmin).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vmin;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* GovSteam0_factory();
}
#endif
