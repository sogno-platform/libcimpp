///////////////////////////////////////////////////////////
//  DCConverterOperatingModeKind.h
//  Implementation of the Class DCConverterOperatingModeKind
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef DCCONVERTEROPERATINGMODEKIND_H
#define DCCONVERTEROPERATINGMODEKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * The operating mode of an HVDC bipole.
			 */
			enum class DCConverterOperatingModeKind
			{
				/**
				 * Bipolar operation.
				 */
				bipolar,
				/**
				 * Monopolar operation with metallic return
				 */
				monopolarMetallicReturn,
				/**
				 * Monopolar operation with ground return
				 */
				monopolarGroundReturn
			};

		}

	}

}
#endif // DCCONVERTEROPERATINGMODEKIND_H
