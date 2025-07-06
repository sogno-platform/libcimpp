#ifndef ExcAC1A_H
#define ExcAC1A_H
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

	/** \brief Modified IEEE AC1A alternator-supplied rectifier excitation system with different rate feedback source. */
	class ExcAC1A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC1A();
		~ExcAC1A() override;

		/** \brief Indicates if both HV gate and LV gate are active (HVLVgates). true = gates are used false = gates are not used. Typical Value = true. Default: false */
		CIMPP::Boolean hvlvgates;

		/** \brief Voltage regulator gain (Ka).  Typical Value = 400. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (Kc). Typical Value = 0.2. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Demagnetizing factor, a function of exciter alternator reactances (Kd).  Typical Value = 0.38. Default: nullptr */
		CIMPP::PU kd;

		/** \brief Exciter constant related to self-excited field (Ke).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gains (Kf).  Typical Value = 0.03. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Coefficient to allow different usage of the model (Kf1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kf1;

		/** \brief Coefficient to allow different usage of the model (Kf2).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kf2;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (Ks).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ks;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, Ve1, back of commutating reactance (Se[Ve1]).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Simple_Float seve1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, Ve2, back of commutating reactance (Se[Ve2]).  Typical Value = 0.03. Default: nullptr */
		CIMPP::Simple_Float seve2;

		/** \brief Voltage regulator time constant (Ta).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (Tb).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (Te).  Typical Value = 0.8. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (Tf).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 14.5. Default: nullptr */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -14.5. Default: nullptr */
		CIMPP::PU vamin;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve1).  Typical Value = 4.18. Default: nullptr */
		CIMPP::PU ve1;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve2).  Typical Value = 3.14. Default: nullptr */
		CIMPP::PU ve2;

		/** \brief Maximum voltage regulator outputs (Vrmax).  Typical Value = 6.03. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator outputs (Rrmin).  Typical Value = -5.43. Default: nullptr */
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

	BaseClass* ExcAC1A_factory();
}
#endif
