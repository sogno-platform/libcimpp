#ifndef NonlinearShuntCompensatorPoint_H
#define NonlinearShuntCompensatorPoint_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "Conductance.hpp"
#include "Integer.hpp"
#include "Susceptance.hpp"

namespace CIMPP
{
	class NonlinearShuntCompensator;

	/*
	A non linear shunt compensator bank or section admittance value.
	*/
	class NonlinearShuntCompensatorPoint : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		NonlinearShuntCompensatorPoint();
		~NonlinearShuntCompensatorPoint() override;

		CIMPP::NonlinearShuntCompensator* NonlinearShuntCompensator;  /* Non-linear shunt compensator owning this point. Default: 0 */
		CIMPP::Susceptance b;  /* Positive sequence shunt (charging) susceptance per section Default: nullptr */
		CIMPP::Susceptance b0;  /* Zero sequence shunt (charging) susceptance per section Default: nullptr */
		CIMPP::Conductance g;  /* Positive sequence shunt (charging) conductance per section Default: nullptr */
		CIMPP::Conductance g0;  /* Zero sequence shunt (charging) conductance per section Default: nullptr */
		CIMPP::Integer sectionNumber;  /* The number of the section. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* NonlinearShuntCompensatorPoint_factory();
}
#endif
