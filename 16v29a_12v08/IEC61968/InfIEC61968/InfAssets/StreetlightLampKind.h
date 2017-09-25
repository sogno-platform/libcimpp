///////////////////////////////////////////////////////////
//  StreetlightLampKind.h
//  Implementation of the Class StreetlightLampKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef STREETLIGHTLAMPKIND_H
#define STREETLIGHTLAMPKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Kind of lamp for the streetlight.
			 */
			enum class StreetlightLampKind
			{
				highPressureSodium,
				mercuryVapor,
				metalHalide,
				other
			};

		}

	}

}
#endif // STREETLIGHTLAMPKIND_H
