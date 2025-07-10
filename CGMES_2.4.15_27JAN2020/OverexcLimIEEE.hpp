#ifndef OverexcLimIEEE_H
#define OverexcLimIEEE_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "OverexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief The over excitation limiter model is intended to represent the significant features of OELs necessary for some large-scale system studies. It is the result of a pragmatic approach to obtain a model that can be widely applied with attainable data from generator owners. An attempt to include all variations in the functionality of OELs and duplicate how they interact with the rest of the excitation systems would likely result in a level of application insufficient for the studies for which they are intended.  Reference: IEEE OEL 421.5-2005 Section 9. */
	class OverexcLimIEEE : public OverexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		OverexcLimIEEE();
		~OverexcLimIEEE() override;

		/** \brief OEL pickup/drop-out hysteresis (HYST).  Typical Value = 0.03. Default: nullptr */
		CIMPP::PU hyst;

		/** \brief OEL timed field current limit (I).  Typical Value = 1.05. Default: nullptr */
		CIMPP::PU ifdlim;

		/** \brief OEL instantaneous field current limit (I).  Typical Value = 1.5. Default: nullptr */
		CIMPP::PU ifdmax;

		/** \brief OEL timed field current limiter pickup level (I).  Typical Value = 1.05. Default: nullptr */
		CIMPP::PU itfpu;

		/** \brief OEL cooldown gain (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kcd;

		/** \brief OEL ramped limit rate (K).  Unit = PU/sec.  Typical Value = 10. Default: nullptr */
		CIMPP::Simple_Float kramp;

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

	BaseClass* OverexcLimIEEE_factory();
}
#endif
