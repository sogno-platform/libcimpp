///////////////////////////////////////////////////////////
//  InterrupterUnitInfo.h
//  Implementation of the Class InterrupterUnitInfo
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef INTERRUPTERUNITINFO_H
#define INTERRUPTERUNITINFO_H

#include "IEC61968/AssetInfo/InterruptingMediumKind.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		class InterrupterUnitInfo : public IEC61968::Assets::AssetInfo
		{

		public:
			InterrupterUnitInfo();
			virtual ~InterrupterUnitInfo();
			/**
			 * Interrupting medium.
			 */
			IEC61968::AssetInfo::InterruptingMediumKind interruptingMedium = IEC61968::AssetInfo::InterruptingMediumKind::_undef;

		};

	}

}
#endif // INTERRUPTERUNITINFO_H
