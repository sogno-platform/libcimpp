#ifndef PssIEEE2B_H
#define PssIEEE2B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "InputSignalKind.hpp"
#include "Integer.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief The class represents IEEE Std 421.5-2005 type PSS2B power system stabilizer model. This stabilizer model is designed to represent a variety of dual-input stabilizers, which normally use combinations of power and speed or frequency to derive the stabilizing signal.  Reference: IEEE 2B 421.5-2005 Section 8.2. */
	class PssIEEE2B : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssIEEE2B();
		~PssIEEE2B() override;

		/** \brief Type of input signal #1.  Typical Value = rotorSpeed. Default: 0 */
		CIMPP::InputSignalKind inputSignal1Type;

		/** \brief Type of input signal #2.  Typical Value = generatorElectricalPower. Default: 0 */
		CIMPP::InputSignalKind inputSignal2Type;

		/** \brief Stabilizer gain (Ks1).  Typical Value = 12. Default: nullptr */
		CIMPP::PU ks1;

		/** \brief Gain on signal #2 (Ks2).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU ks2;

		/** \brief Gain on signal #2 input before ramp-tracking filter (Ks3).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ks3;

		/** \brief Denominator order of ramp tracking filter (M).  Typical Value = 5. Default: 0 */
		CIMPP::Integer m;

		/** \brief Order of ramp tracking filter (N).  Typical Value = 1. Default: 0 */
		CIMPP::Integer n;

		/** \brief Lead/lag time constant (T1).  Typical Value = 0.12. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Lead/lag time constant (T10).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t10;

		/** \brief Lead/lag time constant (T11).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t11;

		/** \brief Lead/lag time constant (T2).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Lead/lag time constant (T3).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Lead/lag time constant (T4).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Time constant on signal #1 (T6).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Time constant on signal #2 (T7).  Typical Value = 2. Default: nullptr */
		CIMPP::Seconds t7;

		/** \brief Lead of ramp tracking filter (T8).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds t8;

		/** \brief Lag of ramp tracking filter (T9).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds t9;

		/** \brief First washout on signal #1 (Tw1).  Typical Value = 2. Default: nullptr */
		CIMPP::Seconds tw1;

		/** \brief Second washout on signal #1 (Tw2).  Typical Value = 2. Default: nullptr */
		CIMPP::Seconds tw2;

		/** \brief First washout on signal #2 (Tw3).  Typical Value = 2. Default: nullptr */
		CIMPP::Seconds tw3;

		/** \brief Second washout on signal #2 (Tw4).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tw4;

		/** \brief Input signal #1 max limit (Vsi1max).  Typical Value = 2. Default: nullptr */
		CIMPP::PU vsi1max;

		/** \brief Input signal #1 min limit (Vsi1min).  Typical Value = -2. Default: nullptr */
		CIMPP::PU vsi1min;

		/** \brief Input signal #2 max limit (Vsi2max).  Typical Value = 2. Default: nullptr */
		CIMPP::PU vsi2max;

		/** \brief Input signal #2 min limit (Vsi2min).  Typical Value = -2. Default: nullptr */
		CIMPP::PU vsi2min;

		/** \brief Stabilizer output max limit (Vstmax).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU vstmax;

		/** \brief Stabilizer output min limit (Vstmin).  Typical Value = -0.1. Default: nullptr */
		CIMPP::PU vstmin;

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

	BaseClass* PssIEEE2B_factory();
}
#endif
