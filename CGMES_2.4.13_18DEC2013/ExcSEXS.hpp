#ifndef ExcSEXS_H
#define ExcSEXS_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Simplified Excitation System Model. */
	class ExcSEXS : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcSEXS();
		~ExcSEXS() override;

		/** \brief Field voltage clipping maximum limit (Efdmax).  Typical Value = 5. Default: nullptr */
		CIMPP::PU efdmax;

		/** \brief Field voltage clipping minimum limit (Efdmin).  Typical Value = -5. Default: nullptr */
		CIMPP::PU efdmin;

		/** \brief Maximum field voltage output (Emax).  Typical Value = 5. Default: nullptr */
		CIMPP::PU emax;

		/** \brief Minimum field voltage output (Emin).  Typical Value = -5. Default: nullptr */
		CIMPP::PU emin;

		/** \brief Gain (K) (&gt;0).  Typical Value = 100. Default: nullptr */
		CIMPP::PU k;

		/** \brief PI controller gain (Kc).  Typical Value = 0.08. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Ta/Tb - gain reduction ratio of lag-lead element (TaTb).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Simple_Float tatb;

		/** \brief Denominator time constant of lag-lead block (Tb).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief PI controller phase lead time constant (Tc).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Time constant of gain block (Te).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds te;

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

	BaseClass* ExcSEXS_factory();
}
#endif
