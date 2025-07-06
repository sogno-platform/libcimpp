#ifndef PFVArType1IEEEVArController_H
#define PFVArType1IEEEVArController_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PFVArControllerType1Dynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief The class represents IEEE VAR Controller Type 1 which operates by moving the voltage reference directly.  Reference: IEEE Standard 421.5-2005 Section 11.3. */
	class PFVArType1IEEEVArController : public PFVArControllerType1Dynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PFVArType1IEEEVArController();
		~PFVArType1IEEEVArController() override;

		/** \brief Var controller time delay ().  Typical Value = 5. Default: nullptr */
		CIMPP::Seconds tvarc;

		/** \brief Synchronous machine power factor (). Default: nullptr */
		CIMPP::PU vvar;

		/** \brief Var controller dead band ().  Typical Value = 0.02. Default: nullptr */
		CIMPP::Simple_Float vvarcbw;

		/** \brief Var controller reference (). Default: nullptr */
		CIMPP::PU vvarref;

		/** \brief Maximum machine terminal voltage needed for pf/var controller to be enabled (). Default: nullptr */
		CIMPP::PU vvtmax;

		/** \brief Minimum machine terminal voltage needed to enable pf/var controller (). Default: nullptr */
		CIMPP::PU vvtmin;

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

	BaseClass* PFVArType1IEEEVArController_factory();
}
#endif
