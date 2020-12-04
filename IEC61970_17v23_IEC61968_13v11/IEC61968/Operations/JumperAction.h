///////////////////////////////////////////////////////////
//  JumperAction.h
//  Implementation of the Class JumperAction
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef JUMPERACTION_H
#define JUMPERACTION_H

#include <list>

#include "IEC61968/Operations/TempEquipActionKind.h"
#include "IEC61970/Base/Wires/Jumper.h"
#include "IEC61970/Base/Wires/ACLineSegment.h"
#include "IEC61968/Operations/SwitchingAction.h"
#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Action on jumper as a switching step.
		 */
		class JumperAction : public IEC61968::Operations::SwitchingAction
		{

		public:
			JumperAction();
			virtual ~JumperAction();
			/**
			 * Switching action to perform.
			 */
			IEC61968::Operations::TempEquipActionKind kind = IEC61968::Operations::TempEquipActionKind::_undef;
			/**
			 * Jumper on which this action is taken.
			 */
			IEC61970::Base::Wires::Jumper *Jumper;
			/**
			 * The line segment that this jumper action will affect. This is the only way to
			 * access relationship to clamp in case the jumper needs to connect along the line
			 * segment.
			 */
			std::list<IEC61970::Base::Wires::ACLineSegment*> AlongACLineSegments;
			/**
			 * The conducting equipment that this jumper action will affect. In case of
			 * placing a jumper anywhere along a line segment, you must use the clamp (to get
			 * the distance from one terminal), so use the explicit relation with line segment.
			 * In all other cases (including placing the jumper at a line segment terminal),
			 * reference to one or more conducting equipment is sufficient.
			 */
			std::list<IEC61970::Base::Core::ConductingEquipment*> JumpedEquipments;

		};

	}

}
#endif // JUMPERACTION_H
