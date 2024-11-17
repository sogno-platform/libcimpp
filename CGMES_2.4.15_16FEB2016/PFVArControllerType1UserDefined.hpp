#ifndef PFVArControllerType1UserDefined_H
#define PFVArControllerType1UserDefined_H

#include "PFVArControllerType1Dynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"

namespace CIMPP {


class ProprietaryParameterDynamics;
	/*
	Power Factor or VAr controller Type I function block whose dynamic behaviour is described by
	*/
	class PFVArControllerType1UserDefined: public PFVArControllerType1Dynamics
	{

	public:
					std::list<CIMPP::ProprietaryParameterDynamics*> ProprietaryParameterDynamics; 	/* Parameter of this proprietary user-defined model. Default: 0 */
					CIMPP::Boolean proprietary; 	/* Behaviour is based on proprietary model as opposed to detailed model. true = user-defined model is proprietary with behaviour mutually understood by sending and receiving applications and parameters passed as general attributes false = user-defined model is explicitly defined in terms of control blocks and their input and output signals. Default: false */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		PFVArControllerType1UserDefined();
		virtual ~PFVArControllerType1UserDefined();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PFVArControllerType1UserDefined_factory();
}
#endif
