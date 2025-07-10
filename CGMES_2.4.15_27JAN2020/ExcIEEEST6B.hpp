#ifndef ExcIEEEST6B_H
#define ExcIEEEST6B_H
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
#include "ExcST6BOELselectorKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief The class represents IEEE Std 421.5-2005 type ST6B model. This model consists of a PI voltage regulator with an inner loop field voltage regulator and pre-control. The field voltage regulator implements a proportional control. The pre-control and the delay in the feedback circuit increase the dynamic response.  Reference: IEEE Standard 421.5-2005 Section 7.6. */
	class ExcIEEEST6B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST6B();
		~ExcIEEEST6B() override;

		/** \brief Exciter output current limit reference (I).  Typical Value = 4.164. Default: nullptr */
		CIMPP::PU ilr;

		/** \brief Exciter output current limit adjustment (K).  Typical Value = 1.0577. Default: nullptr */
		CIMPP::PU kci;

		/** \brief Pre-control gain constant of the inner loop field regulator (K). Typical Value = 1. Default: nullptr */
		CIMPP::PU kff;

		/** \brief Feedback gain constant of the inner loop field regulator (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kg;

		/** \brief Voltage regulator integral gain (K).  Typical Value = 45.094. Default: nullptr */
		CIMPP::PU kia;

		/** \brief Exciter output current limiter gain (K).  Typical Value = 17.33. Default: nullptr */
		CIMPP::PU klr;

		/** \brief Forward gain constant of the inner loop field regulator (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU km;

		/** \brief Voltage regulator proportional gain (K).  Typical Value = 18.038. Default: nullptr */
		CIMPP::PU kpa;

		/** \brief OEL input selector (OELin). Typical Value = noOELinput. Default: 0 */
		CIMPP::ExcST6BOELselectorKind oelin;

		/** \brief Feedback time constant of inner loop field voltage regulator (T). Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds tg;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 4.81. Default: nullptr */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -3.85. Default: nullptr */
		CIMPP::PU vamin;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 4.81. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -3.85. Default: nullptr */
		CIMPP::PU vrmin;

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

	BaseClass* ExcIEEEST6B_factory();
}
#endif
