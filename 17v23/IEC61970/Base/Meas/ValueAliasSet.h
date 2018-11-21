///////////////////////////////////////////////////////////
//  ValueAliasSet.h
//  Implementation of the Class ValueAliasSet
///////////////////////////////////////////////////////////

#ifndef VALUEALIASSET_H
#define VALUEALIASSET_H

#include <list>

#include "IEC61970/Base/Meas/ValueToAlias.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			// Forward Declaration
			class Discrete;
			/**
			 * Describes the translation of a set of values into a name and is intendend to
			 * facilitate cusom translations. Each ValueAliasSet has a name, description etc.
			 * A specific Measurement may represent a discrete state like Open, Closed,
			 * Intermediate etc. This requires a translation from the MeasurementValue.value
			 * number to a string, e.g. 0->"Invalid", 1->"Open", 2->"Closed", 3-
			 * >"Intermediate". Each ValueToAlias member in ValueAliasSet.Value describe a
			 * mapping for one particular value to a name.
			 */
			class ValueAliasSet : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				ValueAliasSet();
				virtual ~ValueAliasSet();
				/**
				 * The ValueToAlias mappings included in the set.
				 */
				std::list<IEC61970::Base::Meas::ValueToAlias*> Values;
				/**
				 * The Measurements using the set for translation.
				 */
				std::list<IEC61970::Base::Meas::Discrete*> Discretes;

			};

		}

	}

}
#endif // VALUEALIASSET_H
