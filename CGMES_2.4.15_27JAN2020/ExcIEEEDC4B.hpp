#ifndef ExcIEEEDC4B_H
#define ExcIEEEDC4B_H
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

	/** \brief The class represents IEEE Std 421.5-2005 type DC4B model. These excitation systems utilize a field-controlled dc commutator exciter with a continuously acting voltage regulator having supplies obtained from the generator or auxiliary bus.  Reference: IEEE Standard 421.5-2005 Section 5.4. */
	class ExcIEEEDC4B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEDC4B();
		~ExcIEEEDC4B() override;

		/** \brief Exciter voltage at which exciter saturation is defined (E).  Typical Value = 1.75. Default: nullptr */
		CIMPP::PU efd1;

		/** \brief Exciter voltage at which exciter saturation is defined (E).  Typical Value = 2.33. Default: nullptr */
		CIMPP::PU efd2;

		/** \brief Voltage regulator gain (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Regulator derivative gain (K).  Typical Value = 20. Default: nullptr */
		CIMPP::PU kd;

		/** \brief Exciter constant related to self-excited field (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gain (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Regulator integral gain (K).  Typical Value = 20. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Regulator proportional gain (K).  Typical Value = 20. Default: nullptr */
		CIMPP::PU kp;

		/** \brief OEL input (OELin). true = LV gate false = subtract from error signal. Typical Value = true. Default: false */
		CIMPP::Boolean oelin;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.08. Default: nullptr */
		CIMPP::Simple_Float seefd1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.27. Default: nullptr */
		CIMPP::Simple_Float seefd2;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Regulator derivative filter time constant(T).  Typical Value = 0.01. Default: nullptr */
		CIMPP::Seconds td;

		/** \brief Exciter time constant, integration rate associated with exciter control (T).  Typical Value = 0.8. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief UEL input (UELin). true = HV gate false = add to error signal. Typical Value = true. Default: false */
		CIMPP::Boolean uelin;

		/** \brief Minimum exciter voltage output(V).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vemin;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 2.7. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -0.9. Default: nullptr */
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

	BaseClass* ExcIEEEDC4B_factory();
}
#endif
