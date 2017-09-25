///////////////////////////////////////////////////////////
//  TransformerConstructionKind.h
//  Implementation of the Class TransformerConstructionKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TRANSFORMERCONSTRUCTIONKIND_H
#define TRANSFORMERCONSTRUCTIONKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Kind of transformer construction.
			 */
			enum class TransformerConstructionKind
			{
				onePhase,
				threePhase,
				aerial,
				overhead,
				dryType,
				network,
				padmountDeadFront,
				padmountFeedThrough,
				padmountLiveFront,
				padmountLoopThrough,
				padmounted,
				subway,
				underground,
				vault,
				vaultThreePhase,
				unknown
			};

		}

	}

}
#endif // TRANSFORMERCONSTRUCTIONKIND_H
