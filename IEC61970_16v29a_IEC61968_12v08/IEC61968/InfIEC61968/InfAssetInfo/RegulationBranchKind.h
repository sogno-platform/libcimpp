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
				 _undef = -1, 	line,
				transformer,
				//warning Enumerator "switch" is renamed to "routing_selector", this does not commply the CIM standard!
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
