#ifndef DiscExcContIEEEDEC3A_H
#define DiscExcContIEEEDEC3A_H

#include "DiscontinuousExcitationControlDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Seconds.hpp"
#include "PU.hpp"

namespace CIMPP {


	/*
	The class represents IEEE Type DEC3A model. In some systems, the stabilizer output is disconnected from the regulator immediately following a severe fault to prevent the stabilizer from competing with action of voltage regulator during the first swing.  Reference: IEEE Standard 421.5-2005 Section 12.4.
	*/
	class DiscExcContIEEEDEC3A: public DiscontinuousExcitationControlDynamics
	{

	public:
					CIMPP::Seconds tdr; 	/* Reset time delay (). Default: nullptr */
					CIMPP::PU vtmin; 	/* Terminal undervoltage comparison level (). Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		DiscExcContIEEEDEC3A();
		virtual ~DiscExcContIEEEDEC3A();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DiscExcContIEEEDEC3A_factory();
}
#endif
