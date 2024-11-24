#ifndef PFVArControllerType2UserDefined_H
#define PFVArControllerType2UserDefined_H

#include "PFVArControllerType2Dynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"

namespace CIMPP {


class ProprietaryParameterDynamics;
	/*
	Power Factor or VAr controller Type II function block whose dynamic behaviour is described by
	*/
	class PFVArControllerType2UserDefined: public PFVArControllerType2Dynamics
	{

	public:
					std::list<CIMPP::ProprietaryParameterDynamics*> ProprietaryParameterDynamics; 	/* Parameter of this proprietary user-defined model. Default: 0 */
					CIMPP::Boolean proprietary; 	/* Behaviour is based on proprietary model as opposed to detailed model. true = user-defined model is proprietary with behaviour mutually understood by sending and receiving applications and parameters passed as general attributes false = user-defined model is explicitly defined in terms of control blocks and their input and output signals. Default: false */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		PFVArControllerType2UserDefined();
		virtual ~PFVArControllerType2UserDefined();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PFVArControllerType2UserDefined_factory();
}
#endif
