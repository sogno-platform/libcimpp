#ifndef GenICompensationForGenJ_H
#define GenICompensationForGenJ_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"

namespace CIMPP {


class SynchronousMachineDynamics;
class VCompIEEEType2;
	/*
	This class provides the resistive and reactive components of compensation for the generator associated with the IEEE Type 2 voltage compensator for current flow out of one of the other generators in the interconnection.
	*/
	class GenICompensationForGenJ: public IdentifiedObject
	{

	public:
					CIMPP::SynchronousMachineDynamics* SynchronousMachineDynamics; 	/* Standard synchronous machine out of which current flow is being compensated for. Default: 0 */
					CIMPP::VCompIEEEType2* VcompIEEEType2; 	/* The standard IEEE Type 2 voltage compensator of this compensation. Default: 0 */
					CIMPP::PU rcij; 	/*  Default: nullptr */
					CIMPP::PU xcij; 	/*  Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		GenICompensationForGenJ();
		virtual ~GenICompensationForGenJ();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GenICompensationForGenJ_factory();
}
#endif
