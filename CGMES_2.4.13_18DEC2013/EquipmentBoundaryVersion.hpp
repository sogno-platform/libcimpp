#ifndef EquipmentBoundaryVersion_H
#define EquipmentBoundaryVersion_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "Date.hpp"
#include "String.hpp"

namespace CIMPP
{

	/*
	Profile version details.
	*/
	class EquipmentBoundaryVersion : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		EquipmentBoundaryVersion();
		~EquipmentBoundaryVersion() override;

		CIMPP::String baseUML;  /* Base UML provided by CIM model manager. Default: '' */
		CIMPP::String baseURI;  /* Profile URI used in the Model Exchange header and defined in IEC standards.  It uniquely identifies the Profile and its version. It is given for information only and to identify the closest IEC profile to which this CGMES profile is based on. Default: '' */
		CIMPP::Date date;  /* Profile creation date Form is YYYY-MM-DD for example for January 5, 2009 it is 2009-01-05. Default: '' */
		CIMPP::String differenceModelURI;  /* Difference model URI defined by IEC 61970-552. Default: '' */
		CIMPP::String entsoeUML;  /* UML provided by ENTSO-E. Default: '' */
		CIMPP::String entsoeURIcore;  /* Profile URI defined by ENTSO-E and used in the Model Exchange header.  It uniquely identifies the Profile and its version. The last two elements in the URI (http://entsoe.eu/CIM/EquipmentBoundary/yy/zzz) indicate major and minor versions where:  - yy - indicates a major version; - zzz - indicates a minor version. Default: '' */
		CIMPP::String entsoeURIoperation;  /* Profile URI defined by ENTSO-E and used in the Model Exchange header.  It uniquely identifies the Profile and its version. The last two elements in the URI (http://entsoe.eu/CIM/EquipmentBoundaryOperation/yy/zzz) indicate major and minor versions where:  - yy - indicates a major version; - zzz - indicates a minor version. Default: '' */
		CIMPP::String modelDescriptionURI;  /* Model Description URI defined by IEC 61970-552. Default: '' */
		CIMPP::String namespaceRDF;  /* RDF namespace. Default: '' */
		CIMPP::String namespaceUML;  /* CIM UML namespace. Default: '' */
		CIMPP::String shortName;  /* The short name of the profile used in profile documentation. Default: '' */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* EquipmentBoundaryVersion_factory();
}
#endif
