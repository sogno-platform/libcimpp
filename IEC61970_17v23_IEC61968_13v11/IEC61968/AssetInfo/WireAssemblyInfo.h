///////////////////////////////////////////////////////////
//  WireAssemblyInfo.h
//  Implementation of the Class WireAssemblyInfo
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef WIREASSEMBLYINFO_H
#define WIREASSEMBLYINFO_H

#include <list>

#include "IEC61970/Base/Wires/PerLengthLineParameter.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Describes the construction of a multi-conductor wire
		 */
		class WireAssemblyInfo : public IEC61968::Assets::AssetInfo
		{

		public:
			WireAssemblyInfo();
			virtual ~WireAssemblyInfo();
			std::list<IEC61970::Base::Wires::PerLengthLineParameter*> PerLengthLineParameter;

		};

	}

}
#endif // WIREASSEMBLYINFO_H
