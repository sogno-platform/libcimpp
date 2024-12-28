#ifndef PssSK_H
#define PssSK_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	PSS Slovakian type - three inputs.
	*/
	class PssSK : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssSK();
		~PssSK() override;

		CIMPP::PU k1;  /* Gain P (K1).  Typical Value = -0.3. Default: nullptr */
		CIMPP::PU k2;  /* Gain fe (K2).  Typical Value = -0.15. Default: nullptr */
		CIMPP::PU k3;  /* Gain If (K3).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds t1;  /* Denominator time constant (T1).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Seconds t2;  /* Filter time constant (T2).  Typical Value = 0.35. Default: nullptr */
		CIMPP::Seconds t3;  /* Denominator time constant (T3).  Typical Value = 0.22. Default: nullptr */
		CIMPP::Seconds t4;  /* Filter time constant (T4).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds t5;  /* Denominator time constant (T5).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds t6;  /* Filter time constant (T6).  Typical Value = 0.02. Default: nullptr */
		CIMPP::PU vsmax;  /* Stabilizer output max limit (Vsmax).  Typical Value = 0.4. Default: nullptr */
		CIMPP::PU vsmin;  /* Stabilizer output min limit (Vsmin).  Typical Value = -0.4. Default: nullptr */

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

	BaseClass* PssSK_factory();
}
#endif
