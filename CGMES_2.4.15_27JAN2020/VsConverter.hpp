#ifndef VsConverter_H
#define VsConverter_H

#include "ACDCConverter.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "CurrentFlow.hpp"
#include "PU.hpp"
#include "Resistance.hpp"
#include "VsPpccControlKind.hpp"
#include "VsQpccControlKind.hpp"
#include "PerCent.hpp"
#include "ReactivePower.hpp"
#include "Voltage.hpp"
#include "AngleDegrees.hpp"

namespace CIMPP {


class VsCapabilityCurve;
	/*
	DC side of the voltage source converter (VSC).
	*/
	class VsConverter: public ACDCConverter
	{

	public:
					CIMPP::VsCapabilityCurve* CapabilityCurve; 	/* All converters with this capability curve. Default: 0 */
					CIMPP::Simple_Float maxModulationIndex; 	/* The max quotient between the AC converter voltage (Uc) and DC voltage (Ud). A factor typically less than 1. VSC configuration data used in power flow. Default: nullptr */
					CIMPP::CurrentFlow maxValveCurrent; 	/* The maximum current through a valve. This current limit is the basis for calculating the capability diagram. VSC  configuration data. Default: nullptr */
					CIMPP::PU droop; 	/* Droop constant; pu value is obtained as D [kV^2 / MW] x Sb / Ubdc^2. Default: nullptr */
					CIMPP::Resistance droopCompensation; 	/* Compensation (resistance) constant. Used to compensate for voltage drop when controlling voltage at a distant bus. Default: nullptr */
					CIMPP::VsPpccControlKind pPccControl; 	/* Kind of control of real power and/or DC voltage. Default: 0 */
					CIMPP::VsQpccControlKind qPccControl; 	/*  Default: 0 */
					CIMPP::PerCent qShare; 	/* Reactive power sharing factor among parallel converters on Uac control. Default: nullptr */
					CIMPP::ReactivePower targetQpcc; 	/* Reactive power injection target in AC grid, at point of common coupling. Default: nullptr */
					CIMPP::Voltage targetUpcc; 	/* Voltage target in AC grid, at point of common coupling. Default: nullptr */
					CIMPP::AngleDegrees delta; 	/* Angle between uf and uc. Converter state variable used in power flow. Default: nullptr */
					CIMPP::Voltage uf; 	/* Filter bus voltage. Converter state variable, result from power flow. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		VsConverter();
		virtual ~VsConverter();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* VsConverter_factory();
}
#endif
