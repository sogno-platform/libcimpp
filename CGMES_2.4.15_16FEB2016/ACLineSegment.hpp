#ifndef ACLineSegment_H
#define ACLineSegment_H

#include "Conductor.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Susceptance.hpp"
#include "Conductance.hpp"
#include "Resistance.hpp"
#include "Temperature.hpp"
#include "Reactance.hpp"

namespace CIMPP {


	/*
	A wire or combination of wires, with consistent electrical characteristics, building a single electrical system, used to carry alternating current between points in the power system. For symmetrical, transposed 3ph lines, it is sufficient to use  attributes of the line segment, which describe impedances and admittances for the entire length of the segment.  Additionally impedances can be computed by using length and associated per length impedances. The BaseVoltage at the two ends of ACLineSegments in a Line shall have the same BaseVoltage.nominalVoltage. However, boundary lines  may have slightly different BaseVoltage.nominalVoltages and  variation is allowed. Larger voltage difference in general requires use of an equivalent branch.
	*/
	class ACLineSegment: public Conductor
	{

	public:
					CIMPP::Susceptance b0ch; 	/* Zero sequence shunt (charging) susceptance, uniformly distributed, of the entire line section. Default: nullptr */
					CIMPP::Susceptance bch; 	/* Positive sequence shunt (charging) susceptance, uniformly distributed, of the entire line section.  This value represents the full charging over the full length of the line. Default: nullptr */
					CIMPP::Conductance g0ch; 	/* Zero sequence shunt (charging) conductance, uniformly distributed, of the entire line section. Default: nullptr */
					CIMPP::Conductance gch; 	/* Positive sequence shunt (charging) conductance, uniformly distributed, of the entire line section. Default: nullptr */
					CIMPP::Resistance r; 	/* Positive sequence series resistance of the entire line section. Default: nullptr */
					CIMPP::Resistance r0; 	/* Zero sequence series resistance of the entire line section. Default: nullptr */
					CIMPP::Temperature shortCircuitEndTemperature; 	/* Maximum permitted temperature at the end of SC for the calculation of minimum short-circuit currents. Used for short circuit data exchange according to IEC 60909 Default: nullptr */
					CIMPP::Reactance x; 	/* Positive sequence series reactance of the entire line section. Default: nullptr */
					CIMPP::Reactance x0; 	/* Zero sequence series reactance of the entire line section. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ACLineSegment();
		virtual ~ACLineSegment();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ACLineSegment_factory();
}
#endif
