///////////////////////////////////////////////////////////
//  AssetDeployment.h
//  Implementation of the Class AssetDeployment
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETDEPLOYMENT_H
#define ASSETDEPLOYMENT_H

#include "IEC61968/Assets/BreakerApplicationKind.h"
#include "IEC61968/Assets/DeploymentDate.h"
#include "IEC61968/Assets/DeploymentStateKind.h"
#include "IEC61968/Assets/FacilityKind.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Assets/TransformerApplicationKind.h"
#include "IEC61970/Base/Core/BaseVoltage.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Deployment of asset deployment in a power system resource role.
		 */
		class AssetDeployment : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			AssetDeployment();
			virtual ~AssetDeployment();
			/**
			 * Type of network role breaker is playing in this deployment (applies to breaker
			 * assets only).
			 */
			IEC61968::Assets::BreakerApplicationKind breakerApplication = IEC61968::Assets::BreakerApplicationKind::_undef;
			/**
			 * Dates of asset deployment.
			 */
			IEC61968::Assets::DeploymentDate deploymentDate;
			/**
			 * Current deployment state of asset.
			 */
			IEC61968::Assets::DeploymentStateKind deploymentState = IEC61968::Assets::DeploymentStateKind::_undef;
			/**
			 * Kind of facility (like substation or pole or building or plant or service
			 * center) at which asset deployed.
			 */
			IEC61968::Assets::FacilityKind facilityKind = IEC61968::Assets::FacilityKind::_undef;
			/**
			 * Likelihood of asset failure on a scale of 1(low) to 100 (high).
			 */
			IEC61970::Base::Domain::Integer likelihoodOfFailure;
			/**
			 * Type of network role transformer is playing in this deployment (applies to
			 * transformer assets only).
			 */
			IEC61968::Assets::TransformerApplicationKind transformerApplication = IEC61968::Assets::TransformerApplicationKind::_undef;
			/**
			 * Base voltage of this network asset deployment.
			 */
			IEC61970::Base::Core::BaseVoltage *BaseVoltage;

		};

	}

}
#endif // ASSETDEPLOYMENT_H
