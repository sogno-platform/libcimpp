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
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Simplified governor model. */
	class GovSteam2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteam2();
		~GovSteam2() override;

		/** \brief Frequency dead band (DBF).  Typical Value = 0. Default: nullptr */
		CIMPP::PU dbf;

		/** \brief Governor gain (reciprocal of droop) (K).  Typical Value = 20. Default: nullptr */
		CIMPP::Simple_Float k;

		/** \brief Fuel flow maximum negative error value (MN).  Typical Value = -1. Default: nullptr */
		CIMPP::PU mnef;

		/** \brief Fuel flow maximum positive error value (MX).  Typical Value = 1. Default: nullptr */
		CIMPP::PU mxef;

		/** \brief Maximum fuel flow (P).  Typical Value = 1. Default: nullptr */
		CIMPP::PU pmax;

		/** \brief Minimum fuel flow (P).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pmin;

		/** \brief Governor lag time constant (T) (&gt;0).  Typical Value = 0.45. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Governor lead time constant (T) (may be 0).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t2;

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

	BaseClass* GovSteam2_factory();
}
#endif
