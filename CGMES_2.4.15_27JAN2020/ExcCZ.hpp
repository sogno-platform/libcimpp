#ifndef ExcCZ_H
#define ExcCZ_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Czech Proportion/Integral Exciter.
	*/
	class ExcCZ : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcCZ();
		~ExcCZ() override;

		CIMPP::PU efdmax;  /* Exciter output maximum limit (Efdmax). Default: nullptr */
		CIMPP::PU efdmin;  /* Exciter output minimum limit (Efdmin). Default: nullptr */
		CIMPP::PU ka;  /* Regulator gain (Ka). Default: nullptr */
		CIMPP::PU ke;  /* Exciter constant related to self-excited field (Ke). Default: nullptr */
		CIMPP::PU kp;  /* Regulator proportional gain (Kp). Default: nullptr */
		CIMPP::Seconds ta;  /* Regulator time constant (Ta). Default: nullptr */
		CIMPP::Seconds tc;  /* Regulator integral time constant (Tc). Default: nullptr */
		CIMPP::Seconds te;  /* Exciter time constant, integration rate associated with exciter control (Te). Default: nullptr */
		CIMPP::PU vrmax;  /* Voltage regulator maximum limit (Vrmax). Default: nullptr */
		CIMPP::PU vrmin;  /* Voltage regulator minimum limit (Vrmin). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcCZ_factory();
}
#endif
