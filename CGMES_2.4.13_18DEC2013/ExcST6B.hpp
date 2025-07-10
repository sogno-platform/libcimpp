#ifndef ExcST6B_H
#define ExcST6B_H
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
#include "ExcST6BOELselectorKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE ST6B static excitation system with PID controller and optional inner feedbacks loop. */
	class ExcST6B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST6B();
		~ExcST6B() override;

		/** \brief Exciter output current limit reference (Ilr).  Typical Value = 4.164. Default: nullptr */
		CIMPP::PU ilr;

		/** \brief Selector (K1). true = feedback is from Ifd false = feedback is not from Ifd. Typical Value = true. Default: false */
		CIMPP::Boolean k1;

		/** \brief Exciter output current limit adjustment (Kcl).  Typical Value = 1.0577. Default: nullptr */
		CIMPP::PU kcl;

		/** \brief Pre-control gain constant of the inner loop field regulator (Kff).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kff;

		/** \brief Feedback gain constant of the inner loop field regulator (Kg).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kg;

		/** \brief Voltage regulator integral gain (Kia).  Typical Value = 45.094. Default: nullptr */
		CIMPP::PU kia;

		/** \brief Exciter output current limit adjustment (Kcl).  Typical Value = 17.33. Default: nullptr */
		CIMPP::PU klr;

		/** \brief Forward gain constant of the inner loop field regulator (Km).  Typical Value = 1. Default: nullptr */
		CIMPP::PU km;

		/** \brief Voltage regulator proportional gain (Kpa).  Typical Value = 18.038. Default: nullptr */
		CIMPP::PU kpa;

		/** \brief Voltage regulator derivative gain (Kvd).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kvd;

		/** \brief OEL input selector (OELin). Typical Value = noOELinput. Default: 0 */
		CIMPP::ExcST6BOELselectorKind oelin;

		/** \brief Feedback time constant of inner loop field voltage regulator (Tg).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds tg;

		/** \brief Rectifier firing time constant (Ts).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ts;

		/** \brief Voltage regulator derivative gain (Tvd).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tvd;

		/** \brief Maximum voltage regulator output (Vamax).  Typical Value = 4.81. Default: nullptr */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (Vamin).  Typical Value = -3.85. Default: nullptr */
		CIMPP::PU vamin;

		/** \brief Selector (Vilim). true = Vimin-Vimax limiter is active false = Vimin-Vimax limiter is not active. Typical Value = true. Default: false */
		CIMPP::Boolean vilim;

		/** \brief Maximum voltage regulator input limit (Vimax).  Typical Value = 10. Default: nullptr */
		CIMPP::PU vimax;

		/** \brief Minimum voltage regulator input limit (Vimin).  Typical Value = -10. Default: nullptr */
		CIMPP::PU vimin;

		/** \brief Selector (Vmult). true = multiply regulator output by terminal voltage false = do not multiply regulator output by terminal voltage.  Typical Value = true. Default: false */
		CIMPP::Boolean vmult;

		/** \brief Maximum voltage regulator output (Vrmax).  Typical Value = 4.81. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (Vrmin).  Typical Value = -3.85. Default: nullptr */
		CIMPP::PU vrmin;

		/** \brief Excitation source reactance (Xc).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU xc;

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

	BaseClass* ExcST6B_factory();
}
#endif
