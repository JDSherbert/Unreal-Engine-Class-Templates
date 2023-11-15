// ©2023 JDSherbert. All rights reserved.

#pragma once

#include <Runtime/Core/Public/CoreMinimal.h>

#include <Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h>

#include "BlueprintFunctionLibraryTemplate.generated.h"

/**
 * Blueprint Function Library Template class
 * \n
 * Description goes here!
 * @since Unreal Engine 5.2
 * @author JDSherbert
 */
UCLASS()
class TEMPLATE_API UBlueprintFunctionLibraryTemplate final : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    /**
    *
    */
    UFUNCTION(BlueprintCallable, Category = "SomeCategory|SomeSubCategory")
    static void SomeStaticFunction();
};

