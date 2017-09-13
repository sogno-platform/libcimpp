///////////////////////////////////////////////////////////
//  Maintainer.h
//  Implementation of the Class Maintainer
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef MAINTAINER_H
#define MAINTAINER_H

#include "IEC61968/Assets/AssetOrganisationRole.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Organisation that maintains assets.
		 */
		class Maintainer : public IEC61968::Assets::AssetOrganisationRole
		{

		public:
			Maintainer();
			virtual ~Maintainer();

		};

	}

}
#endif // MAINTAINER_H
