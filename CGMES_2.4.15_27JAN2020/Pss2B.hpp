#ifndef Pss2B_H
#define Pss2B_H
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
#include "InputSignalKind.hpp"
#include "Integer.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	Modified IEEE PSS2B Model.  Extra lead/lag (or rate) block added at end (up to 4 lead/lags total).
	*/
	class Pss2B : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss2B();
		~Pss2B() override;

		CIMPP::Simple_Float a;  /* Numerator constant (a).  Typical Value = 1. Default: nullptr */
		CIMPP::InputSignalKind inputSignal1Type;  /* Type of input signal #1.  Typical Value = rotorSpeed. Default: 0 */
		CIMPP::InputSignalKind inputSignal2Type;  /* Type of input signal #2.  Typical Value = generatorElectricalPower. Default: 0 */
		CIMPP::PU ks1;  /* Stabilizer gain (Ks1).  Typical Value = 12. Default: nullptr */
		CIMPP::PU ks2;  /* Gain on signal #2 (Ks2).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU ks3;  /* Gain on signal #2 input before ramp-tracking filter (Ks3).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ks4;  /* Gain on signal #2 input after ramp-tracking filter (Ks4).  Typical Value = 1. Default: nullptr */
		CIMPP::Integer m;  /* Denominator order of ramp tracking filter (M).  Typical Value = 5. Default: 0 */
		CIMPP::Integer n;  /* Order of ramp tracking filter (N).  Typical Value = 1. Default: 0 */
		CIMPP::Seconds t1;  /* Lead/lag time constant (T1).  Typical Value = 0.12. Default: nullptr */
		CIMPP::Seconds t10;  /* Lead/lag time constant (T10).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t11;  /* Lead/lag time constant (T11).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t2;  /* Lead/lag time constant (T2).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds t3;  /* Lead/lag time constant (T3).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Seconds t4;  /* Lead/lag time constant (T4).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds t6;  /* Time constant on signal #1 (T6).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t7;  /* Time constant on signal #2 (T7).  Typical Value = 2. Default: nullptr */
		CIMPP::Seconds t8;  /* Lead of ramp tracking filter (T8).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds t9;  /* Lag of ramp tracking filter (T9).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds ta;  /* Lead constant (Ta).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tb;  /* Lag time constant (Tb).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tw1;  /* First washout on signal #1 (Tw1).  Typical Value = 2. Default: nullptr */
		CIMPP::Seconds tw2;  /* Second washout on signal #1 (Tw2).  Typical Value = 2. Default: nullptr */
		CIMPP::Seconds tw3;  /* First washout on signal #2 (Tw3).  Typical Value = 2. Default: nullptr */
		CIMPP::Seconds tw4;  /* Second washout on signal #2 (Tw4).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vsi1max;  /* Input signal #1 max limit (Vsi1max).  Typical Value = 2. Default: nullptr */
		CIMPP::PU vsi1min;  /* Input signal #1 min limit (Vsi1min).  Typical Value = -2. Default: nullptr */
		CIMPP::PU vsi2max;  /* Input signal #2 max limit (Vsi2max).  Typical Value = 2. Default: nullptr */
		CIMPP::PU vsi2min;  /* Input signal #2 min limit (Vsi2min).  Typical Value = -2. Default: nullptr */
		CIMPP::PU vstmax;  /* Stabilizer output max limit (Vstmax).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU vstmin;  /* Stabilizer output min limit (Vstmin).  Typical Value = -0.1. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* Pss2B_factory();
}
#endif
