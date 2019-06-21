///////////////////////////////////////////////////////////
//  ReliabilityInfo.h
//  Implementation of the Class ReliabilityInfo
///////////////////////////////////////////////////////////

#ifndef RELIABILITYINFO_H
#define RELIABILITYINFO_H

#include <list>

#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Domain/Hours.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfAssets/Specification.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Information regarding the experienced and expected reliability of a specific
			 * asset, type of asset, or asset model.
			 */
			class ReliabilityInfo : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				ReliabilityInfo();
				virtual ~ReliabilityInfo();
				/**
				 * Momentary failure rate (temporary failures/kft-year).
				 */
				IEC61970::Base::Domain::PerCent momFailureRate;
				/**
				 * Mean time to repair (MTTR - hours).
				 */
				IEC61970::Base::Domain::Hours mTTR;
				IEC61968::InfIEC61968::InfAssets::Specification *Specification;
				std::list<IEC61968::Assets::Asset*> Assets;

			};

		}

	}

}
#endif // RELIABILITYINFO_H
