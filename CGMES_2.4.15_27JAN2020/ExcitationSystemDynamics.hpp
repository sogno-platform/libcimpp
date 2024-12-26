#ifndef ExcitationSystemDynamics_H
#define ExcitationSystemDynamics_H

#include "DynamicsFunctionBlock.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class DiscontinuousExcitationControlDynamics;
class OverexcitationLimiterDynamics;
class PFVArControllerType1Dynamics;
class PFVArControllerType2Dynamics;
class PowerSystemStabilizerDynamics;
class SynchronousMachineDynamics;
class UnderexcitationLimiterDynamics;
class VoltageCompensatorDynamics;
	/*
	Excitation system function block whose behavior is described by reference to a standard model
	*/
	class ExcitationSystemDynamics: public DynamicsFunctionBlock
	{

	public:
					CIMPP::DiscontinuousExcitationControlDynamics* DiscontinuousExcitationControlDynamics; 	/* Discontinuous excitation control model associated with this excitation system model. Default: 0 */
					CIMPP::OverexcitationLimiterDynamics* OverexcitationLimiterDynamics; 	/* Overexcitation limiter model associated with this excitation system model. Default: 0 */
					CIMPP::PFVArControllerType1Dynamics* PFVArControllerType1Dynamics; 	/* Power Factor or VAr controller Type I model associated with this excitation system model. Default: 0 */
					CIMPP::PFVArControllerType2Dynamics* PFVArControllerType2Dynamics; 	/* Power Factor or VAr controller Type II model associated with this excitation system model. Default: 0 */
					CIMPP::PowerSystemStabilizerDynamics* PowerSystemStabilizerDynamics; 	/* Power system stabilizer model associated with this excitation system model. Default: 0 */
					CIMPP::SynchronousMachineDynamics* SynchronousMachineDynamics; 	/* Synchronous machine model with which this excitation system model is associated. Default: 0 */
					CIMPP::UnderexcitationLimiterDynamics* UnderexcitationLimiterDynamics; 	/* Undrexcitation limiter model associated with this excitation system model. Default: 0 */
					CIMPP::VoltageCompensatorDynamics* VoltageCompensatorDynamics; 	/* Voltage compensator model associated with this excitation system model. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ExcitationSystemDynamics();
		virtual ~ExcitationSystemDynamics();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcitationSystemDynamics_factory();
}
#endif
