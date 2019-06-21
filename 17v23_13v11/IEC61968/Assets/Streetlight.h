///////////////////////////////////////////////////////////
//  Streetlight.h
//  Implementation of the Class Streetlight
///////////////////////////////////////////////////////////

#ifndef STREETLIGHT_H
#define STREETLIGHT_H

#include "IEC61970/Base/Domain/Length.h"
#include "IEC61968/InfIEC61968/InfAssets/StreetlightLampKind.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Streetlight asset.
		 */
		class Streetlight : public IEC61968::Assets::Asset
		{

		public:
			Streetlight();
			virtual ~Streetlight();
			/**
			 * Length of arm. Note that a new light may be placed on an existing arm.
			 */
			IEC61970::Base::Domain::Length armLength;
			/**
			 * Lamp kind.
			 */
			IEC61968::InfIEC61968::InfAssets::StreetlightLampKind lampKind = IEC61968::InfIEC61968::InfAssets::StreetlightLampKind::_undef;
			/**
			 * Power rating of light.
			 */
			IEC61970::Base::Domain::ActivePower lightRating;

		};

	}

}
#endif // STREETLIGHT_H
