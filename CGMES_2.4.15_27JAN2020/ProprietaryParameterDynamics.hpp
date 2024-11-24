#ifndef ProprietaryParameterDynamics_H
#define ProprietaryParameterDynamics_H

#include "BaseClass.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"
#include "Simple_Float.hpp"
#include "Integer.hpp"

namespace CIMPP {


class AsynchronousMachineUserDefined;
class DiscontinuousExcitationControlUserDefined;
class ExcitationSystemUserDefined;
class LoadUserDefined;
class MechanicalLoadUserDefined;
class OverexcitationLimiterUserDefined;
class PFVArControllerType1UserDefined;
class PFVArControllerType2UserDefined;
class PowerSystemStabilizerUserDefined;
class SynchronousMachineUserDefined;
class TurbineGovernorUserDefined;
class TurbineLoadControllerUserDefined;
class UnderexcitationLimiterUserDefined;
class VoltageAdjusterUserDefined;
class VoltageCompensatorUserDefined;
class WindPlantUserDefined;
class WindType1or2UserDefined;
class WindType3or4UserDefined;
	/*
	Supports definition of one or more parameters of several different datatypes for use by proprietary user-defined models.  NOTE: This class does not inherit from IdentifiedObject since it is not intended that a single instance of it be referenced by more than one proprietary user-defined model instance.
	*/
	class ProprietaryParameterDynamics: public BaseClass
	{

	public:
					CIMPP::AsynchronousMachineUserDefined* AsynchronousMachineUserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::DiscontinuousExcitationControlUserDefined* DiscontinuousExcitationControlUserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::ExcitationSystemUserDefined* ExcitationSystemUserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::LoadUserDefined* LoadUserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::MechanicalLoadUserDefined* MechanicalLoadUserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::OverexcitationLimiterUserDefined* OverexcitationLimiterUserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::PFVArControllerType1UserDefined* PFVArControllerType1UserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::PFVArControllerType2UserDefined* PFVArControllerType2UserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::PowerSystemStabilizerUserDefined* PowerSystemStabilizerUserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::SynchronousMachineUserDefined* SynchronousMachineUserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::TurbineGovernorUserDefined* TurbineGovernorUserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::TurbineLoadControllerUserDefined* TurbineLoadControllerUserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::UnderexcitationLimiterUserDefined* UnderexcitationLimiterUserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::VoltageAdjusterUserDefined* VoltageAdjusterUserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::VoltageCompensatorUserDefined* VoltageCompensatorUserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::WindPlantUserDefined* WindPlantUserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::WindType1or2UserDefined* WindType1or2UserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::WindType3or4UserDefined* WindType3or4UserDefined; 	/* Proprietary user-defined model with which this parameter is associated. Default: 0 */
					CIMPP::Boolean booleanParameterValue; 	/* Used for boolean parameter value. If this attribute is populated, integerParameterValue and floatParameterValue will not be. Default: false */
					CIMPP::Simple_Float floatParameterValue; 	/* Used for floating point parameter value.  If this attribute is populated, booleanParameterValue and integerParameterValue will not be. Default: nullptr */
					CIMPP::Integer integerParameterValue; 	/* Used for integer parameter value.  If this attribute is populated, booleanParameterValue and floatParameterValue will not be. Default: 0 */
					CIMPP::Integer parameterNumber; 	/* Sequence number of the parameter among the set of parameters associated with the related proprietary user-defined model. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ProprietaryParameterDynamics();
		virtual ~ProprietaryParameterDynamics();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ProprietaryParameterDynamics_factory();
}
#endif
