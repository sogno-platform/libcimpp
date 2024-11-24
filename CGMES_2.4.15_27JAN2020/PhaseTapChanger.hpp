#ifndef PhaseTapChanger_H
#define PhaseTapChanger_H

#include "TapChanger.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class TransformerEnd;
	/*
	A transformer phase shifting tap model that controls the phase angle difference across the power transformer and potentially the active power flow through the power transformer.  This phase tap model may also impact the voltage magnitude.
	*/
	class PhaseTapChanger: public TapChanger
	{

	public:
					CIMPP::TransformerEnd* TransformerEnd; 	/* Phase tap changer associated with this transformer end. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		PhaseTapChanger();
		virtual ~PhaseTapChanger();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PhaseTapChanger_factory();
}
#endif
