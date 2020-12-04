///////////////////////////////////////////////////////////
//  RaiseLowerCommand.h
//  Implementation of the Class RaiseLowerCommand
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef RAISELOWERCOMMAND_H
#define RAISELOWERCOMMAND_H

#include "IEC61970/Base/Meas/AnalogControl.h"
#include "IEC61970/Base/Meas/ValueAliasSet.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * An analog control that increase or decrease a set point value with pulses.
			 * Unless otherwise specified, one pulse moves the set point by one. 
			 */
			class RaiseLowerCommand : public IEC61970::Base::Meas::AnalogControl
			{

			public:
				RaiseLowerCommand();
				virtual ~RaiseLowerCommand();
				/**
				 * The ValueAliasSet used for translation of a Control value to a name.
				 */
				IEC61970::Base::Meas::ValueAliasSet *ValueAliasSet;

			};

		}

	}

}
#endif // RAISELOWERCOMMAND_H
