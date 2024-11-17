#ifndef OverexcitationLimiterDynamics_H
#define OverexcitationLimiterDynamics_H

#include "DynamicsFunctionBlock.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class ExcitationSystemDynamics;
	/*
	Overexcitation limiter function block whose behaviour is described by reference to a standard model
	*/
	class OverexcitationLimiterDynamics: public DynamicsFunctionBlock
	{

	public:
					CIMPP::ExcitationSystemDynamics* ExcitationSystemDynamics; 	/* Excitation system model with which this overexcitation limiter model is associated. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		OverexcitationLimiterDynamics();
		virtual ~OverexcitationLimiterDynamics();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* OverexcitationLimiterDynamics_factory();
}
#endif
