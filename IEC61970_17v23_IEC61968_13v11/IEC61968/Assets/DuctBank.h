///////////////////////////////////////////////////////////
//  DuctBank.h
//  Implementation of the Class DuctBank
///////////////////////////////////////////////////////////

#ifndef DUCTBANK_H
#define DUCTBANK_H

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Assets/AssetContainer.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * A duct contains individual wires in the layout as specified with associated
		 * wire spacing instances; number of them gives the number of conductors in this
		 * duct.
		 */
		class DuctBank : public IEC61968::Assets::AssetContainer
		{

		public:
			DuctBank();
			virtual ~DuctBank();
			/**
			 * Number of circuits in duct bank. Refer to associations between a duct
			 * (ConductorAsset) and an ACLineSegment to understand which circuits are in which
			 * ducts.
			 */
			IEC61970::Base::Domain::Integer circuitCount;

		};

	}

}
#endif // DUCTBANK_H
