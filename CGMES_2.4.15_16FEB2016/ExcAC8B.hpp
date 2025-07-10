#ifndef ExcAC8B_H
#define ExcAC8B_H
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

	/** \brief Modified IEEE AC8B alternator-supplied rectifier excitation system with speed input and input limiter. */
	class ExcAC8B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC8B();
		~ExcAC8B() override;

		/** \brief Input limiter indicator. true = input limiter Vimax and Vimin is considered false = input limiter Vimax and Vimin is not considered. Typical Value = true. Default: false */
		CIMPP::Boolean inlim;

		/** \brief Voltage regulator gain (Ka).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (Kc). Typical Value = 0.55. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Demagnetizing factor, a function of exciter alternator reactances (Kd).  Typical Value = 1.1. Default: nullptr */
		CIMPP::PU kd;

		/** \brief Voltage regulator derivative gain (Kdr).  Typical Value = 10. Default: nullptr */
		CIMPP::PU kdr;

		/** \brief Exciter constant related to self-excited field (Ke).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Voltage regulator integral gain (Kir).  Typical Value = 5. Default: nullptr */
		CIMPP::PU kir;

		/** \brief Voltage regulator proportional gain (Kpr).  Typical Value = 80. Default: nullptr */
		CIMPP::PU kpr;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (Ks).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ks;

		/** \brief PID limiter indicator. true = input limiter Vpidmax and Vpidmin is considered false = input limiter Vpidmax and Vpidmin is not considered. Typical Value = true. Default: false */
		CIMPP::Boolean pidlim;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, Ve, back of commutating reactance (Se[Ve1]).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Simple_Float seve1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, Ve, back of commutating reactance (Se[Ve2]).  Typical Value = 3. Default: nullptr */
		CIMPP::Simple_Float seve2;

		/** \brief Voltage regulator time constant (Ta).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Lag time constant (Tdr).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds tdr;

		/** \brief Exciter time constant, integration rate associated with exciter control (Te).  Typical Value = 1.2. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Selector for the limiter on the block [1/sTe].  See diagram for meaning of true and false. Typical Value = false. Default: false */
		CIMPP::Boolean telim;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve) equals V (Ve1).  Typical Value = 6.5. Default: nullptr */
		CIMPP::PU ve1;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve).  Typical Value = 9. Default: nullptr */
		CIMPP::PU ve2;

		/** \brief Minimum exciter voltage output (Vemin).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vemin;

		/** \brief Exciter field current limit reference (Vfemax).  Typical Value = 6. Default: nullptr */
		CIMPP::PU vfemax;

		/** \brief Input signal maximum (Vimax).  Typical Value = 35. Default: nullptr */
		CIMPP::PU vimax;

		/** \brief Input signal minimum (Vimin).  Typical Value = -10. Default: nullptr */
		CIMPP::PU vimin;

		/** \brief PID maximum controller output (Vpidmax).  Typical Value = 35. Default: nullptr */
		CIMPP::PU vpidmax;

		/** \brief PID minimum controller output (Vpidmin).  Typical Value = -10. Default: nullptr */
		CIMPP::PU vpidmin;

		/** \brief Maximum voltage regulator output (Vrmax). Typical Value = 35. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (Vrmin).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vrmin;

		/** \brief Multiply by generator`s terminal voltage indicator. true =the limits Vrmax and Vrmin are multiplied by the generator`s terminal voltage to represent a thyristor power stage fed from the generator terminals false = limits are not multiplied by generator`s terminal voltage.  Typical Value = false. Default: false */
		CIMPP::Boolean vtmult;

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

	BaseClass* ExcAC8B_factory();
}
#endif
