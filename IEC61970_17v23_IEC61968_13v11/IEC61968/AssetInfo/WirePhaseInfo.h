///////////////////////////////////////////////////////////
//  WirePhaseInfo.h
//  Implementation of the Class WirePhaseInfo
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef WIREPHASEINFO_H
#define WIREPHASEINFO_H

#include "BaseClass.h"
#include "IEC61970/Base/Wires/SinglePhaseKind.h"
#include "IEC61968/AssetInfo/WireAssemblyInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		class WirePhaseInfo : public BaseClass
		{

		public:
			WirePhaseInfo();
			virtual ~WirePhaseInfo();
			IEC61970::Base::Wires::SinglePhaseKind phaseInfo = IEC61970::Base::Wires::SinglePhaseKind::_undef;
			IEC61968::AssetInfo::WireAssemblyInfo *WireAssemblyInfo;

		};

	}

}
#endif // WIREPHASEINFO_H
