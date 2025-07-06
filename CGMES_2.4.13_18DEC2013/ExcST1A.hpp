#ifndef ExcST1A_H
#define ExcST1A_H
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

	/** \brief Modification of an old IEEE ST1A static excitation system without overexcitation limiter (OEL) and underexcitation limiter (UEL). */
	class ExcST1A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST1A();
		~ExcST1A() override;

		/** \brief Exciter output current limit reference (Ilr).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ilr;

		/** \brief Voltage regulator gain (Ka).  Typical Value = 190. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (Kc). Typical Value = 0.05. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Excitation control system stabilizer gains (Kf).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Exciter output current limiter gain (Klr).  Typical Value = 0. Default: nullptr */
		CIMPP::PU klr;

		/** \brief Voltage regulator time constant (Ta).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (Tb).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (Tb).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tb1;

		/** \brief Voltage regulator time constant (Tc).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Voltage regulator time constant (Tc).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc1;

		/** \brief Excitation control system stabilizer time constant (Tf).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Maximum voltage regulator output (Vamax).  Typical Value = 999. Default: nullptr */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (Vamin).  Typical Value = -999. Default: nullptr */
		CIMPP::PU vamin;

		/** \brief Maximum voltage regulator input limit (Vimax).  Typical Value = 999. Default: nullptr */
		CIMPP::PU vimax;

		/** \brief Minimum voltage regulator input limit (Vimin).  Typical Value = -999. Default: nullptr */
		CIMPP::PU vimin;

		/** \brief Maximum voltage regulator outputs (Vrmax).  Typical Value = 7.8. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator outputs (Vrmin).  Typical Value = -6.7. Default: nullptr */
		CIMPP::PU vrmin;

		/** \brief Excitation xfmr effective reactance (Xe).  Typical Value = 0.04. Default: nullptr */
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

	BaseClass* ExcST1A_factory();
}
#endif
