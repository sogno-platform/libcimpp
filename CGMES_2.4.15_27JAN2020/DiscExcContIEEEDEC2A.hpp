#ifndef DiscExcContIEEEDEC2A_H
#define DiscExcContIEEEDEC2A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DiscontinuousExcitationControlDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	The class represents IEEE Type DEC2A model for the discontinuous excitation control. This system provides transient excitation boosting via an open-loop control as initiated by a trigger signal generated remotely.  Reference: IEEE Standard 421.5-2005 Section 12.3.
	*/
	class DiscExcContIEEEDEC2A : public DiscontinuousExcitationControlDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		DiscExcContIEEEDEC2A();
		~DiscExcContIEEEDEC2A() override;

		CIMPP::Seconds td1;  /* Discontinuous controller time constant (). Default: nullptr */
		CIMPP::Seconds td2;  /* Discontinuous controller washout time constant (). Default: nullptr */
		CIMPP::PU vdmax;  /* Limiter (). Default: nullptr */
		CIMPP::PU vdmin;  /* Limiter (). Default: nullptr */
		CIMPP::PU vk;  /* Discontinuous controller input reference (). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DiscExcContIEEEDEC2A_factory();
}
#endif
