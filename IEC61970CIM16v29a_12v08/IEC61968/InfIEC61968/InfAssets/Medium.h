///////////////////////////////////////////////////////////
//  Medium.h
//  Implementation of the Class Medium
///////////////////////////////////////////////////////////

#ifndef MEDIUM_H
#define MEDIUM_H

#include <list>

#include "IEC61968/InfIEC61968/InfAssets/MediumKind.h"
#include "IEC61970/Base/Domain/Volume.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"


namespace IEC61968
{	
	namespace Assets{
		class Asset;
	}
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * A substance that either (1) provides the means of transmission of a force or
			 * effect, such as hydraulic fluid, or (2) is used for a surrounding or enveloping
			 * substance, such as oil in a transformer or circuit breaker.
			 */
			class Medium : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				Medium();
				virtual ~Medium();
				/**
				 * Kind of this medium.
				 */
				IEC61968::InfIEC61968::InfAssets::MediumKind kind;
				/**
				 * The volume of the medium specified for this application. Note that the actual
				 * volume is a type of measurement associated witht the asset.
				 */
				IEC61970::Base::Domain::Volume volumeSpec;
				std::list<IEC61968::Assets::Asset*> Assets;

			};

		}

	}

}
#endif // MEDIUM_H
