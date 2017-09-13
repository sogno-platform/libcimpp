///////////////////////////////////////////////////////////
//  BushingInsulationPfTestKind.h
//  Implementation of the Class BushingInsulationPfTestKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef BUSHINGINSULATIONPFTESTKIND_H
#define BUSHINGINSULATIONPFTESTKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Kind of PF test for bushing insulation.
			 */
			enum class BushingInsulationPfTestKind
			{
				/**
				 * Power factor tap-to-ground.
				 */
				c1,
				/**
				 * Power factor tap-to-conductor.
				 */
				c2
			};

		}

	}

}
#endif // BUSHINGINSULATIONPFTESTKIND_H
