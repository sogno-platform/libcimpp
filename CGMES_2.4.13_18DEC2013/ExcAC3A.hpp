#ifndef ExcAC3A_H
#define ExcAC3A_H
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

	/** \brief Modified IEEE AC3A alternator-supplied rectifier excitation system with different field current limit. */
	class ExcAC3A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC3A();
		~ExcAC3A() override;

		/** \brief Value of at which feedback gain changes (Efdn).  Typical Value = 2.36. Default: nullptr */
		CIMPP::PU efdn;

		/** \brief Voltage regulator gain (Ka).  Typical Value = 45.62. Default: nullptr */
		CIMPP::Seconds ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (Kc).  Typical Value = 0.104. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Demagnetizing factor, a function of exciter alternator reactances (Kd).  Typical Value = 0.499. Default: nullptr */
		CIMPP::PU kd;

		/** \brief Exciter constant related to self-excited field (Ke).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gains (Kf).  Typical Value = 0.143. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Coefficient to allow different usage of the model (Kf1).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kf1;

		/** \brief Coefficient to allow different usage of the model (Kf2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kf2;

		/** \brief Gain used in the minimum field voltage limiter loop (Klv).  Typical Value = 0.194. Default: nullptr */
		CIMPP::PU klv;

		/** \brief Excitation control system stabilizer gain (Kn).  Typical Value =0.05. Default: nullptr */
		CIMPP::PU kn;

		/** \brief Constant associated with regulator and alternator field power supply (Kr).  Typical Value =3.77. Default: nullptr */
		CIMPP::PU kr;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (Ks).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ks;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, Ve, back of commutating reactance (Se[Ve]).  Typical Value = 1.143. Default: nullptr */
		CIMPP::Simple_Float seve1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, Ve, back of commutating reactance (Se[Ve]).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Simple_Float seve2;

		/** \brief Voltage regulator time constant (Ta).  Typical Value = 0.013. Default: nullptr */
		CIMPP::PU ta;

		/** \brief Voltage regulator time constant (Tb).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (Te).  Typical Value = 1.17. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (Tf).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -0.95. Default: nullptr */
		CIMPP::PU vamin;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve1) equals Vemax (Ve1).  Typical Value = 6.24. Default: nullptr */
		CIMPP::PU ve1;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve).  Typical Value = 4.68. Default: nullptr */
		CIMPP::PU ve2;

		/** \brief Minimum exciter voltage output (Vemin).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU vemin;

		/** \brief Exciter field current limit reference (Vfemax).  Typical Value = 16. Default: nullptr */
		CIMPP::PU vfemax;

		/** \brief Field voltage used in the minimum field voltage limiter loop (Vlv).  Typical Value = 0.79. Default: nullptr */
		CIMPP::PU vlv;

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

	BaseClass* ExcAC3A_factory();
}
#endif
