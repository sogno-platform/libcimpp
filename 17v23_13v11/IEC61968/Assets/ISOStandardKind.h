///////////////////////////////////////////////////////////
//  ISOStandardKind.h
//  Implementation of the Class ISOStandardKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ISOSTANDARDKIND_H
#define ISOSTANDARDKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * List of ISO standards.
		 */
		enum class ISOStandardKind
		{
			/**
			 * Determination of flash and fire points -- Cleveland open cup method (copied
			 * directly from ASTM D92).
			 */
			 _undef = -1, 	_2592,
			/**
			 * Determination of flash point -- Pensky-Martens closed cup method (copied
			 * directly from ASTM D93)  -or-
			 * Petroleum products and lubricants -- Determination of flash point -- Pensky-
			 * Martens closed cup method (copied directly from ASTM D93)  -or-
			 * Petroleum products -- Determination of flash point -- Pensky-Martens closed cup
			 * method (copied directly from ASTM D93).
			 */
			_2719,
			/**
			 * Petroleum products -- Determination of pour point  -or-
			 * Petroleum oils -- Determination of pour point.
			 */
			_3016,
			/**
			 * Petroleum products -- Transparent and opaque liquids -- Determination of
			 * kinematic viscosity and calculation of dynamic viscosity.
			 */
			_3104,
			/**
			 * Crude petroleum and liquid petroleum products -- Laboratory determination of
			 * density -- Hydrometer method  -or-
			 * Crude petroleum and liquid petroleum products -- Laboratory determination of
			 * density or relative density -- Hydrometer method.
			 */
			_3675,
			/**
			 * Paper and board -- Determination of tensile strength.
			 */
			_1924,
			/**
			 * Paper and board -- Determination of tensile properties -- Part 1: Constant rate
			 * of loading method.
			 */
			_1924_1,
			/**
			 * Paper and board -- Determination of tensile properties -- Part 2: Constant rate
			 * of elongation method (20 mm/min)  -or-
			 * Paper and board -- Determination of tensile properties -- Part 2: Constant rate
			 * of elongation method.
			 */
			_1924_2,
			/**
			 * Paper and board -- Determination of tensile properties -- Part 3: Constant rate
			 * of elongation method (100 mm/min).
			 */
			_1924_3
		};

	}

}
#endif // ISOSTANDARDKIND_H
