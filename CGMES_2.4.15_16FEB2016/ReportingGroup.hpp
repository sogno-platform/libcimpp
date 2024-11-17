#ifndef ReportingGroup_H
#define ReportingGroup_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class BusNameMarker;
class TopologicalNode;
	/*
	A reporting group is used for various ad-hoc groupings used for reporting.
	*/
	class ReportingGroup: public IdentifiedObject
	{

	public:
					std::list<CIMPP::BusNameMarker*> BusNameMarker; 	/* The reporting group to which this bus name marker belongs. Default: 0 */
					std::list<CIMPP::TopologicalNode*> TopologicalNode; 	/* The reporting group to which the topological node belongs. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ReportingGroup();
		virtual ~ReportingGroup();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ReportingGroup_factory();
}
#endif
