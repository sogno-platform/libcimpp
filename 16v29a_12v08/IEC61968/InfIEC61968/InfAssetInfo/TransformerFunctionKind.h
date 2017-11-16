///////////////////////////////////////////////////////////
//  TransformerFunctionKind.h
//  Implementation of the Class TransformerFunctionKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TRANSFORMERFUNCTIONKIND_H
#define TRANSFORMERFUNCTIONKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Function of a transformer.
			 */
			enum class TransformerFunctionKind
			{
				 _undef = -1, 	powerTransformer,
				voltageRegulator,
				autotransformer,
				secondaryTransformer,
				other
			};

		}

	}

}
#endif // TRANSFORMERFUNCTIONKIND_H
