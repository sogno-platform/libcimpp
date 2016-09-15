///////////////////////////////////////////////////////////
//  EnergyArea.h
//  Implementation of the Class EnergyArea
//  Created on:      28-Jan-2016 12:44:13
///////////////////////////////////////////////////////////

#if !defined(EA_3A35ABCA_88A1_4cff_B3C7_02927DC85915__INCLUDED_)
#define EA_3A35ABCA_88A1_4cff_B3C7_02927DC85915__INCLUDED_

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * Describes an area having energy production or consumption.  Specializations are
			 * intended to support the load allocation function as typically required in
			 * energy management systems or planning studies to allocate hypothesized load
			 * levels to individual load points for power flow analysis.  Often the energy
			 * area can be linked to both measured and forecast load levels.
			 */
			class EnergyArea : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				EnergyArea();
				virtual ~EnergyArea();

			};

		}

	}

}
#endif // !defined(EA_3A35ABCA_88A1_4cff_B3C7_02927DC85915__INCLUDED_)
