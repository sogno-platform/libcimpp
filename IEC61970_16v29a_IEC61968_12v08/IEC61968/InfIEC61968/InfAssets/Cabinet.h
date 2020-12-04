///////////////////////////////////////////////////////////
//  Cabinet.h
//  Implementation of the Class Cabinet
///////////////////////////////////////////////////////////

#ifndef CABINET_H
#define CABINET_H

#include "IEC61968/Assets/AssetContainer.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Enclosure that offers protection to the equipment it contains and/or safety to
			 * people/animals outside it.
			 */
			class Cabinet : public IEC61968::Assets::AssetContainer
			{

			public:
				Cabinet();
				virtual ~Cabinet();

			};

		}

	}

}
#endif // CABINET_H
