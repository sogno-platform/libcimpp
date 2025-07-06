#ifndef ExcELIN1_H
#define ExcELIN1_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Static PI transformer fed excitation system: ELIN (VATECH) - simplified model.  This model represents an all-static excitation system. A PI voltage controller establishes a desired field current set point for a proportional current controller. The integrator of the PI controller has a follow-up input to match its signal to the present field current.  A power system stabilizer with power input is included in the model. */
	class ExcELIN1 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcELIN1();
		~ExcELIN1() override;

		/** \brief Controller follow up dead band (Dpnf).  Typical Value = 0. Default: nullptr */
		CIMPP::PU dpnf;

		/** \brief Maximum open circuit excitation voltage (Efmax).  Typical Value = 5. Default: nullptr */
		CIMPP::PU efmax;

		/** \brief Minimum open circuit excitation voltage (Efmin).  Typical Value = -5. Default: nullptr */
		CIMPP::PU efmin;

		/** \brief Stabilizer Gain 1 (Ks1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ks1;

		/** \brief Stabilizer Gain 2 (Ks2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ks2;

		/** \brief Stabilizer Limit Output (smax).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU smax;

		/** \brief Current transducer time constant (Tfi).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tfi;

		/** \brief Controller reset time constant (Tnu).  Typical Value = 2. Default: nullptr */
		CIMPP::Seconds tnu;

		/** \brief Stabilizer Phase Lag Time Constant (Ts1).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds ts1;

		/** \brief Stabilizer Filter Time Constant (Ts2).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds ts2;

		/** \brief Stabilizer parameters (Tsw).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds tsw;

		/** \brief Current controller gain (Vpi).  Typical Value = 12.45. Default: nullptr */
		CIMPP::PU vpi;

		/** \brief Controller follow up gain (Vpnf).  Typical Value = 2. Default: nullptr */
		CIMPP::PU vpnf;

		/** \brief Voltage controller proportional gain (Vpu).  Typical Value = 34.5. Default: nullptr */
		CIMPP::PU vpu;

		/** \brief Excitation transformer effective reactance (Xe) (&gt;=0).  Xe represents the regulation of the transformer/rectifier unit.  Typical Value = 0.06. Default: nullptr */
		CIMPP::PU xe;

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

	BaseClass* ExcELIN1_factory();
}
#endif
