///////////////////////////////////////////////////////////
//  DeploymentDate.h
//  Implementation of the Class DeploymentDate
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef DEPLOYMENTDATE_H
#define DEPLOYMENTDATE_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/DateTime.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Dates for deployment events of an asset.  May have multiple deployment type
		 * dates for this device and a compound type allows a query to return multiple
		 * dates.
		 */
		class DeploymentDate : public BaseClass
		{

		public:
			DeploymentDate();
			virtual ~DeploymentDate();
			/**
			 * Date and time asset most recently put in service.
			 */
			IEC61970::Base::Domain::DateTime inServiceDate;
			/**
			 * Date and time asset most recently installed.
			 */
			IEC61970::Base::Domain::DateTime installedDate;
			/**
			 * Date and time of asset deployment transition to not yet installed.
			 */
			IEC61970::Base::Domain::DateTime notYetInstalledDate;
			/**
			 * Date and time asset most recently taken out of service.
			 */
			IEC61970::Base::Domain::DateTime outOfServiceDate;
			/**
			 * Date and time asset most recently removed.
			 */
			IEC61970::Base::Domain::DateTime removedDate;

		};

	}

}
#endif // DEPLOYMENTDATE_H
