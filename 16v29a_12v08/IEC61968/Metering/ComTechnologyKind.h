///////////////////////////////////////////////////////////
//  ComTechnologyKind.h
//  Implementation of the Class ComTechnologyKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef COMTECHNOLOGYKIND_H
#define COMTECHNOLOGYKIND_H

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Kind of communication technology.
		 */
		enum class ComTechnologyKind
		{
			/**
			 * Communicates using a public cellular radio network. A specific variant of 'rf'.
			 */
			cellular,
			/**
			 * Communicates using one or more of a family of frame-based computer networking
			 * technologies conforming to the IEEE 802.3 standard.
			 */
			ethernet,
			/**
			 * Communicates using power line communication technologies conforming to the
			 * standards established by the HomePlug Powerline Alliance. A specific variant of
			 * 'plc'.
			 */
			homePlug,
			/**
			 * Communicates using a public one-way or two-way radio-based paging network. A
			 * specific variant of 'rf'.
			 */
			pager,
			/**
			 * Communicates using a basic, wireline telephone system.
			 */
			phone,
			/**
			 * Communicates using power line communication technologies.
			 */
			plc,
			/**
			 * Communicates using private or public radio-based technology.
			 */
			rf,
			/**
			 * Communicates using a mesh radio technology. A specific variant of 'rf'.
			 */
			rfMesh,
			/**
			 * Communicates using radio communication technologies conforming to the standards
			 * established by the ZigBee. A specific variant of 'rf'.
			 */
			zigbee
		};

	}

}
#endif // COMTECHNOLOGYKIND_H
