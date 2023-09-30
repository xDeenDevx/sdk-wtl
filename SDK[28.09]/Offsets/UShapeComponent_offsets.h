namespace offsets
{
	namespace UShapeComponent
	{
			constexpr auto ShapeBodySetup = 0x440; // Size: 8, Type: struct UBodySetup*
			constexpr auto AreaClass = 0x448; // Size: 8, Type: UNavAreaBase*
			constexpr auto ShapeColor = 0x450; // Size: 4, Type: struct FColor
			constexpr auto bDrawOnlyIfSelected = 0x454; // Size: 1, Type: char
			constexpr auto bShouldCollideWhenPlacing = 0x454; // Size: 1, Type: char
			constexpr auto bDynamicObstacle = 0x454; // Size: 1, Type: char
	}
} 
