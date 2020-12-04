///////////////////////////////////////////////////////////
//  Equipment.h
//  Implementation of the Class Equipment
///////////////////////////////////////////////////////////

#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * The parts of a power system that are physical devices, electronic or mechanical.
			 */
			class Equipment : public IEC61970::Base::Core::PowerSystemResource
			{

			public:
				Equipment();
				virtual ~Equipment();
				/**
				 * The single instance of equipment represents multiple pieces of equipment that
				 * have been modeled together as an aggregate.  Examples would be power
				 * transformers or synchronous machines operating in parallel modeled as a single
				 * aggregate power transformer or aggregate synchronous machine.  This is not to
				 * be used to indicate equipment that is part of a group of interdependent
				 * equipment produced by a network production program.  
				 */
				IEC61970::Base::Domain::Boolean aggregate;
				/**
				 * If true, the equipment is in service.
				 */
				IEC61970::Base::Domain::Boolean inService;
				/**
				 * The equipment is enabled to participate in network analysis.  If unspecified,
				 * the value is assumed to be true.
				 */
				IEC61970::Base::Domain::Boolean networkAnalysisEnabled;
				/**
				 * If true, the equipment is normally in service.
				 */
				IEC61970::Base::Domain::Boolean normallyInService;
				/**
				 * Limit dependencymodels organized under this equipment as a means for organizing
				 * the model in a tree view.
				 */

			};

		}

	}

}
#endif // EQUIPMENT_H
