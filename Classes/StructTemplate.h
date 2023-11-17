// ©2023 JDSherbert. All rights reserved.

#pragma once

#include <Runtime/Core/Public/CoreMinimal.h>

#include "StructTemplate.generated.h"

/**
 * Struct Template class
 * \n
 * Description goes here!
 * @since Unreal Engine 5.2
 * @author JDSherbert
 */
USTRUCT(Blueprintable, Category = "SomeCategory|SomeSubCategory")
struct TEMPLATE_API FStructTemplate
{
    GENERATED_BODY();

public:

    FStructTemplate()
    : SomeInt(0)
    , SomeFloat(0.0f)
    {
        // Assign constructor values here
    }

    ~FStructTemplate()
    {
        // Assign destructor values here
    }

    UPROPERTY(BlueprintReadWrite, Category = "SomeCategory|SomeSubCategory")
    int SomeInt;

    UPROPERTY(BlueprintReadWrite, Category = "SomeCategory|SomeSubCategory")
    float SomeFloat;
};
