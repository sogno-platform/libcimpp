#ifndef ExcIEEEDC2A_H
#define ExcIEEEDC2A_H
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

	/** \brief The class represents IEEE Std 421.5-2005 type DC2A model. This model represents represent field-controlled dc commutator exciters with continuously acting voltage regulators having supplies obtained from the generator or auxiliary bus.  It differs from the Type DC1A model only in the voltage regulator output limits, which are now proportional to terminal voltage . It is representative of solid-state replacements for various forms of older mechanical and rotating amplifier regulating equipment connected to dc commutator exciters.  Reference: IEEE Standard 421.5-2005 Section 5.2. */
	class ExcIEEEDC2A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEDC2A();
		~ExcIEEEDC2A() override;

		/** \brief Exciter voltage at which exciter saturation is defined (E).  Typical Value = 3.05. Default: nullptr */
		CIMPP::PU efd1;

		/** \brief Exciter voltage at which exciter saturation is defined (E).  Typical Value = 2.29. Default: nullptr */
		CIMPP::PU efd2;

		/** \brief (exclim).  IEEE standard is ambiguous about lower limit on exciter output. Typical Value = - 999  which means that there is no limit applied. Default: nullptr */
		CIMPP::PU exclim;

		/** \brief Voltage regulator gain (K).  Typical Value = 300. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Exciter constant related to self-excited field (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gain (K).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.279. Default: nullptr */
		CIMPP::Simple_Float seefd1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.117. Default: nullptr */
		CIMPP::Simple_Float seefd2;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0.01. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (T).  Typical Value = 1.33. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (T).  Typical Value = 0.675. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief UEL input (uelin). true = input is connected to the HV gate false = input connects to the error signal. Typical Value = true. Default: false */
		CIMPP::Boolean uelin;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 4.95. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -4.9. Default: nullptr */
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

	BaseClass* ExcIEEEDC2A_factory();
}
#endif
