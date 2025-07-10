#ifndef ExcIEEEST7B_H
#define ExcIEEEST7B_H
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
#include "ExcST7BOELselectorKind.hpp"
#include "ExcST7BUELselectorKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief The class represents IEEE Std 421.5-2005 type ST7B model. This model is representative of static potential-source excitation systems. In this system, the AVR consists of a PI voltage regulator. A phase lead-lag filter in series allows introduction of a derivative function, typically used with brushless excitation systems. In that case, the regulator is of the PID type. In addition, the terminal voltage channel includes a phase lead-lag filter.  The AVR includes the appropriate inputs on its reference for overexcitation limiter (OEL1), underexcitation limiter (UEL), stator current limiter (SCL), and current compensator (DROOP). All these limitations, when they work at voltage reference level, keep the PSS (VS signal from Type PSS1A, PSS2A, or PSS2B) in operation. However, the UEL limitation can also be transferred to the high value (HV) gate acting on the output signal. In addition, the output signal passes through a low value (LV) gate for a ceiling overexcitation limiter (OEL2).  Reference: IEEE Standard 421.5-2005 Section 7.7. */
	class ExcIEEEST7B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST7B();
		~ExcIEEEST7B() override;

		/** \brief High-value gate feedback gain (K).  Typical Value 1. Default: nullptr */
		CIMPP::PU kh;

		/** \brief Voltage regulator integral gain (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kia;

		/** \brief Low-value gate feedback gain (K).  Typical Value 1. Default: nullptr */
		CIMPP::PU kl;

		/** \brief Voltage regulator proportional gain (K).  Typical Value = 40. Default: nullptr */
		CIMPP::PU kpa;

		/** \brief OEL input selector (OELin). Typical Value = noOELinput. Default: 0 */
		CIMPP::ExcST7BOELselectorKind oelin;

		/** \brief Regulator lag time constant (T).  Typical Value 1. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Regulator lead time constant (T).  Typical Value 1. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Excitation control system stabilizer time constant (T).  Typical Value 1. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Feedback time constant of inner loop field voltage regulator (T). Typical Value 1. Default: nullptr */
		CIMPP::Seconds tg;

		/** \brief Feedback time constant (T).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds tia;

		/** \brief UEL input selector (UELin). Typical Value = noUELinput. Default: 0 */
		CIMPP::ExcST7BUELselectorKind uelin;

		/** \brief Maximum voltage reference signal (V).  Typical Value = 1.1. Default: nullptr */
		CIMPP::PU vmax;

		/** \brief Minimum voltage reference signal (V).  Typical Value = 0.9. Default: nullptr */
		CIMPP::PU vmin;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -4.5. Default: nullptr */
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

	BaseClass* ExcIEEEST7B_factory();
}
#endif
