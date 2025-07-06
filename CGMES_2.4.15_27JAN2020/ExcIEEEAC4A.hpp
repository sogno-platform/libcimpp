#ifndef ExcIEEEAC4A_H
#define ExcIEEEAC4A_H
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

	/** \brief The class represents IEEE Std 421.5-2005 type AC4A model. The model represents type AC4A alternator-supplied controlled-rectifier excitation system which is quite different from the other type ac systems. This high initial response excitation system utilizes a full thyristor bridge in the exciter output circuit.  The voltage regulator controls the firing of the thyristor bridges. The exciter alternator uses an independent voltage regulator to control its output voltage to a constant value. These effects are not modeled; however, transient loading effects on the exciter alternator are included.   Reference: IEEE Standard 421.5-2005 Section 6.4. */
	class ExcIEEEAC4A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEAC4A();
		~ExcIEEEAC4A() override;

		/** \brief Voltage regulator gain (K).  Typical Value = 200. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0.015. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (T).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (T).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Maximum voltage regulator input limit (V).  Typical Value = 10. Default: nullptr */
		CIMPP::PU vimax;

		/** \brief Minimum voltage regulator input limit (V).  Typical Value = -10. Default: nullptr */
		CIMPP::PU vimin;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 5.64. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -4.53. Default: nullptr */
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

	BaseClass* ExcIEEEAC4A_factory();
}
#endif
