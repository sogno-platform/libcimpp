#ifndef ExcREXS_H
#define ExcREXS_H
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
#include "ExcREXSFeedbackSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief General Purpose Rotating Excitation System Model.  This model can be used to represent a wide range of excitation systems whose DC power source is an AC or DC generator. It encompasses IEEE type AC1, AC2, DC1, and DC2 excitation system models. */
	class ExcREXS : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcREXS();
		~ExcREXS() override;

		/** \brief Field voltage value 1 (E1).  Typical Value = 3. Default: nullptr */
		CIMPP::PU e1;

		/** \brief Field voltage value 2 (E2).  Typical Value = 4. Default: nullptr */
		CIMPP::PU e2;

		/** \brief Rate feedback signal flag (Fbf). Typical Value = fieldCurrent. Default: 0 */
		CIMPP::ExcREXSFeedbackSignalKind fbf;

		/** \brief Limit type flag (Flimf).  Typical Value = 0. Default: nullptr */
		CIMPP::PU flimf;

		/** \brief Rectifier regulation factor (Kc).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Exciter regulation factor (Kd).  Typical Value = 2. Default: nullptr */
		CIMPP::PU kd;

		/** \brief Exciter field proportional constant (Ke).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Field voltage feedback gain (Kefd).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kefd;

		/** \brief Rate feedback gain (Kf).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds kf;

		/** \brief Field voltage controller feedback gain (Kh).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kh;

		/** \brief Field Current Regulator Integral Gain (Kii).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kii;

		/** \brief Field Current Regulator Proportional Gain (Kip).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kip;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (Ks).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ks;

		/** \brief Voltage Regulator Integral Gain (Kvi).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kvi;

		/** \brief Voltage Regulator Proportional Gain (Kvp).  Typical Value = 2800. Default: nullptr */
		CIMPP::PU kvp;

		/** \brief V/Hz limiter gain (Kvphz).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kvphz;

		/** \brief Pickup speed of V/Hz limiter (Nvphz).  Typical Value = 0. Default: nullptr */
		CIMPP::PU nvphz;

		/** \brief Saturation factor at E1 (Se1).  Typical Value = 0.0001. Default: nullptr */
		CIMPP::PU se1;

		/** \brief Saturation factor at E2 (Se2).  Typical Value = 0.001. Default: nullptr */
		CIMPP::PU se2;

		/** \brief Voltage Regulator time constant (Ta).  Typical Value = 0.01. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Lag time constant (Tb1).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tb1;

		/** \brief Lag time constant (Tb2).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tb2;

		/** \brief Lead time constant (Tc1).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc1;

		/** \brief Lead time constant (Tc2).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc2;

		/** \brief Exciter field time constant (Te).  Typical Value = 1.2. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Rate feedback time constant (Tf).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Feedback lead time constant (Tf1).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tf1;

		/** \brief Feedback lag time constant (Tf2).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tf2;

		/** \brief Field current Bridge time constant (Tp).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tp;

		/** \brief Maximum compounding voltage (Vcmax).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vcmax;

		/** \brief Maximum Exciter Field Current (Vfmax).  Typical Value = 47. Default: nullptr */
		CIMPP::PU vfmax;

		/** \brief Minimum Exciter Field Current (Vfmin).  Typical Value = -20. Default: nullptr */
		CIMPP::PU vfmin;

		/** \brief Voltage Regulator Input Limit (Vimax).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU vimax;

		/** \brief Maximum controller output (Vrmax).  Typical Value = 47. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum controller output (Vrmin).  Typical Value = -20. Default: nullptr */
		CIMPP::PU vrmin;

		/** \brief Exciter compounding reactance (Xc).  Typical Value = 0. Default: nullptr */
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

	BaseClass* ExcREXS_factory();
}
#endif
