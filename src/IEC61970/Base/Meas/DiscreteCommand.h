///////////////////////////////////////////////////////////
//  DiscreteCommand.h
//  Implementation of the Class DiscreteCommand
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef DISCRETECOMMAND_H
#define DISCRETECOMMAND_H

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
#endif // DISCRETECOMMAND_H
