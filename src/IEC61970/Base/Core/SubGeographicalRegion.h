///////////////////////////////////////////////////////////
//  SubGeographicalRegion.h
//  Implementation of the Class SubGeographicalRegion
//  Created on:      28-Jan-2016 12:46:52
///////////////////////////////////////////////////////////

#if !defined(EA_2B73F34E_D7DE_4bde_BE81_E68F8F2FB216__INCLUDED_)
#define EA_2B73F34E_D7DE_4bde_BE81_E68F8F2FB216__INCLUDED_

#include <list>

#include "IEC61970/Base/Wires/Line.h"
#include "IEC61970/Base/Core/Substation.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * A subset of a geographical region of a power system network model.
			 */
			class SubGeographicalRegion : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				SubGeographicalRegion();
				virtual ~SubGeographicalRegion();
				/**
				 * The lines within the sub-geographical region.
				 */
				std::list<IEC61970::Base::Wires::Line*> Lines;
				/**
				 * The substations in this sub-geographical region.
				 */
				std::list<IEC61970::Base::Core::Substation*> Substations;

			};

		}

	}

}
#endif // !defined(EA_2B73F34E_D7DE_4bde_BE81_E68F8F2FB216__INCLUDED_)
