///////////////////////////////////////////////////////////
//  TurbineType.h
//  Implementation of the Class TurbineType
///////////////////////////////////////////////////////////

#ifndef TURBINETYPE_H
#define TURBINETYPE_H

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace GenerationTrainingSimulation
			{
				/**
				 * Type of turbine.
				 */
				enum class TurbineType
				{
					/**
					 * Francis.
					 */
					 _undef = -1, 	francis,
					/**
					 * Pelton.
					 */
					pelton,
					/**
					 * Kaplan.
					 */
					kaplan
				};

			}

		}

	}

}
#endif // TURBINETYPE_H
