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
UCLASS(Blueprintable, Category = "SomeCategory|SomeSubCategory")
class TEMPLATE_API UClassTemplate
{
    GENERATED_BODY();

public:

    UClassTemplate()
    : SomeInt(0)
    , SomeFloat(0.0f)
    {
        // Assign constructor values here
    }

    ~UClassTemplate()
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
