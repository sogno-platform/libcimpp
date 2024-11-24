#ifndef NonlinearShuntCompensator_H
#define NonlinearShuntCompensator_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ShuntCompensator.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class NonlinearShuntCompensatorPoint;

	/*
	A non linear shunt compensator has bank or section admittance values that differs.
	*/
	class NonlinearShuntCompensator : public ShuntCompensator
	{
	public:
		/* constructor initialising all attributes to null */
		NonlinearShuntCompensator();
		~NonlinearShuntCompensator() override;

		std::list<CIMPP::NonlinearShuntCompensatorPoint*> NonlinearShuntCompensatorPoints;  /* All points of the non-linear shunt compensator. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* NonlinearShuntCompensator_factory();
}
#endif
