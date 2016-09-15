///////////////////////////////////////////////////////////
//  RaiseLowerCommand.h
//  Implementation of the Class RaiseLowerCommand
//  Created on:      28-Jan-2016 12:46:23
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_6B1DE715_A4DB_41cd_A8D1_5E256948A89B__INCLUDED_)
#define EA_6B1DE715_A4DB_41cd_A8D1_5E256948A89B__INCLUDED_

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
#endif // !defined(EA_6B1DE715_A4DB_41cd_A8D1_5E256948A89B__INCLUDED_)
