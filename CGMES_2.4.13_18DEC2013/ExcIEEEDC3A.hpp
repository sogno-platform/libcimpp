#ifndef ExcIEEEDC3A_H
#define ExcIEEEDC3A_H
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
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief The class represents IEEE Std 421.5-2005 type DC3A model. This model represents represent older systems, in particular those dc commutator exciters with non-continuously acting regulators that were commonly used before the development of the continuously acting varieties.  These systems respond at basically two different rates, depending upon the magnitude of voltage error. For small errors, adjustment is made periodically with a signal to a motor-operated rheostat. Larger errors cause resistors to be quickly shorted or inserted and a strong forcing signal applied to the exciter. Continuous motion of the motor-operated rheostat occurs for these larger error signals, even though it is bypassed by contactor action.   Reference: IEEE Standard 421.5-2005 Section 5.3. */
	class ExcIEEEDC3A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEDC3A();
		~ExcIEEEDC3A() override;

		/** \brief Exciter voltage at which exciter saturation is defined (E).  Typical Value = 3.375. Default: nullptr */
		CIMPP::PU efd1;

		/** \brief Exciter voltage at which exciter saturation is defined (E).  Typical Value = 3.15. Default: nullptr */
		CIMPP::PU efd2;

		/** \brief (exclim).  IEEE standard is ambiguous about lower limit on exciter output. true = a lower limit of zero is applied to integrator output false = a lower limit of zero is not applied to integrator output. Typical Value = true. Default: false */
		CIMPP::Boolean exclim;

		/** \brief Exciter constant related to self-excited field (K).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Fast raise/lower contact setting (K).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU kv;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.267. Default: nullptr */
		CIMPP::Simple_Float seefd1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.068. Default: nullptr */
		CIMPP::Simple_Float seefd2;

		/** \brief Exciter time constant, integration rate associated with exciter control (T).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Rheostat travel time (T).  Typical Value = 20. Default: nullptr */
		CIMPP::Seconds trh;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = 0. Default: nullptr */
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

	BaseClass* ExcIEEEDC3A_factory();
}
#endif
