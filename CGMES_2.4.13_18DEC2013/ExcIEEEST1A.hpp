#ifndef ExcIEEEST1A_H
#define ExcIEEEST1A_H
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
#include "ExcIEEEST1AUELselectorKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief The class represents IEEE Std 421.5-2005 type ST1A model. This model represents systems in which excitation power is supplied through a transformer from the generator terminals (or the unit's auxiliary bus) and is regulated by a controlled rectifier.  The maximum exciter voltage available from such systems is directly related to the generator terminal voltage.  Reference: IEEE Standard 421.5-2005 Section 7.1. */
	class ExcIEEEST1A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST1A();
		~ExcIEEEST1A() override;

		/** \brief Exciter output current limit reference (I).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ilr;

		/** \brief Voltage regulator gain (K).  Typical Value = 190. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (K). Typical Value = 0.08. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Excitation control system stabilizer gains (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Exciter output current limiter gain (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU klr;

		/** \brief Selector of the Power System Stabilizer (PSS) input (PSSin). true = PSS input (Vs) added to error signal false = PSS input (Vs) added to voltage regulator output. Typical Value = true. Default: false */
		CIMPP::Boolean pssin;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (T).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tb1;

		/** \brief Voltage regulator time constant (T).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc1;

		/** \brief Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Selector of the connection of the UEL input (UELin). Typical Value = ignoreUELsignal. Default: 0 */
		CIMPP::ExcIEEEST1AUELselectorKind uelin;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 14.5. Default: nullptr */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -14.5. Default: nullptr */
		CIMPP::PU vamin;

		/** \brief Maximum voltage regulator input limit (V).  Typical Value = 999. Default: nullptr */
		CIMPP::PU vimax;

		/** \brief Minimum voltage regulator input limit (V).  Typical Value = -999. Default: nullptr */
		CIMPP::PU vimin;

		/** \brief Maximum voltage regulator outputs (V).  Typical Value = 7.8. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator outputs (V).  Typical Value = -6.7. Default: nullptr */
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

	BaseClass* ExcIEEEST1A_factory();
}
#endif
