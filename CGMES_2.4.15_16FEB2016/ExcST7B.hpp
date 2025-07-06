#ifndef ExcST7B_H
#define ExcST7B_H
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

	/** \brief Modified IEEE ST7B static excitation system without stator current limiter (SCL) and current compensator (DROOP) inputs. */
	class ExcST7B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST7B();
		~ExcST7B() override;

		/** \brief High-value gate feedback gain (Kh).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kh;

		/** \brief Voltage regulator integral gain (Kia).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kia;

		/** \brief Low-value gate feedback gain (Kl).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kl;

		/** \brief Voltage regulator proportional gain (Kpa).  Typical Value = 40. Default: nullptr */
		CIMPP::PU kpa;

		/** \brief OEL input selector (OELin). Typical Value = noOELinput. Default: 0 */
		CIMPP::ExcST7BOELselectorKind oelin;

		/** \brief Regulator lag time constant (Tb).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Regulator lead time constant (Tc).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Excitation control system stabilizer time constant (Tf).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Feedback time constant of inner loop field voltage regulator (Tg).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tg;

		/** \brief Feedback time constant (Tia).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds tia;

		/** \brief Rectifier firing time constant (Ts).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ts;

		/** \brief UEL input selector (UELin). Typical Value = noUELinput. Default: 0 */
		CIMPP::ExcST7BUELselectorKind uelin;

		/** \brief Maximum voltage reference signal (Vmax).  Typical Value = 1.1. Default: nullptr */
		CIMPP::PU vmax;

		/** \brief Minimum voltage reference signal (Vmin).  Typical Value = 0.9. Default: nullptr */
		CIMPP::PU vmin;

		/** \brief Maximum voltage regulator output (Vrmax).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (Vrmin).  Typical Value = -4.5. Default: nullptr */
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

	BaseClass* ExcST7B_factory();
}
#endif
