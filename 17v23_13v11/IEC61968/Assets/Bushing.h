///////////////////////////////////////////////////////////
//  Bushing.h
//  Implementation of the Class Bushing
///////////////////////////////////////////////////////////

#ifndef BUSHING_H
#define BUSHING_H

#include <list>

#include "IEC61968/InfIEC61968/InfAssets/BushingInsulationPF.h"
#include "IEC61970/Base/Core/Terminal.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Bushing asset.
		 */
		class Bushing : public IEC61968::Assets::Asset
		{

		public:
			Bushing();
			virtual ~Bushing();
			std::list<IEC61968::InfIEC61968::InfAssets::BushingInsulationPF*> BushingInsulationPFs;
			IEC61970::Base::Core::Terminal *Terminal;

		};

	}

}
#endif // BUSHING_H
