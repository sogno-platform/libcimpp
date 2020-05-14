#ifndef UnderexcitationLimiterDynamics_H
#define UnderexcitationLimiterDynamics_H

#include "DynamicsFunctionBlock.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class RemoteInputSignal;
class ExcitationSystemDynamics;
	/*
	Underexcitation limiter function block whose behaviour is described by reference to a standard model
	*/
	class UnderexcitationLimiterDynamics: public DynamicsFunctionBlock
	{

	public:
					CIMPP::RemoteInputSignal* RemoteInputSignal; 	/* Remote input signal used by this underexcitation limiter model. Default: 0 */
					CIMPP::ExcitationSystemDynamics* ExcitationSystemDynamics; 	/* Excitation system model with which this underexcitation limiter model is associated. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		UnderexcitationLimiterDynamics();
		virtual ~UnderexcitationLimiterDynamics();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* UnderexcitationLimiterDynamics_factory();
}
#endif
