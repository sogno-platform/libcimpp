#ifndef UnderexcLimX2_H
#define UnderexcLimX2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "UnderexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	class UnderexcLimX2 : public UnderexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		UnderexcLimX2();
		~UnderexcLimX2() override;

		/** \brief Differential gain (Kf2). Default: nullptr */
		CIMPP::PU kf2;

		/** \brief Minimum excitation limit gain (Km). Default: nullptr */
		CIMPP::PU km;

		/** \brief Minimum excitation limit value (MELMAX). Default: nullptr */
		CIMPP::PU melmax;

		/** \brief Excitation center setting (Qo). Default: nullptr */
		CIMPP::PU qo;

		/** \brief Excitation radius (R). Default: nullptr */
		CIMPP::PU r;

		/** \brief Differential time constant (Tf2) (&gt;0). Default: nullptr */
		CIMPP::Seconds tf2;

		/** \brief Minimum excitation limit time constant (Tm). Default: nullptr */
		CIMPP::Seconds tm;

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

	BaseClass* UnderexcLimX2_factory();
}
#endif
