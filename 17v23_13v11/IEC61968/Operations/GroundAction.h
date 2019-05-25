///////////////////////////////////////////////////////////
//  GroundAction.h
//  Implementation of the Class GroundAction
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef GROUNDACTION_H
#define GROUNDACTION_H

#include "IEC61968/Operations/TempEquipActionKind.h"
#include "IEC61970/Base/Core/ConductingEquipment.h"
#include "IEC61970/Base/Wires/Ground.h"
#include "IEC61970/Base/Wires/ACLineSegment.h"
#include "IEC61968/Operations/SwitchingAction.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Action on ground as a switching step.
		 */
		class GroundAction : public IEC61968::Operations::SwitchingAction
		{

		public:
			GroundAction();
			virtual ~GroundAction();
			/**
			 * Switching action to perform.
			 */
			IEC61968::Operations::TempEquipActionKind kind = IEC61968::Operations::TempEquipActionKind::_undef;
			/**
			 * Equipment being grounded with this operation. In case of placing a ground
			 * anywhere along a line segment, you must use the clamp (to get the distance from
			 * one terminal), so use the explicit relation with line segment. In all other
			 * cases (including placing the ground at a line segment terminal), reference to
			 * one or more conducting equipment is sufficient.
			 */
			IEC61970::Base::Core::ConductingEquipment *GroundedEquipment;
			/**
			 * Ground on which this action is taken.
			 */
			IEC61970::Base::Wires::Ground *Ground;
			/**
			 * The line segment that this ground action will affect. This is the only way to
			 * access relationship to clamp in case the ground needs to be placed along the
			 * line segment.
			 */
			IEC61970::Base::Wires::ACLineSegment *AlongACLineSegment;

		};

	}

}
#endif // GROUNDACTION_H
