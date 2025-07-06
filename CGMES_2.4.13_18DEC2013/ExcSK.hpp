#ifndef ExcSK_H
#define ExcSK_H
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
#include "ApparentPower.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Slovakian Excitation System Model.  UEL and secondary voltage control are included in this model. When this model is used, there cannot be a separate underexcitation limiter or VAr controller model. */
	class ExcSK : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcSK();
		~ExcSK() override;

		/** \brief Field voltage clipping limit (Efdmax). Default: nullptr */
		CIMPP::PU efdmax;

		/** \brief Field voltage clipping limit (Efdmin). Default: nullptr */
		CIMPP::PU efdmin;

		/** \brief Maximum field voltage output (Emax).  Typical Value = 20. Default: nullptr */
		CIMPP::PU emax;

		/** \brief Minimum field voltage output (Emin).  Typical Value = -20. Default: nullptr */
		CIMPP::PU emin;

		/** \brief Gain (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU k;

		/** \brief Parameter of underexcitation limit (K1).  Typical Value = 0.1364. Default: nullptr */
		CIMPP::PU k1;

		/** \brief Parameter of underexcitation limit (K2).  Typical Value = -0.3861. Default: nullptr */
		CIMPP::PU k2;

		/** \brief PI controller gain (Kc).  Typical Value = 70. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Rectifier regulation factor (Kce).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kce;

		/** \brief Exciter internal reactance (Kd).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kd;

		/** \brief P controller gain (Kgob).  Typical Value = 10. Default: nullptr */
		CIMPP::PU kgob;

		/** \brief PI controller gain (Kp).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kp;

		/** \brief PI controller gain of integral component (Kqi).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kqi;

		/** \brief Rate of rise of the reactive power (Kqob). Default: nullptr */
		CIMPP::PU kqob;

		/** \brief PI controller gain (Kqp).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kqp;

		/** \brief Dead band of reactive power (nq).  Determines the range of sensitivity.  Typical Value = 0.001. Default: nullptr */
		CIMPP::PU nq;

		/** \brief Secondary voltage control state (Qc_on_off). true = secondary voltage control is ON false = secondary voltage control is OFF. Typical Value = false. Default: false */
		CIMPP::Boolean qconoff;

		/** \brief Desired value (setpoint) of reactive power, manual setting (Qz). Default: nullptr */
		CIMPP::PU qz;

		/** \brief Selector to apply automatic calculation in secondary controller model. true = automatic calculation is activated false = manual set is active; the use of desired value of reactive power (Qz) is required. Typical Value = true. Default: false */
		CIMPP::Boolean remote;

		/** \brief Apparent power of the unit (Sbase).  Unit = MVA.  Typical Value = 259. Default: nullptr */
		CIMPP::ApparentPower sbase;

		/** \brief PI controller phase lead time constant (Tc).  Typical Value = 8. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Time constant of gain block (Te).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief PI controller phase lead time constant (Ti).  Typical Value = 2. Default: nullptr */
		CIMPP::Seconds ti;

		/** \brief Time constant (Tp).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds tp;

		/** \brief Voltage transducer time constant (Tr).  Typical Value = 0.01. Default: nullptr */
		CIMPP::Seconds tr;

		/** \brief Maximum error (Uimax).  Typical Value = 10. Default: nullptr */
		CIMPP::PU uimax;

		/** \brief Minimum error (UImin).  Typical Value = -10. Default: nullptr */
		CIMPP::PU uimin;

		/** \brief Maximum controller output (URmax).  Typical Value = 10. Default: nullptr */
		CIMPP::PU urmax;

		/** \brief Minimum controller output (URmin).  Typical Value = -10. Default: nullptr */
		CIMPP::PU urmin;

		/** \brief Maximum terminal voltage input (Vtmax).  Determines the range of voltage dead band.  Typical Value = 1.05. Default: nullptr */
		CIMPP::PU vtmax;

		/** \brief Minimum terminal voltage input (Vtmin).  Determines the range of voltage dead band.  Typical Value = 0.95. Default: nullptr */
		CIMPP::PU vtmin;

		/** \brief Maximum output (Yp).  Minimum output = 0.  Typical Value = 1. Default: nullptr */
		CIMPP::PU yp;

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

	BaseClass* ExcSK_factory();
}
#endif
