///////////////////////////////////////////////////////////
//  WireInsulationKind.h
//  Implementation of the Class WireInsulationKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WIREINSULATIONKIND_H
#define WIREINSULATIONKIND_H

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Kind of wire insulation.
		 */
		enum class WireInsulationKind
		{
			/**
			 * Asbestos and varnished cambric wire insulation.
			 */
			asbestosAndVarnishedCambric,
			/**
			 * Butyl wire insulation.
			 */
			butyl,
			/**
			 * Ethylene propylene rubber wire insulation.
			 */
			ethylenePropyleneRubber,
			/**
			 * High nolecular weight polyethylene wire insulation.
			 */
			highMolecularWeightPolyethylene,
			/**
			 * Tree resistant high molecular weight polyethylene wire insulation.
			 */
			treeResistantHighMolecularWeightPolyethylene,
			/**
			 * Low capacitance rubber wire insulation.
			 */
			lowCapacitanceRubber,
			/**
			 * Oil paper wire insulation.
			 */
			oilPaper,
			/**
			 * Ozone resistant rubber wire insulation.
			 */
			ozoneResistantRubber,
			/**
			 * Belted pilc wire insulation.
			 */
			beltedPilc,
			/**
			 * Unbelted pilc wire insulation.
			 */
			unbeltedPilc,
			/**
			 * Rubber wire insulation.
			 */
			rubber,
			/**
			 * Silicon rubber wire insulation.
			 */
			siliconRubber,
			/**
			 * Varnished cambric cloth wire insulation.
			 */
			varnishedCambricCloth,
			/**
			 * Varnished dacron glass wire insulation.
			 */
			varnishedDacronGlass,
			/**
			 * Crosslinked polyethylene wire insulation.
			 */
			crosslinkedPolyethylene,
			/**
			 * Tree retardant crosslinked polyethylene wire insulation.
			 */
			treeRetardantCrosslinkedPolyethylene,
			/**
			 * High pressure fluid filled wire insulation.
			 */
			highPressureFluidFilled,
			/**
			 * Other kind of wire insulation.
			 */
			other
		};

	}

}
#endif // WIREINSULATIONKIND_H
