///////////////////////////////////////////////////////////
//  WindingConnection.h
//  Implementation of the Class WindingConnection
//  Created on:      28-Jan-2016 12:47:53
///////////////////////////////////////////////////////////

#if !defined(EA_71A722CC_B0A0_4214_96E6_96C0BAEA27E0__INCLUDED_)
#define EA_71A722CC_B0A0_4214_96E6_96C0BAEA27E0__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Winding connection type.
			 */
			enum class WindingConnection
			{
				/**
				 * Delta
				 */
				D,
				/**
				 * Wye
				 */
				Y,
				/**
				 * ZigZag
				 */
				Z,
				/**
				 * Wye, with neutral brought out for grounding.
				 */
				Yn,
				/**
				 * ZigZag, with neutral brought out for grounding.
				 */
				Zn,
				/**
				 * Autotransformer common winding
				 */
				A,
				/**
				 * Independent winding, for single-phase connections
				 */
				I
			};

		}

	}

}
#endif // !defined(EA_71A722CC_B0A0_4214_96E6_96C0BAEA27E0__INCLUDED_)
