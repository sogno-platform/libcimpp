///////////////////////////////////////////////////////////
//  CUWorkEquipmentItem.h
//  Implementation of the Class CUWorkEquipmentItem
///////////////////////////////////////////////////////////

#ifndef CUWORKEQUIPMENTITEM_H
#define CUWORKEQUIPMENTITEM_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/CostRate.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfWork/CompatibleUnit.h"
#include "IEC61968/Work/WorkAsset.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Compatible unit for various types of WorkEquipmentAssets, including vehicles.
			 */
			class CUWorkEquipmentItem : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				CUWorkEquipmentItem();
				virtual ~CUWorkEquipmentItem();
				/**
				 * The equipment type code.
				 */
				IEC61970::Base::Domain::String equipCode;
				/**
				 * Standard usage rate for the type of vehicle.
				 */
				IEC61970::Base::Domain::CostRate rate;
				IEC61968::Common::Status status;
				std::list<IEC61968::InfIEC61968::InfWork::CompatibleUnit*> CompatibleUnits;
				IEC61968::Work::WorkAsset *TypeAsset;

			};

		}

	}

}
#endif // CUWORKEQUIPMENTITEM_H
