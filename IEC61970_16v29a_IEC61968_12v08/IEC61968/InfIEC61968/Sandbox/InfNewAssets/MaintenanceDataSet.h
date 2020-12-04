///////////////////////////////////////////////////////////
//  MaintenanceDataSet.h
//  Implementation of the Class MaintenanceDataSet
///////////////////////////////////////////////////////////

#ifndef MAINTENANCEDATASET_H
#define MAINTENANCEDATASET_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Assets/ProcedureDataSet.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace Sandbox
		{
			namespace InfNewAssets
			{
				/**
				 * The result of a maintenance activity, a type of Procedure, for a given
				 * attribute of an asset.
				 */
				class MaintenanceDataSet : public IEC61968::Assets::ProcedureDataSet
				{

				public:
					MaintenanceDataSet();
					virtual ~MaintenanceDataSet();
					/**
					 * Condition of asset just following maintenance procedure.
					 */
					IEC61970::Base::Domain::String conditionAfter;
					/**
					 * Description of the condition of the asset just prior to maintenance being
					 * performed.
					 */
					IEC61970::Base::Domain::String conditionBefore;
					/**
					 * Code for the type of maintenance performed.
					 */
					IEC61970::Base::Domain::String maintCode;

				};

			}

		}

	}

}
#endif // MAINTENANCEDATASET_H
