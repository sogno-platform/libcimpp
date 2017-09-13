///////////////////////////////////////////////////////////
//  ReadingType.h
//  Implementation of the Class ReadingType
///////////////////////////////////////////////////////////

#ifndef READINGTYPE_H
#define READINGTYPE_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Metering/RationalNumber.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Metering/ReadingInterharmonic.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Metering/Channel.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Detailed description for a type of a reading value. Values in attributes allow
		 * for the creation of recommended codes to be used for identifying reading value
		 * types as follows: <macroPeriod>.<aggregate>.<measuringPeriod>.<accumulation>.
		 * <flowDirection>.<commodity>.<measurementKind>.<interharmonic.numerator>.
		 * <interharmonic.denominator>.<argument.numerator>.<argument.denominator>.<tou>.
		 * <cpp>.<consumptionTier>.<phases>.<multiplier>.<unit>.<currency>.
		 */
		class ReadingType : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			ReadingType();
			virtual ~ReadingType();
			/**
			 * Accumulation behaviour of a reading over time, usually 'measuringPeriod', to be
			 * used with individual endpoints (as opposed to 'macroPeriod' and 'aggregate'
			 * that are used to describe aggregations of data from individual endpoints).
			 */
			IEC61970::Base::Domain::String accumulation;
			/**
			 * Salient attribute of the reading data aggregated from individual endpoints.
			 * This is mainly used to define a mathematical operation carried out over
			 * 'macroPeriod', but may also be used to describe an attribute of the data when
			 * the 'macroPeriod' is not defined.
			 */
			IEC61970::Base::Domain::String aggregate;
			/**
			 * Argument used to introduce numbers into the unit of measure description where
			 * they are needed (e.g., 4 where the measure needs an argument such as CEMI(n=4)).
			 * Most arguments used in practice however will be integers (i.e.,
			 * 'denominator'=1).
			 * Value 0 in 'numerator' and 'denominator' means not applicable.
			 */
			IEC61968::Metering::RationalNumber argument;
			/**
			 * Commodity being measured.
			 */
			IEC61970::Base::Domain::String commodity;
			/**
			 * In case of common flat-rate pricing for power, in which all purchases are at a
			 * given rate, 'consumptionTier'=0. Otherwise, the value indicates the consumption
			 * tier, which can be used in conjunction with TOU or CPP pricing.
			 * Consumption tier pricing refers to the method of billing in which a certain
			 * "block" of energy is purchased/sold at one price, after which the next block of
			 * energy is purchased at another price, and so on, all throughout a defined
			 * period. At the start of the defined period, consumption is initially zero, and
			 * any usage is measured against the first consumption tier ('consumptionTier'=1).
			 * If this block of energy is consumed before the end of the period, energy
			 * consumption moves to be reconed against the second consumption tier
			 * ('consumptionTier'=2), and so on. At the end of the defined period, the
			 * consumption accumulator is reset, and usage within the 'consumptionTier'=1
			 * restarts.
			 */
			IEC61970::Base::Domain::Integer consumptionTier;
			/**
			 * Critical peak period (CPP) bucket the reading value is attributed to. Value 0
			 * means not applicable. Even though CPP is usually considered a specialised form
			 * of time of use 'tou', this attribute is defined explicitly for flexibility.
			 */
			IEC61970::Base::Domain::Integer cpp;
			/**
			 * Metering-specific currency.
			 */
			IEC61970::Base::Domain::String currency;
			/**
			 * Flow direction for a reading where the direction of flow of the commodity is
			 * important (for electricity measurements this includes current, energy, power,
			 * and demand).
			 */
			IEC61970::Base::Domain::String flowDirection;
			/**
			 * Indication of a "harmonic" or "interharmonic" basis for the measurement. Value
			 * 0 in 'numerator' and 'denominator' means not applicable.
			 */
			IEC61968::Metering::ReadingInterharmonic interharmonic;
			/**
			 * Time period of interest that reflects how the reading is viewed or captured
			 * over a long period of time.
			 */
			IEC61970::Base::Domain::String macroPeriod;
			/**
			 * Identifies "what" is being measured, as refinement of 'commodity'. When
			 * combined with 'unit', it provides detail to the unit of measure. For example,
			 * 'energy' with a unit of measure of 'kWh' indicates to the user that active
			 * energy is being measured, while with 'kVAh' or 'kVArh', it indicates apparent
			 * energy and reactive energy, respectively. 'power' can be combined in a similar
			 * way with various power units of measure: Distortion power
			 * ('distortionVoltAmperes') with 'kVA' is different from 'power' with 'kVA'.
			 */
			IEC61970::Base::Domain::String measurementKind;
			/**
			 * Time attribute inherent or fundamental to the reading value (as opposed to
			 * 'macroPeriod' that supplies an "adjective" to describe aspects of a time period
			 * with regard to the measurement). It refers to the way the value was originally
			 * measured and not to the frequency at which it is reported or presented. For
			 * example, an hourly interval of consumption data would have value 'hourly' as an
			 * attribute. However in the case of an hourly sampled voltage value, the
			 * meterReadings schema would carry the 'hourly' interval size information.
			 * It is common for meters to report demand in a form that is measured over the
			 * course of a portion of an hour, while enterprise applications however commonly
			 * assume the demand (in kW or kVAr) normalised to 1 hour. The system that
			 * receives readings directly from the meter therefore shall perform this
			 * transformation before publishing readings for use by the other enterprise
			 * systems. The scalar used is chosen based on the block size (not any sub-
			 * interval size).
			 */
			IEC61970::Base::Domain::String measuringPeriod;
			/**
			 * Metering-specific multiplier.
			 */
			IEC61970::Base::Domain::String multiplier;
			/**
			 * Metering-specific phase code.
			 */
			IEC61970::Base::Domain::String phases;
			/**
			 * Time of use (TOU) bucket the reading value is attributed to. Value 0 means not
			 * applicable.
			 */
			IEC61970::Base::Domain::Integer tou;
			/**
			 * Metering-specific unit.
			 */
			IEC61970::Base::Domain::String unit;
			/**
			 * Channel reporting/collecting register values with this type information.
			 */
			IEC61968::Metering::Channel *Channel;

		};

	}

}
#endif // READINGTYPE_H
