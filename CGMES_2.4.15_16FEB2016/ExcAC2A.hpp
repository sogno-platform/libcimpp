#ifndef ExcAC2A_H
#define ExcAC2A_H
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
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE AC2A alternator-supplied rectifier excitation system with different field current limit. */
	class ExcAC2A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC2A();
		~ExcAC2A() override;

		/** \brief Indicates if HV gate is active (HVgate). true = gate is used false = gate is not used. Typical Value = true. Default: false */
		CIMPP::Boolean hvgate;

		/** \brief Voltage regulator gain (Ka).  Typical Value = 400. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Second stage regulator gain (Kb) (&gt;0).  Exciter field current controller gain.  Typical Value = 25. Default: nullptr */
		CIMPP::PU kb;

		/** \brief Second stage regulator gain (Kb1). It is exciter field current controller gain used as alternative to Kb to represent a variant of the ExcAC2A model.  Typical Value = 25. Default: nullptr */
		CIMPP::PU kb1;

		/** \brief Rectifier loading factor proportional to commutating reactance (Kc).  Typical Value = 0.28. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Demagnetizing factor, a function of exciter alternator reactances (Kd).  Typical Value = 0.35. Default: nullptr */
		CIMPP::PU kd;

		/** \brief Exciter constant related to self-excited field (Ke).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gains (Kf).  Typical Value = 0.03. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Exciter field current feedback gain (Kh).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kh;

		/** \brief Exciter field current limiter gain (Kl).  Typical Value = 10. Default: nullptr */
		CIMPP::PU kl;

		/** \brief Coefficient to allow different usage of the model (Kl1).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kl1;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (Ks).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ks;

		/** \brief Indicates if LV gate is active (LVgate). true = gate is used false = gate is not used. Typical Value = true. Default: false */
		CIMPP::Boolean lvgate;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, Ve, back of commutating reactance (Se[Ve]).  Typical Value = 0.037. Default: nullptr */
		CIMPP::Simple_Float seve1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, Ve, back of commutating reactance (Se[Ve]).  Typical Value = 0.012. Default: nullptr */
		CIMPP::Simple_Float seve2;

		/** \brief Voltage regulator time constant (Ta).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (Tb).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (Te).  Typical Value = 0.6. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (Tf).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 8. Default: nullptr */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -8. Default: nullptr */
		CIMPP::PU vamin;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve).  Typical Value = 4.4. Default: nullptr */
		CIMPP::PU ve1;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve).  Typical Value = 3.3. Default: nullptr */
		CIMPP::PU ve2;

		/** \brief Exciter field current limit reference (Vfemax).  Typical Value = 4.4. Default: nullptr */
		CIMPP::PU vfemax;

		/** \brief Maximum exciter field current (Vlr).  Typical Value = 4.4. Default: nullptr */
		CIMPP::PU vlr;

		/** \brief Maximum voltage regulator outputs (Vrmax).  Typical Value = 105. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator outputs (Vrmin).  Typical Value = -95. Default: nullptr */
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

	BaseClass* ExcAC2A_factory();
}
#endif
