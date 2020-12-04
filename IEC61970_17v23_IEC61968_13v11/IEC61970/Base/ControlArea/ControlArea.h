///////////////////////////////////////////////////////////
//  ControlArea.h
//  Implementation of the Class ControlArea
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef CONTROLAREA_H
#define CONTROLAREA_H

#include <list>

#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/ControlArea/ControlAreaTypeKind.h"
#include "IEC61970/Base/ControlArea/ControlAreaGeneratingUnit.h"
#include "IEC61970/Base/ControlArea/TieFlow.h"
#include "IEC61970/Base/LoadModel/EnergyArea.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ControlArea
		{
			/**
			 * A control area is a grouping of generating units and/or loads and a cutset of
			 * tie lines (as terminals) which may be used for a variety of purposes including
			 * automatic generation control, powerflow solution area interchange control
			 * specification, and input to load forecasting.   Note that any number of
			 * overlapping control area specifications can be superimposed on the physical
			 * model.
			 */
			class ControlArea : public IEC61970::Base::Core::PowerSystemResource
			{

			public:
				ControlArea();
				virtual ~ControlArea();
				/**
				 * The specified positive net interchange into the control area, i.e. positive
				 * sign means flow in to the area.
				 */
				IEC61970::Base::Domain::ActivePower netInterchange;
				/**
				 * Active power net interchange tolerance
				 */
				IEC61970::Base::Domain::ActivePower pTolerance;
				/**
				 * The primary type of control area definition used to determine if this is used
				 * for automatic generation control, for planning interchange control, or other
				 * purposes.   A control area specified with primary type of automatic generation
				 * control could still be forecast and used as an interchange area in power flow
				 * analysis.
				 */
				IEC61970::Base::ControlArea::ControlAreaTypeKind type = IEC61970::Base::ControlArea::ControlAreaTypeKind::_undef;
				/**
				 * The generating unit specificaitons for the control area.
				 */
				std::list<IEC61970::Base::ControlArea::ControlAreaGeneratingUnit*> ControlAreaGeneratingUnit;
				/**
				 * The tie flows associated with the control area.
				 */
				std::list<IEC61970::Base::ControlArea::TieFlow*> TieFlow;
				/**
				 * The energy area that is forecast from this control area specification.
				 */
				IEC61970::Base::LoadModel::EnergyArea *EnergyArea;

			};

		}

	}

}
#endif // CONTROLAREA_H
