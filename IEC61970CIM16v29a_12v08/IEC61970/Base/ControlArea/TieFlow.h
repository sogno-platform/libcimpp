///////////////////////////////////////////////////////////
//  TieFlow.h
//  Implementation of the Class TieFlow
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef TIEFLOW_H
#define TIEFLOW_H

#include "BaseClass.h"
#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/ControlArea/AltTieMeas.h"
#include "IEC61970/Base/Core/Terminal.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ControlArea
		{
			/**
			 * A flow specification in terms of location and direction for a control area.
			 */
			class TieFlow : public BaseClass
			{

			public:
				TieFlow();
				virtual ~TieFlow();
				/**
				 * True if the flow into the terminal (load convention) is also flow into the
				 * control area.  For example, this attribute should be true if using the tie line
				 * terminal further away from the control area. For example to represent a tie to
				 * a shunt component (like a load or generator) in another area, this is the near
				 * end of a branch and this attribute would be specified as false.
				 */
				IEC61970::Base::Domain::Boolean positiveFlowIn;
				/**
				 * The primary and alternate tie flow measurements associated with the tie flow.
				 */
				std::list<IEC61970::Base::ControlArea::AltTieMeas*> AltTieMeas;
				/**
				 * The terminal to which this tie flow belongs.
				 */
				IEC61970::Base::Core::Terminal *Terminal;

			};

		}

	}

}
#endif // TIEFLOW_H
