///////////////////////////////////////////////////////////
//  ControlAreaGeneratingUnit.h
//  Implementation of the Class ControlAreaGeneratingUnit
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef CONTROLAREAGENERATINGUNIT_H
#define CONTROLAREAGENERATINGUNIT_H

#include <list>

#include "IEC61970/Base/ControlArea/AltGeneratingUnitMeas.h"
#include "IEC61970/Base/Generation/Production/GeneratingUnit.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ControlArea
		{
			/**
			 * A control area generating unit. This class is needed so that alternate control
			 * area definitions may include the same generating unit.   Note only one instance
			 * within a control area should reference a specific generating unit.
			 */
			class ControlAreaGeneratingUnit : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				ControlAreaGeneratingUnit();
				virtual ~ControlAreaGeneratingUnit();
				/**
				 * The link to prioritized measurements for this GeneratingUnit.
				 */
				std::list<IEC61970::Base::ControlArea::AltGeneratingUnitMeas*> AltGeneratingUnitMeas;
				/**
				 * The generating unit specified for this control area.  Note that a control area
				 * should include a GeneratingUnit only once.
				 */
				IEC61970::Base::Generation::Production::GeneratingUnit *GeneratingUnit;

			};

		}

	}

}
#endif // CONTROLAREAGENERATINGUNIT_H
