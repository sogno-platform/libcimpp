map.insert(std::make_pair("cim:VoltageLevel.Substation", &assign_Substation_VoltageLevels));
map.insert(std::make_pair("cim:SubGeographicalRegion.Region", &assign_GeographicalRegion_Regions));
map.insert(std::make_pair("cim:Equipment.EquipmentContainer", &assign_EquipmentContainer_Equipments));
map.insert(std::make_pair("cim:DiagramObject.IdentifiedObject", &assign_IdentifiedObject_DiagramObjects));
map.insert(std::make_pair("cim:DiagramObjectPoint.DiagramObject", &assign_DiagramObject_DiagramObjectPoints));
map.insert(std::make_pair("cim:Substation.Region", &assign_SubGeographicalRegion_Substations));
map.insert(std::make_pair("cim:OperationalLimit.OperationalLimitSet", &assign_OperationalLimitSet_OperationalLimitValue));
map.insert(std::make_pair("cim:ConformLoad.LoadGroup", &assign_ConformLoadGroup_EnergyConsumers));