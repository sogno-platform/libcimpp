///////////////////////////////////////////////////////////
//  InterrupterUnit.h
//  Implementation of the Class InterrupterUnit
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef INTERRUPTERUNIT_H
#define INTERRUPTERUNIT_H

#include <list>

#include "IEC61968/Assets/Bushing.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Breaker interrupter.
		 * Some interrupters have one fixed and one moving contact, some have 2 fixed
		 * contacts, some 2 moving contacts. An interrupter will have relationships with 2
		 * bushings and those relationships may be any combination of the FixedContact and
		 * MovingContact associations.
		 */
		class InterrupterUnit : public IEC61968::Assets::Asset
		{

		public:
			InterrupterUnit();
			virtual ~InterrupterUnit();
			/**
			 * Bushing(s) to which the fixed contact(s) of this interrupter is(are) attached.
			 * Some interrupters have one fixed and one moving contact, some have 2 fixed
			 * contacts, some 2 moving contacts. An interrupter will have relationships with 2
			 * bushings and those relationships may be any combination of the FixedContact and
			 * MovingContact associations.
			 */
			std::list<IEC61968::Assets::Bushing*> Bushing;

		};

	}

}
#endif // INTERRUPTERUNIT_H
