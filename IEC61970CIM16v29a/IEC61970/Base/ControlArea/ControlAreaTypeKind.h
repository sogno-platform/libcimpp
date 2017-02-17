///////////////////////////////////////////////////////////
//  ControlAreaTypeKind.h
//  Implementation of the Class ControlAreaTypeKind
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef CONTROLAREATYPEKIND_H
#define CONTROLAREATYPEKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace ControlArea
		{
			/**
			 * The type of control area.
			 */
			enum class ControlAreaTypeKind
			{
				/**
				 * Used for automatic generation control.
				 */
				AGC,
				/**
				 * Used for load forecast.
				 */
				Forecast,
				/**
				 * Used for interchange specification or control.
				 */
				Interchange
			};

		}

	}

}
#endif // CONTROLAREATYPEKIND_H
