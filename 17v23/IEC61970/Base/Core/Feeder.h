///////////////////////////////////////////////////////////
//  Feeder.h
//  Implementation of the Class Feeder
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef FEEDER_H
#define FEEDER_H

#include <list>

#include "IEC61970/Base/Core/EquipmentContainer.h"
#include "IEC61970/Base/Core/Terminal.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			// Forward Declaration
			class Substation;
			/**
			 * A collection of equipment for organizational purposes, used for grouping
			 * distribution resources.
			 * The organization a feeder does not necessarily reflect connectivity or current
			 * operation state.
			 */
			class Feeder : public IEC61970::Base::Core::EquipmentContainer
			{

			public:
				Feeder();
				virtual ~Feeder();
				/**
				 * The secondary substations that are normally energized from the feeder.  Used
				 * for naming purposes.   Should be consistent with the other associations for
				 * energizing terminal specification and the feeder energization specification.
				 */
				std::list<IEC61970::Base::Core::Substation*> NamingSecondarySubstation;
				/**
				 * The normal head terminal or terminals of the feeder.
				 */
				std::list<IEC61970::Base::Core::Terminal*> NormalHeadTerminal;
				/**
				 * The substations that are normally energized by the feeder.
				 */
				std::list<IEC61970::Base::Core::Substation*> NormalEnergizedSubstation;

			};

		}

	}

}
#endif // FEEDER_H
