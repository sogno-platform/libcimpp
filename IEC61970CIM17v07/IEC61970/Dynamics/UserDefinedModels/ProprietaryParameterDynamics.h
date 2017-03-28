///////////////////////////////////////////////////////////
//  ProprietaryParameterDynamics.h
//  Implementation of the Class ProprietaryParameterDynamics
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef PROPRIETARYPARAMETERDYNAMICS_H
#define PROPRIETARYPARAMETERDYNAMICS_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Dynamics/UserDefinedModels/TurbineGovernorUserDefined.h"
#include "IEC61970/Dynamics/UserDefinedModels/VoltageAdjusterUserDefined.h"
#include "IEC61970/Dynamics/UserDefinedModels/AsynchronousMachineUserDefined.h"
#include "IEC61970/Dynamics/UserDefinedModels/UnderexcitationLimiterUserDefined.h"
#include "IEC61970/Dynamics/UserDefinedModels/VoltageCompensatorUserDefined.h"
#include "IEC61970/Dynamics/UserDefinedModels/PFVArControllerType1UserDefined.h"
#include "IEC61970/Dynamics/UserDefinedModels/OverexcitationLimiterUserDefined.h"
#include "IEC61970/Dynamics/UserDefinedModels/PowerSystemStabilizerUserDefined.h"
#include "IEC61970/Dynamics/UserDefinedModels/DiscontinuousExcitationControlUserDefined.h"
#include "IEC61970/Dynamics/UserDefinedModels/PFVArControllerType2UserDefined.h"
#include "IEC61970/Dynamics/UserDefinedModels/MechanicalLoadUserDefined.h"
#include "IEC61970/Dynamics/UserDefinedModels/SynchronousMachineUserDefined.h"
#include "IEC61970/Dynamics/UserDefinedModels/LoadUserDefined.h"
#include "IEC61970/Dynamics/UserDefinedModels/TurbineLoadControllerUserDefined.h"
#include "IEC61970/Dynamics/UserDefinedModels/ExcitationSystemUserDefined.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace UserDefinedModels
		{
			/**
			 * Supports definition of one or more parameters of several different datatypes
			 * for use by proprietary user-defined models.  NOTE: This class does not inherit
			 * from IdentifiedObject since it is not intended that a single instance of it be
			 * referenced by more than one proprietary user-defined model instance.
			 */
			class ProprietaryParameterDynamics : public BaseClass
			{

			public:
				ProprietaryParameterDynamics();
				virtual ~ProprietaryParameterDynamics();
				/**
				 * Used for boolean parameter value. If this attribute is populated,
				 * integerParameterValue and floatParameterValue will not be.
				 */
				IEC61970::Base::Domain::Boolean booleanParameterValue;
				/**
				 * Used for floating point parameter value.  If this attribute is populated,
				 * booleanParameterValue and integerParameterValue will not be.
				 */
				IEC61970::Base::Domain::Float floatParameterValue;
				/**
				 * Used for integer parameter value.  If this attribute is populated,
				 * booleanParameterValue and floatParameterValue will not be.
				 */
				IEC61970::Base::Domain::Integer integerParameterValue;
				/**
				 * Sequence number of the parameter among the set of parameters associated with
				 * the related proprietary user-defined model.
				 */
				IEC61970::Base::Domain::Integer parameterNumber;
				/**
				 * Proprietary user-defined model with which this parameter is associated.
				 */
				IEC61970::Dynamics::UserDefinedModels::TurbineGovernorUserDefined *TurbineGovernorUserDefined;
				/**
				 * Proprietary user-defined model with which this parameter is associated.
				 */
				IEC61970::Dynamics::UserDefinedModels::VoltageAdjusterUserDefined *VoltageAdjusterUserDefined;
				/**
				 * Proprietary user-defined model with which this parameter is associated.
				 */
				IEC61970::Dynamics::UserDefinedModels::AsynchronousMachineUserDefined *AsynchronousMachineUserDefined;
				/**
				 * Proprietary user-defined model with which this parameter is associated.
				 */
				IEC61970::Dynamics::UserDefinedModels::UnderexcitationLimiterUserDefined *UnderexcitationLimiterUserDefined;
				/**
				 * Proprietary user-defined model with which this parameter is associated.
				 */
				IEC61970::Dynamics::UserDefinedModels::VoltageCompensatorUserDefined *VoltageCompensatorUserDefined;
				/**
				 * Proprietary user-defined model with which this parameter is associated.
				 */
				IEC61970::Dynamics::UserDefinedModels::PFVArControllerType1UserDefined *PFVArControllerType1UserDefined;
				/**
				 * Proprietary user-defined model with which this parameter is associated.
				 */
				IEC61970::Dynamics::UserDefinedModels::OverexcitationLimiterUserDefined *OverexcitationLimiterUserDefined;
				/**
				 * Proprietary user-defined model with which this parameter is associated.
				 */
				IEC61970::Dynamics::UserDefinedModels::PowerSystemStabilizerUserDefined *PowerSystemStabilizerUserDefined;
				/**
				 * Proprietary user-defined model with which this parameter is associated.
				 */
				IEC61970::Dynamics::UserDefinedModels::DiscontinuousExcitationControlUserDefined *DiscontinuousExcitationControlUserDefined;
				/**
				 * Proprietary user-defined model with which this parameter is associated.
				 */
				IEC61970::Dynamics::UserDefinedModels::PFVArControllerType2UserDefined *PFVArControllerType2UserDefined;
				/**
				 * Proprietary user-defined model with which this parameter is associated.
				 */
				IEC61970::Dynamics::UserDefinedModels::MechanicalLoadUserDefined *MechanicalLoadUserDefined;
				/**
				 * Proprietary user-defined model with which this parameter is associated.
				 */
				IEC61970::Dynamics::UserDefinedModels::SynchronousMachineUserDefined *SynchronousMachineUserDefined;
				/**
				 * Proprietary user-defined model with which this parameter is associated.
				 */
				IEC61970::Dynamics::UserDefinedModels::LoadUserDefined *LoadUserDefined;
				/**
				 * Proprietary user-defined model with which this parameter is associated.
				 */
				IEC61970::Dynamics::UserDefinedModels::TurbineLoadControllerUserDefined *TurbineLoadControllerUserDefined;
				/**
				 * Proprietary user-defined model with which this parameter is associated.
				 */
				IEC61970::Dynamics::UserDefinedModels::ExcitationSystemUserDefined *ExcitationSystemUserDefined;

			};

		}

	}

}
#endif // PROPRIETARYPARAMETERDYNAMICS_H
