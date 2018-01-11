///////////////////////////////////////////////////////////
//  CableShieldMaterialKind.h
//  Implementation of the Class CableShieldMaterialKind
//  Original author: Tom
///////////////////////////////////////////////////////////

#ifndef CABLESHIELDMATERIALKIND_H
#define CABLESHIELDMATERIALKIND_H

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Kind of cable shield material.
		 */
		enum class CableShieldMaterialKind
		{
			/**
			 * Lead cable shield.
			 */
			 _undef = -1, 	lead,
			/**
			 * Copper cable shield.
			 */
			copper,
			/**
			 * Steel cable shield.
			 */
			steel,
			/**
			 * Aluminum cable shield.
			 */
			aluminum,
			/**
			 * Other kind of cable shield material.
			 */
			other
		};

	}

}
#endif // CABLESHIELDMATERIALKIND_H
