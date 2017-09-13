///////////////////////////////////////////////////////////
//  ComMedia.h
//  Implementation of the Class ComMedia
///////////////////////////////////////////////////////////

#ifndef COMMEDIA_H
#define COMMEDIA_H

#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Communication media such as fibre optic cable, power-line, telephone, etc.
		 */
		class ComMedia : public IEC61968::Assets::Asset
		{

		public:
			ComMedia();
			virtual ~ComMedia();

		};

	}

}
#endif // COMMEDIA_H
