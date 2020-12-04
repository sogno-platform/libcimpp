///////////////////////////////////////////////////////////
//  OperatingMechanism.h
//  Implementation of the Class OperatingMechanism
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OPERATINGMECHANISM_H
#define OPERATINGMECHANISM_H

#include <list>

#include "IEC61968/Assets/Asset.h"
#include "IEC61968/Assets/InterrupterUnit.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Breaker mechanism.
		 */
		class OperatingMechanism : public IEC61968::Assets::Asset
		{

		public:
			OperatingMechanism();
			virtual ~OperatingMechanism();
			/**
			 * Interrupter controlled by this mechanism.
			 */
			std::list<IEC61968::Assets::InterrupterUnit*> InterrupterUnit;

		};

	}

}
#endif // OPERATINGMECHANISM_H
