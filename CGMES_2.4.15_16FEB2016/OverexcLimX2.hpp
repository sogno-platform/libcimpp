#ifndef OverexcLimX2_H
#define OverexcLimX2_H
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
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Field Voltage or Current overexcitation limiter designed to protect the generator field of an AC machine with automatic excitation control from overheating due to prolonged overexcitation. */
	class OverexcLimX2 : public OverexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		OverexcLimX2();
		~OverexcLimX2() override;

		/** \brief Low voltage or current point on the inverse time characteristic (EFD).  Typical Value = 1.1. Default: nullptr */
		CIMPP::PU efd1;

		/** \brief Mid voltage or current point on the inverse time characteristic (EFD).  Typical Value = 1.2. Default: nullptr */
		CIMPP::PU efd2;

		/** \brief High voltage or current point on the inverse time characteristic (EFD).  Typical Value = 1.5. Default: nullptr */
		CIMPP::PU efd3;

		/** \brief Desired field voltage if m=F or field current if m=T (EFD).  Typical Value = 1. Default: nullptr */
		CIMPP::PU efddes;

		/** \brief Rated field voltage if m=F or field current if m=T (EFD).  Typical Value = 1.05. Default: nullptr */
		CIMPP::PU efdrated;

		/** \brief Gain (K).  Typical Value = 0.002. Default: nullptr */
		CIMPP::PU kmx;

		/** \brief (m). true = IFD limiting false = EFD limiting. Default: false */
		CIMPP::Boolean m;

		/** \brief Time to trip the exciter at the low voltage or current point on the inverse time characteristic (TIME).  Typical Value = 120. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Time to trip the exciter at the mid voltage or current point on the inverse time characteristic (TIME).  Typical Value = 40. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Time to trip the exciter at the high voltage or current point on the inverse time characteristic (TIME).  Typical Value = 15. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Low voltage limit (V) (&gt;0). Default: nullptr */
		CIMPP::PU vlow;

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

	BaseClass* OverexcLimX2_factory();
}
#endif
