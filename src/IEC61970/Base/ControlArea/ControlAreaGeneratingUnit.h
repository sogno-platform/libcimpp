///////////////////////////////////////////////////////////
//  ControlAreaGeneratingUnit.h
//  Implementation of the Class ControlAreaGeneratingUnit
//  Created on:      28-Jan-2016 12:43:43
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_F887C389_AA07_473f_8CFF_F5DB82401C73__INCLUDED_)
#define EA_F887C389_AA07_473f_8CFF_F5DB82401C73__INCLUDED_

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
#endif // !defined(EA_F887C389_AA07_473f_8CFF_F5DB82401C73__INCLUDED_)
