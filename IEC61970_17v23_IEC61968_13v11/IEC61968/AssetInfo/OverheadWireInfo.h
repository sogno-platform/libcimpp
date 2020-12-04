///////////////////////////////////////////////////////////
//  OverheadWireInfo.h
//  Implementation of the Class OverheadWireInfo
///////////////////////////////////////////////////////////

#ifndef OVERHEADWIREINFO_H
#define OVERHEADWIREINFO_H

#include "IEC61968/AssetInfo/WireInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Overhead wire data.
		 */
		class OverheadWireInfo : public IEC61968::AssetInfo::WireInfo
		{

		public:
			OverheadWireInfo();
			virtual ~OverheadWireInfo();

		};

	}

}
#endif // OVERHEADWIREINFO_H
