///////////////////////////////////////////////////////////
//  SubGeographicalRegion.h
//  Implementation of the Class SubGeographicalRegion
///////////////////////////////////////////////////////////

#ifndef SUBGEOGRAPHICALREGION_H
#define SUBGEOGRAPHICALREGION_H

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
#endif // SUBGEOGRAPHICALREGION_H
