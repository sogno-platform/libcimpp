#ifndef NonlinearShuntCompensator_H
#define NonlinearShuntCompensator_H

#include "ShuntCompensator.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class NonlinearShuntCompensatorPoint;
	/*
	A non linear shunt compensator has bank or section admittance values that differs.
	*/
	class NonlinearShuntCompensator: public ShuntCompensator
	{

	public:
					std::list<CIMPP::NonlinearShuntCompensatorPoint*> NonlinearShuntCompensatorPoints; 	/* All points of the non-linear shunt compensator. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		NonlinearShuntCompensator();
		virtual ~NonlinearShuntCompensator();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* NonlinearShuntCompensator_factory();
}
#endif
