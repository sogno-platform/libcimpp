///////////////////////////////////////////////////////////
//  ConditionFactorKind.h
//  Implementation of the Class ConditionFactorKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CONDITIONFACTORKIND_H
#define CONDITIONFACTORKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Kind of condition factor.
			 */
			enum class ConditionFactorKind
			{
				labor,
				accountAllocation,
				material,
				travel,
				other
			};

		}

	}

}
#endif // CONDITIONFACTORKIND_H
