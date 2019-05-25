///////////////////////////////////////////////////////////
//  DeploymentStateKind.h
//  Implementation of the Class DeploymentStateKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef DEPLOYMENTSTATEKIND_H
#define DEPLOYMENTSTATEKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Possible states of asset deployment.
		 */
		enum class DeploymentStateKind
		{
			 _undef = -1, 	notYetInstalled,
			installed,
			inService,
			outOfService,
			removed
		};

	}

}
#endif // DEPLOYMENTSTATEKIND_H
