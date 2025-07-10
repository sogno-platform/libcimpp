#ifndef ExcELIN2_H
#define ExcELIN2_H
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

	/** \brief Detailed Excitation System Model - ELIN (VATECH).  This model represents an all-static excitation system. A PI voltage controller establishes a desired field current set point for a proportional current controller. The integrator of the PI controller has a follow-up input to match its signal to the present field current.  Power system stabilizer models used in conjunction with this excitation system model: PssELIN2, PssIEEE2B, Pss2B. */
	class ExcELIN2 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcELIN2();
		~ExcELIN2() override;

		/** \brief Gain (Efdbas).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU efdbas;

		/** \brief Limiter (Iefmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU iefmax;

		/** \brief Minimum open circuit excitation voltage (Iefmax2).  Typical Value = -5. Default: nullptr */
		CIMPP::PU iefmax2;

		/** \brief Limiter (Iefmin).  Typical Value = 1. Default: nullptr */
		CIMPP::PU iefmin;

		/** \brief Voltage regulator input gain (K1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU k1;

		/** \brief Voltage regulator input limit (K1ec).  Typical Value = 2. Default: nullptr */
		CIMPP::PU k1ec;

		/** \brief Gain (K2).  Typical Value = 5. Default: nullptr */
		CIMPP::PU k2;

		/** \brief Gain (K3).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU k3;

		/** \brief Gain (K4).  Typical Value = 0. Default: nullptr */
		CIMPP::PU k4;

		/** \brief Voltage controller derivative gain (Kd1).  Typical Value = 34.5. Default: nullptr */
		CIMPP::PU kd1;

		/** \brief Gain (Ke2).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU ke2;

		/** \brief Gain (Ketb).  Typical Value = 0.06. Default: nullptr */
		CIMPP::PU ketb;

		/** \brief Controller follow up gain (PID1max).  Typical Value = 2. Default: nullptr */
		CIMPP::PU pid1max;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, Ve1, back of commutating reactance (Se[Ve1]).  Typical Value = 0. Default: nullptr */
		CIMPP::PU seve1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, Ve2, back of commutating reactance (Se[Ve2]).  Typical Value = 1. Default: nullptr */
		CIMPP::PU seve2;

		/** \brief Voltage controller derivative washout time constant (Tb1).  Typical Value = 12.45. Default: nullptr */
		CIMPP::Seconds tb1;

		/** \brief Time constant (Te).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Time Constant (Te2).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds te2;

		/** \brief Controller follow up dead band (Ti1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ti1;

		/** \brief Time constant (Ti3).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds ti3;

		/** \brief Time constant (Ti4).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ti4;

		/** \brief Time constant (Tr4).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tr4;

		/** \brief Limiter (Upmax).  Typical Value = 3. Default: nullptr */
		CIMPP::PU upmax;

		/** \brief Limiter (Upmin).  Typical Value = 0. Default: nullptr */
		CIMPP::PU upmin;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve1).  Typical Value = 3. Default: nullptr */
		CIMPP::PU ve1;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ve2;

		/** \brief Excitation transformer effective reactance (Xp).  Typical Value = 1. Default: nullptr */
		CIMPP::PU xp;

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

	BaseClass* ExcELIN2_factory();
}
#endif
