///////////////////////////////////////////////////////////
//  WindingConnection.h
//  Implementation of the Class WindingConnection
///////////////////////////////////////////////////////////

#ifndef WINDINGCONNECTION_H
#define WINDINGCONNECTION_H

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
				 _undef = -1, 	D,
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
#endif // WINDINGCONNECTION_H
