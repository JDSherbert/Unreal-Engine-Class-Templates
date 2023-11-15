// ©2023 JDSherbert. All rights reserved.

#pragma once

#include <Runtime/Core/Public/CoreMinimal.h>

#include "ClassTemplate.generated.h"

/**
 * Class Template class
 * \n
 * Description goes here!
 * @since Unreal Engine 5.2
 * @author JDSherbert
 */
UClass(Blueprintable, Category = "SomeCategory|SomeSubCategory")
struct UClassTemplate
{
    GENERATED_BODY();

public:

    UClassTemplate()
    : SomeInt(0)
    , SomeFloat(0.0f)
    {
        // Assign constructor values here
    }

    ~FClassTemplate()
    {
        // Assign destructor values here
    }

    UPROPERTY(BlueprintReadWrite, Category = "SomeCategory|SomeSubCategory")
    int SomeInt;

    UPROPERTY(BlueprintReadWrite, Category = "SomeCategory|SomeSubCategory")
    float SomeFloat;

    UFUNCTION(BlueprintCallable)
    FORCEINLINE void SomeFunction() const { return; }
};
