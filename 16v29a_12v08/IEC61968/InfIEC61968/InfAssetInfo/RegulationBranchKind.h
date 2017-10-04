///////////////////////////////////////////////////////////
//  RegulationBranchKind.h
//  Implementation of the Class RegulationBranchKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef REGULATIONBRANCHKIND_H
#define REGULATIONBRANCHKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Kind of regulation branch for shunt impedance.
			 */
			enum class RegulationBranchKind
			{
				line,
				transformer,
				routing_selector,
				breaker,
				recloser,
				fuse,
				sectionner,
				other
			};

		}

	}

}
#endif // REGULATIONBRANCHKIND_H
