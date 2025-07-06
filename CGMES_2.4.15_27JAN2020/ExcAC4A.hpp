#ifndef ExcAC4A_H
#define ExcAC4A_H
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

	/** \brief Modified IEEE AC4A alternator-supplied rectifier excitation system with different minimum controller output. */
	class ExcAC4A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC4A();
		~ExcAC4A() override;

		/** \brief Voltage regulator gain (Ka).  Typical Value = 200. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (Kc).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Voltage regulator time constant (Ta).  Typical Value = 0.015. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (Tb).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (Tc).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Maximum voltage regulator input limit (Vimax).  Typical Value = 10. Default: nullptr */
		CIMPP::PU vimax;

		/** \brief Minimum voltage regulator input limit (Vimin).  Typical Value = -10. Default: nullptr */
		CIMPP::PU vimin;

		/** \brief Maximum voltage regulator output (Vrmax).  Typical Value = 5.64. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (Vrmin).  Typical Value = -4.53. Default: nullptr */
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

	BaseClass* ExcAC4A_factory();
}
#endif
