///////////////////////////////////////////////////////////
//  CommodityKind.h
//  Implementation of the Class CommodityKind
//  Original author: Marty
///////////////////////////////////////////////////////////

#ifndef COMMODITYKIND_H
#define COMMODITYKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfMetering
		{
			namespace ReadingTypeEnumerations
			{
				enum class CommodityKind
				{
					/**
					 * Not Applicable
					 */
					none = 0,
					/**
					 * All types of metered quantities. This type of reading comes from the meter and
					 * represents a “secondary” metered value.
					 */
					electricitySecondaryMetered = 1,
					/**
					 * It is possible for a meter to be outfitted with an external VT and/or CT. The
					 * meter might not be aware of these devices, and the display not compensate for
					 * their presence. Ultimately, when these scalars are applied, the value that
					 * represents the service value is called the “primary metered” value. The “index”
					 * in sub-category 3 mirrors those of sub-category 0.
					 */
					electricityPrimaryMetered = 2,
					/**
					 * A measurement of the communication infrastructure itself.
					 */
					communication = 3,
					air = 4,
					/**
					 * (SF<sub>6</sub> is found separately below.)
					 */
					insulativeGas = 5,
					insulativeOil = 6,
					naturalGas = 7,
					propane = 8,
					/**
					 * Drinkable water
					 */
					potableWater = 9,
					/**
					 * Water in steam form, usually used for heating.
					 */
					steam = 10,
					/**
					 * (Sewerage)
					 */
					wasteWater = 11,
					/**
					 * This fluid is likely in liquid form. It is not necessarily water or water based.
					 * The warm fluid returns cooler than when it was sent. The heat conveyed may be
					 * metered.
					 */
					heatingFluid = 12,
					/**
					 * The cool fluid returns warmer than when it was sent. The heat conveyed may be
					 * metered.
					 */
					coolingFluid = 13,
					/**
					 * Reclaimed water – possibly used for irrigation but not sufficiently treated to
					 * be considered safe for drinking.
					 */
					nonpotableWater = 14,
					/**
					 * Nitrous Oxides NO<sub>X</sub>
					 */
					nox = 15,
					/**
					 * Sulfur Dioxide SO<sub>2</sub>
					 */
					so2 = 16,
					/**
					 * Methane CH<sub>4</sub>
					 */
					ch4 = 17,
					/**
					 * Carbon Dioxide CO<sub>2</sub>
					 */
					co2 = 18,
					carbon = 19,
					/**
					 * Hexachlorocyclohexane HCH
					 */
					hch = 20,
					/**
					 * Perfluorocarbons PFC
					 */
					pfc = 21,
					/**
					 * Sulfurhexafluoride SF<sub>6</sub>
					 */
					sf6 = 22,
					/**
					 * Television
					 */
					tvLicence = 23,
					/**
					 * Internet service
					 */
					internet = 24,
					/**
					 * trash
					 */
					refuse = 25
				};

			}

		}

	}

}
#endif // COMMODITYKIND_H
