// ©2023 JDSherbert. All rights reserved.

#include <Runtime/Core/Public/CoreMinimal.h>

#include "EnumTemplate.generated.h"

UENUM(BlueprintType)
enum class EEnumTemplate : uint8 
{
    Null = 0  UMETA(DisplayName="NULL"),
    A    = 1  UMETA(DisplayName="A"),
    B    = 2  UMETA(DisplayName="B"),
    C    = 3  UMETA(DisplayName="C"),
};
