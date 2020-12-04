///////////////////////////////////////////////////////////
//  ProtectionEquipmentInfo.h
//  Implementation of the Class ProtectionEquipmentInfo
///////////////////////////////////////////////////////////

#ifndef PROTECTIONEQUIPMENTINFO_H
#define PROTECTIONEQUIPMENTINFO_H

#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Properties of protection equipment asset.
			 */
			class ProtectionEquipmentInfo : public IEC61968::Assets::AssetInfo
			{

			public:
				ProtectionEquipmentInfo();
				virtual ~ProtectionEquipmentInfo();
				/**
				 * Actual ground trip for this type of relay, if applicable.
				 */
				IEC61970::Base::Domain::CurrentFlow groundTrip;
				/**
				 * Actual phase trip for this type of relay, if applicable.
				 */
				IEC61970::Base::Domain::CurrentFlow phaseTrip;

			};

		}

	}

}
#endif // PROTECTIONEQUIPMENTINFO_H
