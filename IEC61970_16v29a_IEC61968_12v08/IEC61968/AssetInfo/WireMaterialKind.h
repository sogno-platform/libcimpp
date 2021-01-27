///////////////////////////////////////////////////////////
//  WireMaterialKind.h
//  Implementation of the Class WireMaterialKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WIREMATERIALKIND_H
#define WIREMATERIALKIND_H

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Kind of wire material.
		 */
		enum class WireMaterialKind
		{
			/**
			 * Copper wire.
			 */
			copper,
			/**
			 * Steel wire.
			 */
			steel,
			/**
			 * Aluminum wire.
			 */
			aluminum,
			/**
			 * Aluminum-steel wire.
			 */
			 _undef = -1, 	aluminumSteel,
			/**
			 * Aluminum conductor steel reinforced.
			 */
			acsr,
			/**
			 * Aluminum-alloy wire.
			 */
			aluminumAlloy,
			/**
			 * Aluminum-alloy-steel wire.
			 */
			aluminumAlloySteel,
			/**
			 * Aluminum-alloy conductor steel reinforced.
			 */
			aaac,
			/**
			 * Other wire material.
			 */
			other
		};

	}

}
#endif // WIREMATERIALKIND_H
