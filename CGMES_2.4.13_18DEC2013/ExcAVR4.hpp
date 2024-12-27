#ifndef ExcAVR4_H
#define ExcAVR4_H
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
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	Italian excitation system. It represents static exciter and electric voltage regulator.
	*/
	class ExcAVR4 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAVR4();
		~ExcAVR4() override;

		CIMPP::Boolean imul;  /* AVR output voltage dependency selector (Imul). true = selector is connected false = selector is not connected. Typical Value = true. Default: false */
		CIMPP::Simple_Float ka;  /* AVR gain (K).  Typical Value = 300. Default: nullptr */
		CIMPP::Simple_Float ke;  /* Exciter gain (K).  Typical Value = 1. Default: nullptr */
		CIMPP::Simple_Float kif;  /* Exciter internal reactance (K).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t1;  /* AVR time constant (T).  Typical Value = 4.8. Default: nullptr */
		CIMPP::Seconds t1if;  /* Exciter current feedback time constant (T).  Typical Value = 60. Default: nullptr */
		CIMPP::Seconds t2;  /* AVR time constant (T).  Typical Value = 1.5. Default: nullptr */
		CIMPP::Seconds t3;  /* AVR time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t4;  /* AVR time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tif;  /* Exciter current feedback time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vfmn;  /* Minimum exciter output (V).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vfmx;  /* Maximum exciter output (V).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vrmn;  /* Maximum AVR output (V).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vrmx;  /* Minimum AVR output (V).  Typical Value = 5. Default: nullptr */

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

	BaseClass* ExcAVR4_factory();
}
#endif
