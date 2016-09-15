///////////////////////////////////////////////////////////
//  DiscreteCommand.h
//  Implementation of the Class DiscreteCommand
//  Created on:      28-Jan-2016 12:44:09
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_65BAC169_6177_4887_A48B_1512AE05064C__INCLUDED_)
#define EA_65BAC169_6177_4887_A48B_1512AE05064C__INCLUDED_

#include "IEC61970/Base/Meas/Command.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			class DiscreteCommand : public IEC61970::Base::Meas::Command
			{

			public:
				DiscreteCommand();
				virtual ~DiscreteCommand();

			};

		}

	}

}
#endif // !defined(EA_65BAC169_6177_4887_A48B_1512AE05064C__INCLUDED_)
