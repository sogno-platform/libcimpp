#ifndef ExcIEEEAC6A_H
#define ExcIEEEAC6A_H
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
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief The class represents IEEE Std 421.5-2005 type AC6A model. The model represents field-controlled alternator-rectifier excitation systems with system-supplied electronic voltage regulators.  The maximum output of the regulator, , is a function of terminal voltage, . The field current limiter included in the original model AC6A remains in the 2005 update.  Reference: IEEE Standard 421.5-2005 Section 6.6. */
	class ExcIEEEAC6A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEAC6A();
		~ExcIEEEAC6A() override;

		/** \brief Voltage regulator gain (K).  Typical Value = 536. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (K). Typical Value = 0.173. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Demagnetizing factor, a function of exciter alternator reactances (K).  Typical Value = 1.91. Default: nullptr */
		CIMPP::PU kd;

		/** \brief Exciter constant related to self-excited field (K).  Typical Value = 1.6. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Exciter field current limiter gain (K).  Typical Value = 92. Default: nullptr */
		CIMPP::PU kh;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, V, back of commutating reactance (S[V]).  Typical Value = 0.214. Default: nullptr */
		CIMPP::Simple_Float seve1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, V, back of commutating reactance (S[V]).  Typical Value = 0.044. Default: nullptr */
		CIMPP::Simple_Float seve2;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0.086. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (T).  Typical Value = 9. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (T).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (T).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Exciter field current limiter time constant (T).  Typical Value = 0.08. Default: nullptr */
		CIMPP::Seconds th;

		/** \brief Exciter field current limiter time constant (T).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds tj;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0.18. Default: nullptr */
		CIMPP::Seconds tk;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 75. Default: nullptr */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -75. Default: nullptr */
		CIMPP::PU vamin;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (V) equals V(V).  Typical Value = 7.4. Default: nullptr */
		CIMPP::PU ve1;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (V).  Typical Value = 5.55. Default: nullptr */
		CIMPP::PU ve2;

		/** \brief Exciter field current limit reference (V).  Typical Value = 19. Default: nullptr */
		CIMPP::PU vfelim;

		/** \brief Maximum field current limiter signal reference (V).  Typical Value = 75. Default: nullptr */
		CIMPP::PU vhmax;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 44. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -36. Default: nullptr */
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

	BaseClass* ExcIEEEAC6A_factory();
}
#endif
