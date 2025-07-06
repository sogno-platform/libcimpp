#ifndef ExcIEEEST2A_H
#define ExcIEEEST2A_H
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

namespace CIMPP
{

	/** \brief The class represents IEEE Std 421.5-2005 type ST2A model. Some static systems utilize both current and voltage sources (generator terminal quantities) to comprise the power source.  The regulator controls the exciter output through controlled saturation of the power transformer components.  These compound-source rectifier excitation systems are designated Type ST2A and are represented by ExcIEEEST2A.  Reference: IEEE Standard 421.5-2005 Section 7.2. */
	class ExcIEEEST2A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST2A();
		~ExcIEEEST2A() override;

		/** \brief Maximum field voltage (E).  Typical Value = 99. Default: nullptr */
		CIMPP::PU efdmax;

		/** \brief Voltage regulator gain (K).  Typical Value = 120. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (K). Typical Value = 1.82. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Exciter constant related to self-excited field (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gains (K).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Potential circuit gain coefficient (K).  Typical Value = 8. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Potential circuit gain coefficient (K).  Typical Value = 4.88. Default: nullptr */
		CIMPP::PU kp;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0.15. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Exciter time constant, integration rate associated with exciter control (T).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief UEL input (UELin). true = HV gate false = add to error signal. Typical Value = true. Default: false */
		CIMPP::Boolean uelin;

		/** \brief Maximum voltage regulator outputs (V).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator outputs (V).  Typical Value = 0. Default: nullptr */
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

	BaseClass* ExcIEEEST2A_factory();
}
#endif
