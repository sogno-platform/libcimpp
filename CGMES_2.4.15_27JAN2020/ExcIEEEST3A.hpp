#ifndef ExcIEEEST3A_H
#define ExcIEEEST3A_H
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
#include "AngleDegrees.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	The class represents IEEE Std 421.5-2005 type ST3A model.  Some static systems utilize a field voltage control loop to linearize the exciter control characteristic. This also makes the output independent of supply source variations until supply limitations are reached.  These systems utilize a variety of controlled-rectifier designs: full thyristor complements or hybrid bridges in either series or shunt configurations. The power source may consist of only a potential source, either fed from the machine terminals or from internal windings. Some designs may have compound power sources utilizing both machine potential and current. These power sources are represented as phasor combinations of machine terminal current and voltage and are accommodated by suitable parameters in model Type ST3A which is represented by ExcIEEEST3A.   Reference: IEEE Standard 421.5-2005 Section 7.3.
	*/
	class ExcIEEEST3A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST3A();
		~ExcIEEEST3A() override;

		CIMPP::PU ka;  /* Voltage regulator gain (K). This is parameter K in the IEEE Std. Typical Value = 200. Default: nullptr */
		CIMPP::PU kc;  /* Rectifier loading factor proportional to commutating reactance (K). Typical Value = 0.2. Default: nullptr */
		CIMPP::PU kg;  /* Feedback gain constant of the inner loop field regulator (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ki;  /* Potential circuit gain coefficient (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU km;  /* Forward gain constant of the inner loop field regulator (K).  Typical Value = 7.93. Default: nullptr */
		CIMPP::PU kp;  /* Potential circuit gain coefficient (K).  Typical Value = 6.15. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tb;  /* Voltage regulator time constant (T).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds tc;  /* Voltage regulator time constant (T).  Typical Value = 1. Default: nullptr */
		CIMPP::AngleDegrees thetap;  /* Potential circuit phase angle (thetap).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tm;  /* Forward time constant of inner loop field regulator (T).  Typical Value = 0.4. Default: nullptr */
		CIMPP::PU vbmax;  /* Maximum excitation voltage (V).  Typical Value = 6.9. Default: nullptr */
		CIMPP::PU vgmax;  /* Maximum inner loop feedback voltage (V).  Typical Value = 5.8. Default: nullptr */
		CIMPP::PU vimax;  /* Maximum voltage regulator input limit (V).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU vimin;  /* Minimum voltage regulator input limit (V).  Typical Value = -0.2. Default: nullptr */
		CIMPP::PU vmmax;  /* Maximum inner loop output (V).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vmmin;  /* Minimum inner loop output (V).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (V).  Typical Value = 10. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (V).  Typical Value = -10. Default: nullptr */
		CIMPP::PU xl;  /* Reactance associated with potential source (X).  Typical Value = 0.081. Default: nullptr */

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

	BaseClass* ExcIEEEST3A_factory();
}
#endif
