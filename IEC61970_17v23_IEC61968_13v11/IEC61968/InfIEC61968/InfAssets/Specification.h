///////////////////////////////////////////////////////////
//  Specification.h
//  Implementation of the Class Specification
///////////////////////////////////////////////////////////

#ifndef SPECIFICATION_H
#define SPECIFICATION_H

#include <list>

#include "IEC61968/InfIEC61968/InfAssets/AssetPropertyCurve.h"
#include "IEC61968/Assets/Medium.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Specification can be used for various purposes relative to an asset, a logical
			 * device (PowerSystemResource), location, etc. Examples include documents
			 * supplied by manufacturers such as asset installation instructions, asset
			 * maintenance instructions, etc.
			 */
			class Specification : public IEC61968::Common::Document
			{

			public:
				Specification();
				virtual ~Specification();
				std::list<IEC61968::InfIEC61968::InfAssets::AssetPropertyCurve*> AssetPropertyCurves;
				std::list<IEC61968::Assets::Medium*> Mediums;

			};

		}

	}

}
#endif // SPECIFICATION_H
