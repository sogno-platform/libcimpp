#ifndef LinearShuntCompensator_H
#define LinearShuntCompensator_H

#include "ShuntCompensator.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Susceptance.hpp"
#include "Conductance.hpp"

namespace CIMPP {


	/*
	A linear shunt compensator has banks or sections with equal admittance values.
	*/
	class LinearShuntCompensator: public ShuntCompensator
	{

	public:
					CIMPP::Susceptance b0PerSection; 	/* Zero sequence shunt (charging) susceptance per section Default: nullptr */
					CIMPP::Susceptance bPerSection; 	/* Positive sequence shunt (charging) susceptance per section Default: nullptr */
					CIMPP::Conductance g0PerSection; 	/* Zero sequence shunt (charging) conductance per section Default: nullptr */
					CIMPP::Conductance gPerSection; 	/* Positive sequence shunt (charging) conductance per section Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		LinearShuntCompensator();
		virtual ~LinearShuntCompensator();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* LinearShuntCompensator_factory();
}
#endif
